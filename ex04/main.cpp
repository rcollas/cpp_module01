#include <fstream>
#include <iostream>
#include <sstream>
#include <cstring>
#include <cstdlib>

// Store file content in a string

std::string getContent(char *fileName) {

	std::ifstream infile(fileName);

	if (infile.fail()) {
		std::cerr << "Open failed: " << fileName << ": "
					<< strerror(errno) << std::endl;
		exit(EXIT_FAILURE);
	}

	// get all file content at once

	std::stringstream buffer;
	buffer << infile.rdbuf();
	std::string contents(buffer.str());

	return contents;
}

std::string searchAndReplace(std::string const str,
							 char const *find,
							 char const *replace) {

	std::string content = str;

	size_t str1Len = strlen(find);
	size_t str2len = strlen(replace);

	size_t pos = content.find(find);

	while (pos != std::string::npos) {
		content.erase(pos, str1Len);
		content.insert(pos, replace);
		pos = content.find(find, pos + str2len);
	}

	return content;
}

int main(int ac, char **av) {

	if (ac != 4) {
		std::cout << "Arguments format : infile str1 str2" << std::endl;
		return 1;
	}

	std::string content = getContent(av[1]);
	std::string outContent = searchAndReplace(content, av[2], av[3]);


	std::string outfileName = av[1];
	outfileName += ".replace";
	std::ofstream outfile(outfileName.c_str());

	outfile << outContent;

	return 0;
}

