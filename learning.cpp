#include <iostream> // Preprocessor directive for input/output

int main() { // Main function
    std::cout << "This is my first C++ program!"; // Output statement
    return 0; // Return statement (good practice)
}
/*#include <iostream> — loads the library that lets you print text to the screen.
int main() { ... } — this is the main function, where every C++ program starts running.
cout << "Hello, World!"; — prints the text Hello, World! to the screen. g++ learning.cpp -o learning ./learning*/

/*In C++, we use )std::cout) to print output to the console.
The text to be printed is placed within double quotes and followed by the insertion operator <<.
Every statement in C++ must end with a semicolon ;.*/

/*The iostream library provides the tools needed for input and output — without it,
std::cout would not be available.*/


#include <iostream>

int main() {
    // Declare and initialize variables here
    
    int quantity = 5;
    // Output the values - Don't change below this line
    std::cout << "Quantity: " << quantity;
    
    return 0;
}