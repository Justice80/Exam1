#include <iostream>
#include <string>

using namespace std;

class Movie {
private:
	string Title, Genre;
	int Time;
public:
	Movie(){	}
	Movie(string title, string genre, int time) {
		Title = title;
		Genre = genre;
		Time = time;
	}

	void setTitle(string title) {
		Title = title;
	}
	void setGenre(string genre) {
		Genre = genre;
	}
	void setTime(int time) {
		Time = time;
	}
	string GetTitle() { return Title; }
	string GetGenre() { return Genre; }
	int GetShowtime() { return Time; }
};