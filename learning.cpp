#include <iostream> // Preprocessor directive for input/output
#include <string>
using namespace std;

int main() { // Main function
    std::cout << "This is my first C++ program!"<< std::endl; // Output statement

/*#include <iostream> — loads the library that lets you print text to the screen.
int main() { ... } — this is the main function, where every C++ program starts running.
cout << "Hello, World!"; — prints the text Hello, World! to the screen. g++ learning.cpp -o learning,,,, ./learning*/

/*In C++, we use )std::cout) to print output to the console.
The text to be printed is placed within double quotes and followed by the insertion operator <<.
Every statement in C++ must end with a semicolon ;.*/

/*The iostream library provides the tools needed for input and output — without it,
std::cout would not be available.*/

    int quantity = 5;
    // Output the values - Don't change below this line
    std::cout << "Quantity: " << quantity << std::endl;

/*float is used to store numbers with a decimal point. For example: float price = 99.99f;
The 'f' (or 'F') at the end of a decimal number is called a literal suffix,
and it explicitly tells the compiler that this number should be treated as a float.*/

/*double is used to store numbers with a decimal point, but with double precision.
Float typically has 7 decimal digits of precision whereas double typically has 15-17 decimal digits of precision.
For example:*/

    float itemPrice = 24.99f;
    double temperature = 23.5;
    
    std::cout << "Price: "<< itemPrice << std::endl;
    std::cout << "Temperature: "<< temperature << std::endl;

//1. Add this line after your includes:
//using namespace std;
/*#include <string>
using namespace std;  // Method 1

int main() {
    string s1 = "Hello";  // Method 1 style
    std::string s2 = "Hello again";  // Method 2 style (still works even with 'using namespace')
    return 0;
}*/

    // Declare and initialize variables here
    
    string coddy = "I am learning to code with Coddy";
    // Output the values
    std::cout << "Coddy = \"" << coddy << "\"" <<std::endl;

    //balooon
    // Type your code below
    // Replace the placeholder value with the value the task describes
    bool isLoggedIn = true;
    // Don\'t change the line below
    std::cout << "isLoggedIn = " << isLoggedIn<<std::endl;
   

    //A char is a single character (For example: 1, 6, %, b, p, ., T, etc.)
    //To initialize a char value in a variable, enclose it within single quotation marks: char c1 = 'h';

    // Type your code below
    char initial = 'B';
    
    // Don't change the line below
    std::cout << "initial = '" << initial << "'"<<std::endl;
    
    //A constant is a special type of variable that cannot be changed once it is initialized.
    
const double PI = 3.14159;
    // Don't change the line below
    std::cout << "PI = " << PI<<std::endl;
    
/*Implicit (automatic) casting — happens automatically:
int number = 5;
double decimal = number; // automatically becomes 5.0

int x = 7;
double result = x / 2.0; // result is 3.5 (int/int discards decimal)*/

/*Explicit (manual) casting — C-style and modern static_cast
double price = 19.99;

int a = (int) price;                  // C-style: becomes 19
int b = static_cast<int>(price);     // modern C++ preferred: becomes 19*/

/*Note: Casting a double to int truncates (drops) the decimal part.
 static_cast<>() is preferred in modern C++ for clarity and compiler safety.*/
    // Declare and initialize variables
    double price = 99.99;
    int intPrice =(int) price; // Explicit casting from double to int
    
    
    // Output the values
    std::cout << "Price: " << price << std::endl;
    std::cout << "Int Price: " << intPrice << std::endl;
    
    return 0;
}