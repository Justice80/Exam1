#include <iostream>
#include <string>
#ifndef Movie_H_
#define Movie_H_

using namespace std;

class Theater {
private:
	string Name, Phone, MovieForHour;
	int Hour, PopcornPrice, CokePrice, ShowTimeForGenre;
	Movie TheatreMovies[11];
public:
	Theater(string name, string phone){
		Name = name;
		Phone = phone;
		PopcornPrice = 6;
		CokePrice = 4;
	}

	void AddMovie(Movie &NewMovie) {
		Movie TheatreMovies = NewMovie;
	}
	string GetMovieForHour(int Hour) { return MovieForHour; }
	int GetShowTimeForGenre(string Genre) { return ShowTimeForGenre; }
	int GetPopcornPrice(){ return PopcornPrice; }
	int GetCokePrice(){ return CokePrice; }
};
#endif