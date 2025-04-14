#include <iostream>

using namespace std;

// create an array of random integers

void randArr(int numbers[], int d){
    for (int i = 0; i < d; i++){
        numbers[i] = rand();
    }
}

// sorting arrays
void swap(int numbers[], int i, int j){
    int temp = numbers[i];
    numbers[i] = numbers[j];
    numbers[j] = temp;
}

void sort(int numbers[], size_t d){
    for(int cycle = 0; cycle < d; cycle++){
        for (int i = 1; i < d; i++){
            if (numbers[i] < numbers[i-1]){
                swap(numbers, i, i-1);
            }  
        }
    }
}


int main(){

    const int d = 10; // set to const to use func size()
    int numbers[d];
    randArr(numbers, d);

    for (int i = 0; i < d; i++){
        cout << numbers[i] << endl;
    }    
    cout << endl;

    // // sort array
    // sort(numbers, d);
    // for (int i = 0; i < d; i++){
    //     cout << numbers[i] << endl;
    // }
    // cout << endl;
    
    cout << size(numbers) << endl;
    
    return 0;
}