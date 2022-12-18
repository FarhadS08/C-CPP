/*
CH-230-A
a11 p4.[cpp]
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/



#include <iostream>

using namespace std;



//////////////////CREATURE/////////////////

class Creature {
	public:
		Creature();  
		void run() const;

	protected:
		int distance;
};


///////////////////WIZARD////////////////

class Wizard : public Creature {
	public:
		Wizard();
		void hover() const;

	private:
		int distFactor;
};

///////////////////LION/////////////////

class Lion : public Creature {
    public:
        Lion();
        void search() const;

    private:
        int minutes;
};


//////////////////WOLF///////////////

class Wolf: public Creature{
    public:
        Wolf();
        void howl() const;
    private:
        int howlRepeat;
};