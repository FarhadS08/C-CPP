/*
CH-230-A
a11 p1.[cpp]
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/


#include<iostream>

class Volume{
    private:
        double width;
        double height;
        double depth;

    public:
        //setter methods
        void setWidth(double newWidth);
        void setHeight(double newHeight);
        void setDepth(double newDepth);

        //getter methods
        double getWidth();
        double getHeight();
        double getDepth();

        Volume();
        Volume(double, double, double);
        Volume(Volume &obj);
        ~Volume();


        void print();

};