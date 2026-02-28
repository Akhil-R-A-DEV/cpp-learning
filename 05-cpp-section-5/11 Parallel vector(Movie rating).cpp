/*
create a project called movie ratings 
use two parallel vectore : one for the movie name and the another for the movie rating
prompt the user for 5 movie title and ratings
    use getline(cin,...) to read the full movie name 
	use cin to read the numaric ratings 
after collecting the data, output a summary like 
   "you rated movie name a 7/10"
*/

#include <iostream>
#include <vector>
#include <string>
int main() {

	std::vector<std::string>movieNames;
	std::vector<int>ratings;
	std::string movieName;
	int rating;
	int numberOfMovies = 5;

	for (int i = 0; i < numberOfMovies; i++) {
		std::cout << "Movie name : ";
		getline(std::cin, movieName);
		movieNames.push_back(movieName);

		std::cout << "Please give a rating (1 to 10 ) for \"" << movieName << "\" : ";
		std::cin >> rating;
		std::cin.get();
		ratings.push_back(rating);
	}

	//for (std::string a : movieNames ) {
	//	std::cout << "movie name - " << a << std::endl;
	//}
	//for (int a : ratings) {
	//	std::cout << "movie ratings - " << a << std::endl;
	//}

	std::cout << std::endl;

	for (int i = 0; i < numberOfMovies; i++) {
		std::cout << "Movie is : \"" << movieNames[i] << "\" ,and you gave a rating of : " << ratings[i] << "/10" << std::endl;
	}




	return 0;
}