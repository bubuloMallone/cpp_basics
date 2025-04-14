#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

/*
Order of logical operators
! > && > || 
can use  ()
*/

int main(){
    
    const int minAge = 0, maxAge = 100;

    srand(time(0));
    int age = (rand() % (maxAge - minAge)) + 1;
    cout << "Age: " << age << endl; 

    bool isEligible = age > 18 && age < 65;
    cout << "Eligible: " << boolalpha << isEligible << endl;

    const int minSalary = 5000, maxSalary = 1e+9;
    int salary = (rand() % (maxSalary - minSalary)) + 1;
    cout << "Salary: " << setprecision(0) << scientific << salary << endl;

    bool isWealthy = salary > 1e+6;
    cout << "Whealty: " << boolalpha << isWealthy << endl;

    bool isCandidate = (isEligible && !isWealthy);
    cout << "Candidate: " << boolalpha << isCandidate << endl;

    return 0;
}