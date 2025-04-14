#include <iostream>
#include <memory>

using namespace std;

// passing pointers to functions
void swap(int* firstPtr, int* secondPtr){
    int temp = *firstPtr;
    *firstPtr = *secondPtr;
    *secondPtr = temp;
}

// Relation between arrays and pointers
// since the array is passed by Reference no copy of it will be generated and will be directly modified inside the function
// (numbers is the pointer to the the first element of the array in memory)
void setArrayZero(int numbers[], int size){
    for (int i = 0; i < size; i++){
        numbers[i] = 0;
    }
}

void printArray(int numbers[], int size){
    cout << "Array: [ ";
    for (int i = 0; i < size; i++){
        cout << numbers[i];
        if (i != size -1){
            cout << ", ";
        }
    }
    cout << "]" << endl;
}



int main(){

    // int number = 10;
    // // initialize a pointer variable
    // int* ptr = nullptr;
    // // the Address-of operator
    // ptr = &number;
    // cout << ptr << endl;
    // // the Indirection operator (de-referencing)
    // cout << *ptr << endl;

    // // costant variable with non-constant pointer
    // const int x = 20;
    // const int* xPtr = &x;

    // xPtr = &number;

    // // non-costant variable with constant pointer
    // int y = 30;
    // int* const yPtr = &y;

    // // costant variable with constant pointer
    // const int z = 40;
    // const int* const zPtr = &y;





    // // Passing pointers to functions
    // swap(&number, &y);
    // cout << number << " " << y << endl;

    // // Relation between arrays and pointers
    // int numbers[] = {10,20,30};
    // int* numbersPtr = numbers; //number is like a pointer
    // cout << *numbersPtr << endl;
    // cout << *numbers << endl;

    // printArray(numbers, size(numbers));
    // setArrayZero(numbers, size(numbers));
    // printArray(numbers, size(numbers));




    // // Pointers arithmetic
    // int numbers[] = {10,20,30};
    // int* numbersPtr = numbers; 

    // cout << *numbersPtr << endl;
    // numbersPtr++;  // equivalent to ptr + sizeof(*ptr) in memory
    // cout << *numbersPtr << endl << endl;

    // numbersPtr = numbers; // the following expr are all equivalent
    // cout << *(numbersPtr+1) << endl;
    // cout << numbersPtr[1] << endl;
    // cout << numbers[1] << endl;
   



    // // Comparing pointers
    // int x = 10;
    // int y = 20;

    // int* ptrX = &x;
    // int* ptrY = &y;

    // // comparing values stored at the addresses
    // if (*ptrX < *ptrY){
    //     cout << "x<y" << endl;
    // }
    // else cout << "x>=y" << endl;
    
    // // comparing the addresses of the pointers
    // if (ptrX != ptrY){
    //     cout << "x and y have different memory location" << endl;
    // }




    // // EX.
    // int numbers[] = {10, 20, 30, 40, 50, 60, 80};
    // int* numbersPtr = &numbers[size(numbers)-1];

    // while (numbersPtr >= numbers){
    //     cout << *numbersPtr << endl;
    //     numbersPtr--;
    // }





    // // Dynamic memory allocation
    // // variable allocated in Heap memory, need to clean up after usage
    // int* numbers = new int[10];  // create a pointer to an array of int of initial size 10
    
    // delete[] numbers; // deallocate Heap memory
    // //is good practice after deallocating the memory to re-set the pointers
    // numbers = nullptr;






    // // Dynamically resize an array
    // int capacity = 5;
    // int* numbers = new int[capacity];
    // int entries = 0;

    // while (true){
    //     cout << "number " << endl;
    //     cin >> numbers[entries];
    //     if(cin.fail()) break;
    //     entries++;
    //     if (entries == capacity){
    //         // create a temp array (twice the array)
    //         capacity *= 2;
    //         int* temp = new int[capacity];
    //         // copy all the elements
    //         for (int i = 0; i < entries; i++){
    //             temp[i] = numbers[i];
    //         }
    //         // de-allocate the memory (old) corresponding to the pointer "numbers"
    //         delete[] numbers;
    //         // have "numbers" pointer point to the new array
    //         numbers = temp;
    //     }
    // }
    // // print final array
    // for (int i = 0; i < entries; i++){
    //    cout << numbers[i] << endl;
    // }
    // // de-allocate memory for last array created
    // delete[] numbers;
    




    // Smart pointers: no need to delete the smart pointers memory allocated.
    // Need to #include <memory>

    // Unique pointers: it owns the piece of memory it refers to.
    // unique_ptr< > is a class: contains several functions
    // x( ) is an object variable, an instance of the class
    unique_ptr<int> x(new int); // passing an int_ptr to the class we created a unique_int_ptr "x"
    *x = 10; // can do usual ptr actions but no arithmetics
    cout << *x << endl;

    // simpler way to create a unique_ptr
    unique_ptr<int> y = make_unique<int>();
    // even faster, no redundancy
    auto z = make_unique<int>();

    // create a unique pointer to an integer array: specify is an array (int[]) and the lenght (10)
    auto numbers = make_unique<int[]>(10);
    numbers[0]=10;
    numbers[2]=6;
    cout << numbers << endl;

    // Shared pointers: two pointers share the piece of memory they refer to.
    auto s1 = make_shared<int>();
    *s1 = 7;
    shared_ptr<int> s2(s1);

    if (s1==s2){
        cout << "equal address" << endl;
    }
    

    return 0;
}