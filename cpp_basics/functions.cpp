#include <iostream>

#include "utils/crazy.hpp"

using namespace std;

void greetings(string fullName){
    cout << "Hello " << fullName << "," << endl;
}

string fullName(string firstName, string lastName){
    // concatenating (combining)
    return firstName + " " + lastName;
}




// Parameters with a default values (put default value params at the end)
double calcTax(double income, double taxRate = 0.2){
    return income * taxRate;
}



// Overloading functions
// The two following func have different "Signature" = name + (# and type of parameters. 
// NB the name of the params does not matter.
void welcome(string fullName){
    cout << "Hello " << fullName << endl;
}
void welcome(string title, string fullName){
    cout << "Hello " << title << " " << fullName << endl;
}



// Passing arguments by Value or Reference
// Value
double priceIncrease(double price, double increaseRate = 1.2){
    price *= increaseRate;
    return price;
}
// Reference (no copy of the passed variable is taken)
double priceIncrease2(double& price, double increaseRate = 1.2){
    price *= increaseRate;
    return price;
}



// Global variables
const double taxRate = 1.3;

double calculateTax(int sales){
    return sales * taxRate;
}



// Function Declaring
void ciao(string name);




int main(){

    // // Calling the function
    // greetings(fullName("Pietro", "Giugiaro"));

    // cout << "I wish you a good day!" << endl;

    // Passing arguments 
    double price = 100;
    // by Value (copy of the variable price is created)
    double priceNew = priceIncrease(price);
    cout << "starting price " << price << endl
         << "new price " << priceNew << endl;

    // by Reference (no copy of the variable price is created)
    price = 100;
    priceNew = priceIncrease2(price);
    cout << "starting price " << price << endl << "new price " << priceNew << endl;



    // // Function declaring and definition
    // ciao("Pietro");

    return 0;
}

//Function definition 
void ciao(string name){
    cout << "Ciao " << name << endl;
}