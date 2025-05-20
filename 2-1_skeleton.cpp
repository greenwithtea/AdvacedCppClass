#include <iostream>
#include <string>
using namespace std;

class Movie{

private:
	string title;
	string director;
	string actors;
	string grade;

public:
	
	// setter

	void setTitle(string t);
	void setDirector(string d);
	void setActors(string a);
	void setGrade(string g);

	//getter
	
	string getTitle();
	string getDirector();
	string getActors();
	string getGrade();

};


// setter body 구현

void Movie::setTitle(string t)
{
	title = t;
}

void Movie::setDirector(string d)
{
	director = d;
}

void Movie::setActors(string a)
{
	actors = a;
}

void Movie::setGrade(string g)
{
	grade = g;
}


// getter body 구현

string Movie::getTitle()
{
	return title;
}

string Movie::getDirector()
{
	return director;
}

string Movie::getActors()
{
	return actors;
}

string Movie::getGrade()
{
	return grade;
}


int main() {
	Movie mv;

	mv.setTitle("Jurassic World: Dominion, 2022 ");
	mv.setDirector("Colin Trevorrow ");
	mv.setActors("Bryce Dallas Howard ");
	mv.setGrade("12 years old");

	cout << mv.getTitle() << endl;
	cout << mv.getDirector() << endl;
	cout << mv.getActors() << endl;
	cout << mv.getGrade() << endl;

	return 0;
}