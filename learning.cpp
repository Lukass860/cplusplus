#include <iostream> // Preprocessor directive for input/output
#include <string>
#include <cmath>
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
    
/*Using arithmetic operators with integers:

int a = 3;
int b = 5;
int c = a + b; // c holds 8
Using arithmetic operators with decimal numbers (doubles):

double x = 3.3;
double y = 4.1;
double z = x + y; // z holds 7.4*/


/*Modulo Operator



The modulo operator % gives the remainder of a division:(10/3. paliek 1. 10-9.)

result = dividend % divisor;
Example:

result = 10 % 3;  // result is 1
Common use case - checking if a number is even or odd:

Even numbers: number % 2 == 0
Odd numbers: number % 2 == 1
For floating-point numbers, use fmod() from <cmath>:

#include <cmath>

double result = fmod(5.2, 2.0);  // result is 1.2
double result2 = fmod(7.8, 3.5); // result2 is 0.8
When the divisor is larger than the dividend, the result equals the dividend. This applies to both % and fmod().*/

int a = 9;
double b = 2.6;
int c = 11;
int d = a % 2;
int e = a % 3;
double f = std::fmod(b, 1.5);
double g = std::fmod(b, 3.9);
int h = c % 10;

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << std::endl;
    std::cout << "d = " << d << std::endl;
    std::cout << "e = " << e << std::endl;
    std::cout << "f = " << f << std::endl;
    std::cout << "g = " << g << std::endl;
    std::cout << "h = " << h << std::endl;


/*The increment operator is represented by two plus signs ++,
 and the decrement operator is represented by two minus signs --.*/
 
 
 /* 
 int count = 5;
count++; // count is now 6

 int count = 5;
count = count + 3;  // Add 3: count is now 8
count = count * 2;  // Multiply by 2: count is now 16
count = count - 4;  // Subtract 4: count is now 12*/

int count = 0;
    
    // Type your code below
    count ++;
    count ++;
    count ++;
    count ++;
    count = count * 2;
    count --;
    // Don\'t change the line below
    std::cout << "count = " << count << std::endl;

//Prefix form: Increments/decrements the variable and then returns the new value.
//Postfix form: Returns the current value of the variable and then increments/decrements it.

/*      int x = 5;
int y = x++;
// y = 5, x = 6 (postfix: y gets the original value, then x is incremented)

int a = 5;
int b = ++a;
// b = 6, a = 6 (prefix: a is incremented first, then b gets the new value)     */

/*      int x = 5;
int y = x--;
// y = 5, x = 4 (postfix: y gets the original value, then x is decremented)

int a = 5;
int b = --a;
// b = 4, a = 4 (prefix: a is decremented first, then b gets the new value)     */

    {
    int x = 10;
    int y = 20;
    int z = 30;

    int a, b, c;

    a = x++;
    b = --y;
    c = z--;

    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;
    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
    std::cout << "z: " << z << std::endl;
 
    /*int a = 5;
a = a + 3; // a holds 8       ===>>> int a = 5;
                                    a += 3; // a holds 8*/
/*double price = 10.5;
price *= 2; // price holds 21.0*/

int count = 0;
    
    // Type your code below
    count += 4;
    count *= 2;
    count -= 1;    
    // Don\'t change the line below
    std::cout << "count = " << count << std::endl;

//      Operator	    Meaning	            Example
//      ==	            Equal               1 == 2 returns false
//      !=	            Not Equal	        1 != 2 returns true
//      >	            Greater Than	    1 > 2 returns false
//      <=	            Lower or Equal	    1 <= 2 returns true

/*      int var1 = 13;
        int var2 = 12;
        bool var3 = var1 != var2;       */

// Type your code below
    int n1 = 8;
    int n2 = 9;

    bool n3 = n1 > n2;
    // Don't change the line below
    std::cout << "n1 = " << n1 << ", n2 = " << n2 << ", n3 = " << n3 << std::endl;


/*      string str1 = "hello";
        string str2 = "hello";
        string str3 = "Hello";

        bool result1 = (str1 == str2);  // true
        bool result2 = (str1 == str3);  // false (case-sensitive)
        bool result3 = (str1 != str3);  // true     */

/*      string str1 = "a";
        string str2 = "b";
        string str3 = "c";

        cout << str2.compare(str1) << endl; 
        // Positive (b comes after a)

        cout << str2.compare(str3) << endl;
        // Negative (b comes before c)

        cout << str2.compare(str2) << endl;
        // 0 (equal strings)                        */

/*  Ja abi teksti ir vienādi, rezultāts ir 0.      Ja pirmais teksts alfabēta secībā ir pirms otrā, 
rezultāts ir negatīvs skaitlis, bet, ja pēc otrā — pozitīvs skaitlis.   
Nav svarīgi, kāds tieši ir skaitlis — svarīgi, vai tas ir 0, mazāks par 0 vai lielāks par 0.        */




//      && (AND) dod true, ja visi nosacījumi ir patiesi.
//      || (OR) dod true, ja vismaz viens nosacījums ir patiess.
//      ! (NOT) apgriež rezultātu — true kļūst par false, bet false par true.

//  bool b1 = (5 > 3) && (1 == 1); // holds true

/*      bool b2 = !(5 == 4) || (5 == 2); // holds true
        Explanation: The first operand 
        (!(5 == 4)) is true so b2 is also true
        (or operation is true if either one of the operands is true)     */

//  bool b3 = !(1 == 1) || false; // holds false
//  bool b4 = !(3 > 4); // holds true
//  bool b5 = !(5 > 10 || 5 > 1); // holds false

// Type your code below
    bool b1 = 1 < 2;
    bool b2 = 2 > 3;
    bool b3 = b1 || b2;
    
    // Don't change the line below
    std::cout << "b3 = " << b3 << std::endl;
    
    
/*  a	    b	    a && b
    false	false	false
    false	true	false
    true	false	false
    <true	true	true>
The only way to get a true for the and (&&) operator is if both a and b are true*/

/*  a	    b	       a || b
    false	false	false
    <false	true	true>
    <true	false	true>
    <true	true	true>
In this case, to get a true result, either a or b should be true.*/

/*  a	    !a
    false	true
    true	false
Here the value of a is reversed. If a is false then !a is true*/

// Type your code below
    int f1 = 1 + 2;
    int f2 = 2 + 3;
    bool f3 = !((f1 + f2) > (f1 * f2));
    
    // Don't change the line below
    std::cout << "f3 = " << f3 << std::endl;

    bool g1 = true;
    bool g2 = true;
    bool g3 = false;
    
    bool g4 = g1 && g2 && (!g3);
    std::cout << "g4 = " << g4 << std::endl;
    return 0;
     }
}