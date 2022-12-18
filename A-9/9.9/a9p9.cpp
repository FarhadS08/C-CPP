/*
CH-230-A
a9 p9.[cpp]
Farhad Suleymanzade
fsuleymanz@jacobs-university.de
*/

#include <iostream>
using namespace std;

int main(){
    string words[17] = {"computer", "laptop", "television", "mouse", "keyboard", "book",
    "shelf", "lamp", "bed", "chair", "table", "notebook", "pen", "journal", 
    "wallet", "pencil", "headphones"
    };

    int count = 0;

    int randomNumber;
    string input;

    // create random num seed and initialize random num
    srand (static_cast <unsigned int>(time (0)));
    randomNumber = rand();

    // set random to be between 1-17
    randomNumber = (randomNumber % 17);
    
    // add random number to the index of the words array
    string randomword=words[randomNumber];
    string temp = randomword;

    // change vowels to underscore
    for (unsigned int i = 0; i < randomword.length(); i++){

        if(randomword[i]=='a' ||randomword[i]=='e' ||randomword[i]=='i' ||randomword[i]=='o' ||randomword[i]=='u'){
            temp[i] = '_';
        }

    }

    // ask user for guess, count them and ask if they want to quit or continue 
    while(true){
        cout << "Try to guess the word: " << temp << endl;
        cin >> input;
        count++;
        if (input == "quit"){
            exit(1);
        }

        if (input == randomword){
            cout << "\nCorrect! You got it in " << count << endl;
            cout << "Do you want to continue? yes/no: " << endl;

            string answer;

            cin >> answer;

            if(answer == "yes"){
                
                main();

            }else{
                break;
            }
        }

    }
}