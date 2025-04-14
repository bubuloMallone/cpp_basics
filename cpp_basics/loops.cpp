#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

/*
The for loop in c++
*/

int main(){


    // // EX. 1
    // cout << "Entere a positive integer number:  " << endl;
    // int number;
    // cin >> number;

    // if (number < 0){
    //     cout << "Error! Number is not positive." << endl;
    // }
    // else {
    //     int factorial = 1;
    //     for (int i = 1; i <= number; i++){
    //         factorial = factorial * i;
    //     }
    //     cout << number << "!= " << factorial << endl;
    // }





    int numbers[] = {1,2,3,4};
    // sizeof(numbers) = 16
    // sizeof(int) = 4

    for (int i = 0; i < sizeof(numbers)/sizeof(int); i++){
        cout << numbers[i] << endl;
    }

    for (int number:numbers){
        cout << number << endl;
    }
    
    string name = "Pietro Giugiaro";
    for (char ch:name){
        cout << ch << endl;
    }

    return 0;
}