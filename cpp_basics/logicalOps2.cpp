#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

/*
The if, conditional operators and the switch statement
*/

int main(){
    
    const int minTemp = 253, maxTemp = 323;
    srand(time(0));
    int tempK = (rand() % (maxTemp - minTemp)) + 253;
    int tempC = tempK - 273;
    cout << "Temperature (Celsius): " << tempC << endl; 

    if (tempC < 10) 
        cout << "cold" << endl;
    else if (tempC > 35)
        cout << "hot" << endl;
    else cout << "warm" << endl;



    double sales = 1.1e+4;
    double tax = (sales>1e+4)? 0.1 : 0.05;
    cout << "tax: " << tax << endl;
    
    return 0;
}