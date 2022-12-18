/*
CH-230-A
a13 p1.[cpp]
Rashad Mustafazada
rmustafaza@jacobs-university.de
*/

#include <fstream>
#include <iostream>


using namespace std;


int main(){
    ifstream file_source;
    ofstream file_destination;

    string res;

    cout << "Enter the name of the file" << endl;
    cin >> res;
    std:: ofstream outPutFile (res + ".txt");
    file_source.open(res, ios::in | ios:: binary);
    file_destination.open(res + "_copy.txt", ios:: out | ios:: binary);

    file_source.close();
    file_destination.close();
    outPutFile.close();

}