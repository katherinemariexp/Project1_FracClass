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
    
    
    return 0;
}