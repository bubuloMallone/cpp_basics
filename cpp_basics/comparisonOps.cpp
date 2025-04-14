#include <iostream>

using namespace std;

int main(){
    
    // compare numbers
    int x;
    double y;
    bool result = x>y;  // authomatically converts x (int --> double)
    cout << "x = " << x << endl
         << "y = " << y << endl;
    cout << boolalpha << result << endl;

    // compare characters
    char letter1 = 'a', letter2 = 'A';
    result = letter1==letter2;
    cout << boolalpha << result << endl;

    return 0;
}