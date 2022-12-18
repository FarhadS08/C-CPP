/*
CH-230-A
a11 p2.[cpp]
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/


#include <iostream>

using namespace std;

//////////////////////CREATURE////////////////////////

class Creature {
	public:
		Creature();  
		void run() const;

	protected:
		int distance;
};

Creature::Creature(): distance(10){}    

void Creature::run() const
{ 
    cout << "running " << distance << " meters!\n";
}  



///////////////////////WIZARD///////////////////////////

class Wizard : public Creature {
	public:
		Wizard();
		void hover() const;

	private:
		int distFactor;
};

Wizard::Wizard() : distFactor(3){}  

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

//////////////////////////LION/////////////////////////////

class Lion : public Creature {
    public:
        Lion();
        void search() const;

    private:
        int minutes;
};


Lion:: Lion(): minutes(5){}

void Lion:: search() const {
    cout << "Searching for a victim for " << (minutes) << " minutes\n";
}

////////////////////////WOLF///////////////////////////////


class Wolf: public Creature{
    public:
        Wolf();
        void howl() const;
    private:
        int howlRepeat;
};


void Wolf:: howl() const{
    cout << "Howling for " << (howlRepeat) << " times.\n";
}

Wolf :: Wolf() : howlRepeat(7){}

/////////////////////////MAIN////////////////////////////////


int main()
{ 
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();


    cout << "Creating a Lion.\n";
    Lion l;
    l.search();
     l.run();


    cout << "Creating a Wolf.\n";
    Wolf wolf;
    wolf.howl();
    wolf.run();

    return 0;
} 