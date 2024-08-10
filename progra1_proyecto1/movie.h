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
	//string getName
	//===============================sets

};
#endif