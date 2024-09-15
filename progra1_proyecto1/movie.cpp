#include "movie.h"

#pragma region builders
Movie::Movie() {
	name = "null";
	duration = 0;
	synapse = "null";
	reviews = 0;
	language = "null";
}

Movie::Movie(string name, int duration, string synapse, int reviews, string language) {
	this->name = name;
	this->duration = duration;
	this->synapse = synapse;
	this->reviews = reviews;
	this->language = language;
}

Movie::~Movie() {}
#pragma endregion

#pragma region gets

string Movie::getName() {
	return name;
}

int Movie::getDuration() {
	return duration;
}

string Movie::getSynapse() {
	return synapse;
}

int Movie::getReviews() {
	return reviews;
}

string Movie::getLanguage() {
	return language;
}
#pragma endregion

#pragma region Sets
void Movie::setName(string name) {
	this->name = name;
}

void Movie::setDuration(int duration) {
	this->duration = duration;
}

void Movie::setSynapse(string synapse) {
	this->synapse = synapse;
}

void Movie::setReviews(int reviews) {
	this->reviews = reviews;
}

void Movie::setLanguage(string language) {
	this->language = language;
}
#pragma endregion


