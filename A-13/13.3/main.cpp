/*
CH-230-A
a13 p3.[cpp]
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/

#include <iostream>
#include <fstream>

int main(){
    std:: ifstream file;
    int n;
    std::cin >> n;

    std:: string array[n];
    

    std:: cout << "Enter " << n << " file names" << std:: endl;

    for (int i = 0; i < n; i++){
        std::cin >> array[i];
    }

    for (int i = 0; i < n; i++){
        file.open(array[i]+".txt");
    }

    file.close();

}