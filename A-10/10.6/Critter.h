/*
CH-230-A
a10 p6.[cpp]
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
	double thirst;


public: // business logic methods are public
	// setter methods
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
	// thirst setter
	void setThirst(double newthirst);
	// getter method
	int getHunger();
	// thirst getter
	double getThirst();
	// service method
	void print();

	// create constructors
	Critter();
	Critter(std:: string );
	// set initial height to 10
	Critter(std:: string, int, int, double = 10);
	// new constuct for thirst
	Critter(std:: string, int, int, double, double);


	// create methods to make double and make int
	int gethunger2();
	double getdoublehunger(int);
		
};