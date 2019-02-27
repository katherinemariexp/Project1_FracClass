#include "Frac.h"
#include <iostream>
#include <vector> 
#include <sstream>

using namespace std;

int main()
{
    Frac x;
    Frac y;
    Frac f2(7,2), f3(7,2); //for testing type conversions
    int num;
    int den;
    
    cout << endl << "Testing accessors and mutators by entering a fraction. " 
         << endl
         << "Please enter the numerator for Frac x: ";
    cin >> num;
    x.setNum(num);
    cout << "Please enter the denominator for Frac x: ";
    cin >> den;
    x.setDen(den);
   
    cout << "Please enter the numerator for Frac y: ";
    cin >> num;
    y.setNum(num);
    cout << "Please enter the denominator for Frac y: ";
    cin >> den;
    y.setDen(den);
    
    cout << endl << "Created Frac x(3, 4) as " << x.getNum() << "/" << x.getDen() << endl;
    cout << "Created Frac y(1, 2) as " << y.getNum() << "/" << y.getDen() << endl << endl;
        
    
    cout << endl << "Increment and decrement Frac x: " << endl;
    x++;
    cout << "Frac x incremented is: " << x << endl;
    x--;
    cout << "Frac x decremented back to the original value is: " << x << endl << endl;
    
    //string constructor test
    Frac s("6/7");
    cout << "String constructed: s: " << s << endl << endl;
    
    Frac z(x);
    cout << "Copy constructed z as x: " << z << endl << endl;
    
    Frac v = x + y;
    cout << "x + y is: " << v << endl;
    
    Frac a = x - y;
    cout << "x - y is: " << a << endl;
    
    Frac b = x * y;
    cout << "x * y is: " << b << endl;
    
    Frac c = x / y;
    cout << "x / y is: " << c << endl << endl;;
    
    cout << "Testing whether x is ==, !=, <, >, <=, >= y." << endl;
    if (x == y)
        cout << "x is equal to y." << endl;
    if (x != y)
        cout << "x is not equal to y." << endl;
    if (x > y)
        cout << "x is greater than y." << endl;
    if (x < y)
        cout << "x is less than y." << endl;
    if (x >= y)
        cout << "x is greater than or equal to y." << endl;
    if (x <= y)
        cout << "x is less than or equal to y." << endl;
    
    cout << endl << "Please observe the outputs of identical commands " 
         << "executed in one statement v. separated statements. Testing for Frac (5,6)" << endl;
    Frac f(5,6);
    cout << f << " "
        << --f << " "
        << f << " "
        << ++f << " "
        << --f << " "
        << ++f << endl;
        
    cout << f << " ";
    cout << --f << " ";
    cout << f << " ";
    cout << ++f << " ";
    cout << --f << " ";
    cout << ++f << endl << endl;
    
    cout << "Why the output for these two identical sequences are not the same? Testing for string Frac (\"5/6\")"
        << endl;
    Frac f1("5/6");
    cout << "This sequence is in one statement: "
        << f1 << " " << f1-- << " " << f1 << " "
        << f1++ << " " << f1-- << " " << f1++ << endl
        << "The one below is broken into 6 steps: ";
    cout << " " << f1;
    cout << " " << f1--;
    cout << " " << f1;
    cout << " " << f1++;
    cout << " " << f1--;
    cout << " " << f1++;
    
    cout << endl << endl << "Type conversion testing: " 
         << "First frac: " << f2 << " Second frac: " << f3 << endl
         << "First frac as an integer: " << int(f2) << endl 
         << "Second frac as a double: " << double(f3);
    
    return 0;
}