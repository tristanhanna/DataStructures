#include <iostream>

using namespace std;

class Movie{
private:
  string title;
  int year;
  float rating;
public:
  string getTitle();
  void setTitle(string);
  int getYear();
  void setYear(int);
  float getRating();
  void setRating(float);
  Movie(string, int, float);
  Movie();
};

Movie::Movie(string theTitle, int theYear, float theRating){
  title=theTitle;
  year=theYear;
  rating=theRating;
}

Movie::Movie(){
  title="unknown";
  year=2018;
  rating=0.0;
}

string Movie::getTitle(){
  return title;
}

void Movie::setTitle(string newTitle){
  title=newTitle;
}

int Movie::getYear(){
  return year;
}

void Movie::setYear(int newYear){
  year=newYear;
}

float Movie::getRating(){
  return rating;
}

void Movie::setRating(float newRating){
  rating=newRating;
}
