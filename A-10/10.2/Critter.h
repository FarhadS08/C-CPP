/*
CH-230-A
a10 p2.[cpp]
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
	int happy;

public: // business logic methods are public
	// setter methods
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
	void setHappy(int newhappiness);
	void setHeight(double newheight);

	// getter method
	int getHunger();
	int getHappy();
	int getBoredom();
	int getHeight();
	// service method
	void print();
};