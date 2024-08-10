#pragma once

#ifndef MOVIE_H
#define MOVIE_H	

#include <iostream>
using namespace std;

class Movie
{
private:
	string name;
	int duration;
	string synapse;
	int reviews;
	string language;

public:
	//===============================builders
	Movie();
	Movie(string, int, string, int, string);
	~Movie();
	//===============================gets
	string getName();
	int getDuration();
	string getSynapse();
	int getReviews();
	string getLanguage();
	//===============================sets
	void setName(string);
	void setDuration(int);
	void setSynapse(string);
	void setReviews(int);
	void setLanguage(string);

};
#endif