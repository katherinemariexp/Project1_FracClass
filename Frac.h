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
    //def constructor
    Frac()
        { num = 0; den = 1; }
        
    //1 Argument - int numerator only, den set at 1
    Frac(int n) 
        { num = n; den = 1; }
        
    //2 Arg. - num, den 
    Frac(int n, int d) 
        { num = n; den = d; }
        
    //string constructor definition outside
    Frac(string s);    
    
    //copy constructor
    Frac(const Frac& rhs)
        { num = rhs.num; den = rhs.den; }
    
    // assignment operator
    Frac operator=(const Frac& rhs)
        { num = rhs.num; den = rhs.den; }
    
    //mutators
    void setNum(int n) { num = n; }
    void setDen(int d) { den = d; }
    
    //accessors
    int getNum() const { return num; }
    int getDen() const { return den; }
    
};

Frac:: Frac(string s) 
{
    stringstream ss(s);
    //s << getNum() << "/" << getDen();
    //return s.str();
}

#endif