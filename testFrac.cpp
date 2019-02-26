#include "Frac.h"

#include <iostream>
#include <vector> 
#include <sstream>

using namespace std;


int main()
{
    Frac x(3, 4);
    Frac y(1, 2);
    
    cout << "Created Frac x(3, 4) as " << x << endl;
    cout << "Created Frac y(1, 2) as " << y << endl;
    
    //string constructor?
    //Frac s("6/7");
    //cout << "String constructed: s: " << s;
    
    Frac z(x);
    cout << "Copy constructed z as x: " << z << endl;
    
    //fix math
    Frac v = x + y;
    cout << "x + y is: " << v << endl;
    
    Frac a = x - y;
    cout << "x - y is: " << a << endl;
    
    Frac b = x * y;
    cout << "x * y is: " << b << endl;
    
    Frac c = x / y;
    cout << "x / y is: " << c << endl;
    
    return 0;
}