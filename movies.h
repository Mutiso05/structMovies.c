#ifndef MOVIES_H
#define MOVIES_H

struct Details{
	char title[50];
	char Actor[50];
	int yearRelease;
	int price;


};
 struct movietype{
 	char name[50];
 	int duration;
 	struct Details dtr1;


 };
 struct company{
 	char director[50];
 	char country[50];
 	char producer[50];
 	struct movietype dtr2;
 };

 void inputMovies(struct Movie *movies);
 void displayMovies (struct Movie movies);

 #endif