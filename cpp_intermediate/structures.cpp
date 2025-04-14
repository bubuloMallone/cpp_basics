#include <iostream>
#include <memory>
#include <vector>

using namespace std;

struct CustomerProfile
{
    int id = 0;
    string fullName;
    string email;
    // can initialize the structure here giving default values to the objects
    // strings are initialized to "" by default
};

struct Movie
{
    string title;
    short releaseYear;
    bool isGrammy = false;
};

// Nesting structures
struct Date
{
    short year;
    short month;
    short day;
};


struct MovieNest
{
    string title;
    Date releaseDate;
    bool isGrammy = false;

    // Methods
    bool equals(const MovieNest& movie){  // avoid useless copy by reference and make it const to avoid accidenta modifications
        return (title == movie.title &&
                releaseDate.year == movie.releaseDate.year &&
                releaseDate.month == movie.releaseDate.month &&
                releaseDate.day == movie.releaseDate.day &&
                isGrammy == movie.isGrammy);
    }
};

// Operator overloading 
// overloaded the "==" operator implementing it also for MovieNest objects
bool operator == (const MovieNest& first, const MovieNest& second) {
    return (first.title == second.title &&
            first.releaseDate.year == second.releaseDate.year &&
            first.releaseDate.month == second.releaseDate.month &&
            first.releaseDate.day == second.releaseDate.day &&
            first.isGrammy == second.isGrammy);
};

// overload "<<" operator (OUTPUTstream) for MovieNest objects
ostream& operator << (ostream& stream, const MovieNest& movie){
    stream << movie.title << ", " << movie.releaseDate.year;
    return stream;
};



// Structures and functions

Movie getMovie(){ // returns a Movie object
    return { .title = "Dumbo",
            .releaseYear = 1973,
            .isGrammy = true};
};

// Pointers to structures
void showMovie(const Movie* moviePtr){
    cout << (*moviePtr).title << endl; 
    // or use   moviePtr->title   =   (*moviePtr).title
};





// Enumerations: another custom type

enum Action {
    // internally represented using an int (list = 1), then ++.
    list = 1,
    add, // = 2
    update  // = 3
};

// Strongly Typed Enumerations

enum class Operation {
    list = 1,
    add, 
    update
};




int main(){

    // //Initializing structures
    // // can initialize the objects of the structure here like the following (string not necessary)
    // CustomerProfile customer = {.id = 0, .fullName = "", .email = ""};  

    // cout << "ID: " << endl;
    // cin >> customer.id;
    // cout << "Name: " << endl;
    // cin >> customer.fullName;
    // cout << "e-mail: " << endl;
    // cin >> customer.email;
    // cout << customer.id << endl << customer.fullName << endl << customer.email << endl;



    // // Unpacking structures 
    // Movie movie = {.title = "Terminator",
    //                .releaseYear = 1984, 
    //                .isGrammy=false};
    // auto [title, releaseYear, isGrammy] {movie};  // unpacking

    // cout << title << endl;





    // // Array of structures 

    // Movie moviesSatic[5]; // but finite size array
    // vector<Movie> moviesDynamic;
    // moviesDynamic.push_back({.title = "Terminator",
    //                          .releaseYear = 1984});
    // moviesDynamic.push_back({.title = "Terminator 2",
    //                          .releaseYear = 1991});
    
    // for (auto movie: moviesDynamic){
    //     cout << movie.title << ", " << movie.releaseYear << endl;
    // }
    // // better to use "movie" variable as a CONST REFERERENCE
    // // pointing at the address of each object of the array
    // for (const auto& movie: moviesDynamic){
    //     cout << movie.title << ", " << movie.releaseYear << endl;
    // }
    




    // Nesting structures

    MovieNest movie1 {
            .title = "Terminator 2",
            .releaseDate = {
                .year = 1991, 
                .month = 9, 
                .day = 24
            },
            .isGrammy = true
    };





    // Comparing structures
    MovieNest movie2 {
            .title = "Terminator 2",
            .releaseDate = {
                .year = 1991, 
                .month = 9, 
                .day = 24
            },
            .isGrammy = true
    };

    // // super long and not flexible 
    // if (movie1.title == movie2.title &&
    //     movie1.releaseDate.year == movie2.releaseDate.year &&
    //     movie1.releaseDate.month == movie2.releaseDate.month &&
    //     movie1.releaseDate.day == movie2.releaseDate.day &&
    //     movie1.isGrammy == movie2.isGrammy){
            
    //         cout << "Equal" << endl;
    // }




    // // Methods
    // // use member functions defined inside the structure above
    // if (movie1.equals(movie2)){
    //     cout << "Equal" << endl;
    // }




    // // Operator overloading

    // // "==" operator for MovieNest objects
    // if (movie1==movie2){
    //     cout << "Equal" << endl;
    // }

    // // "<<" operator (OUTPUTstream op) 
    // cout << movie1 << endl;


    // Structures and functions

    // can pass a structure like MovieNest to a function
    // as a parameter of that dataType
    // (example: as we did in the overloading of some operator)
    // but we can do also define functions that return structures

    auto movieAdv = getMovie();

    // Pointers to structures
    showMovie(&movieAdv);

    



    // Enumerations: another custom type
    cout << 
        "1: List " << endl << 
        "2: Add " << endl <<
        "3: Update " << endl <<
        "Select: " <<
    endl;

    int input;
    cin >> input;

    if(input == Action::list){
        cout << "Listing " << endl;
    }


    // Strongly Typed Enumerations: avoid redefinition of enumerator list
    if(input == static_cast<int>(Action::list)){
        cout << "Listing " << endl;
    }


    return 0;
}