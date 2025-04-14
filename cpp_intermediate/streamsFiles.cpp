#include <iostream>
#include <fstream>


using namespace std;

// Handle invalid input errors
int getNumber(const string& prompt){
    int number;
    while (true){
        cout << prompt;
        cin >> number;
        if (cin.fail() || number < 0 || number > 9){
            cout << "Enter a valid number!" << endl;
            cin.clear();     // clean the "fail" state
            cin.ignore(numeric_limits<streamsize>::max() , '\n');
        }
        else break; 
    }
    return number;
};


struct Movie
{
    int id;
    string title;
    int year;
};


int main(){

    // Reading from streams

    // // handle incorrect data input
    // // input stream is stored in a temporary storage called Buffer
    // cout << "First: " << endl;
    // int first;
    // cin >> first;
    // cin.ignore(numeric_limits<streamsize>::max() , '\n');

    // cout << "Second: " << endl;
    // int second;
    // cin >> second;

    // cout << first << " " << second << endl;

    // // Handle invalid input errors
    // int first = getNumber("First: ");
    // int second = getNumber("Second: ");
    // cout << first << " " << second << endl;



    // // Write to files
    // ofstream file;
    // file.open("FileEx.csv");
    // if (file.is_open()){
    //     file << "ID,title,year\n"
    //          << "1,Terminator,1984\n"
    //          << "2,Dumbo,1976\n";
    //     file.close();
    // }

    // Read from files
    
    ifstream fileR;
    fileR.open("FileEx.csv");
    if (fileR.is_open()){
        string str;
        getline(fileR, str);
        while(!fileR.eof()){
            // fileR >> str; // reads until any special ch as " " or "\n"
            getline(fileR, str, ','); // reads until special ch "\n"
            if (str.empty()) continue;
            Movie movie;
            movie.id = stoi(str);
            
            getline(fileR, str, ',');
            movie.title = str;
            cout << str << endl;
            
            getline(fileR, str, '\n');
            movie.year = stoi(str);
        }
        fileR.close();
    }


    return 0;
};