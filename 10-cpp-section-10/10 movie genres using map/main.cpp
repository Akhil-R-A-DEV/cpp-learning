#include<iostream>
#include <string>
#include<fstream>
#include<map>

int main() {

	std::ifstream genreData("genres.txt");

	if (!genreData) {
		std::cerr << "sorry can't open the file" << std::endl;
	}

	std::map<std::string, int>genreCounts;
	std::string genere;
	int total = 0;

	while (genreData >> genere) {
		genreCounts[genere]++;
		total++;
	}

	genreData.close();



	for (const auto& pair: genreCounts) {
		std::cout << pair.first  << " : " << pair.second << std::endl;
		
	}


	return 0;
}