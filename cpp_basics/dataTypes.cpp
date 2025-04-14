#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

// C++ is a statically-type language: 
// need to specify the type of variables.

/* Some types:   (bytes)
for integer numbers
short     2
int       4
long      4
longlong  8

for decimal numbers
float       4
double      8
longdouble  8

for boolean 
bool  1  true/false
char  1  character
*/



int main() {

    // // Initialize variables:

    // double price = 99.99;
    // float interestRate = 3.67f;

    // int fileSize = 900;
    // long fileSizeBig = 90000L;

    // bool isValid = false;
    // char letter = 'a';

    // auto decayRate = 4.28f;

    // int pino = {0};
    // cout << pino << endl;




    // // Decimal, binary and exadecimal representations
    // int number = 0b11111111;
    // int number2 = 0xff;
    // cout << number << endl;
    // cout << number2 << endl;

    // // Note!
    // unsigned int n = 0;
    // n--;
    // cout << n << endl;




    // // Narrowing
    // short number = 1000;
    // int another{number};
    // cout << another << endl;




    // // Random numbers generation
    // int number = rand();
    // srand(3);
    // cout << number << endl;

    // // Roll a dice
    // const int min = 1, max = 6;

    // srand(time(0));
    // int dice = (rand() % (max - min + 1)) + 1;
    // cout << dice << endl;




    // string names[3];
    // cout << "Name ";
    // getline(cin,names[0]);
    // cout << "Name ";
    // getline(cin,names[1]);
    // cout << "Name ";
    // getline(cin,names[2]);

    // cout<<names[0];


    // // Data types conversion
    // int x= 1;
    // double y = 2.0;
    // int z=x+(int)y;
    // cout<<z<<endl;
    // x= 10;
    // int d = 3;
    // double r=static_cast<double>(x)/d;
    // cout<<r;

    return 0;
}