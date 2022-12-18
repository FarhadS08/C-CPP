/*
CH-230-A
a10 p5.[cpp]
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/



#include <string> // defines standard C++ string class


/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
	int hunger;
	int boredom;
	double height;


public: // business logic methods are public
	// setter methods
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
	// getter method
	int getHunger();
	// service method
	void print();

	// create constructors
	Critter();
	Critter(std:: string );
	// set initial height to 10
	Critter(std:: string, int, int, double = 10);


	// create methods to make double and make int
	int gethunger2();
	double getdoublehunger(int);
		
};