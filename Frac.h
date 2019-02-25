#ifndef FRAC_H
#define FRAC_H
#include <iostream>
#include <sstream>

using namespace std;


//Friend Step 1 Forward Declaration
class Frac;

//Friend Step 2 Forward Declaration of Friend Function
ostream &operator << (ostream &, const Frac &);
istream &operator >> (istream &, Frac &);

class Frac {
private:
    int num; //to hold numerator
    int den; //to hold denominator
    long gcd(long a, long b);
    Frac lowTerms(Frac &f); 
    
public:
    //argument constructor
    Frac(int n = 0, int d = 1)
        { num = n; den = d; }
        
        
    
};

#endif