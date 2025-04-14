#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

/*
The while and do-while loops
*/

int main(){

    // int number = 0;
    // while(number<1 || number>5){
    //     cout << "Enter a number between 1 and 5: ";
    //     cin >> number;
    //     if (number<1 || number>5){
    //         cout << "Not valid number!" << endl;
    //     }
    // }

    // while(true){
    //     int number;
    //     cout << "Enter a number between 1 and 5: ";
    //     cin >> number;
    //     if (number>1 && number<5){
    //         break;
    //     }
    //     cout << "Not valid number!" << endl;
    // }
    


    for (int i = 1; i <= 8; i++){
        for (int j = 0; j < i; j++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}