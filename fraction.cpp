#include "fraction.h"
#include <cstdlib>
#include <istream>
#include <ostream>
fraction::fraction(int n,int d)
{
    if(d==0) d=1;
    num=n;
    den=d;
}

fraction fraction::operator +(const fraction& b)const
{
    if(den==b.den)
    {
        fraction c(num+b.num,den);
        return c;
    }
    else
    {
    fraction c(num*b.den+den*b.num,den*b.den);
    return c;
    }
}

fraction fraction::operator-(const fraction& b)const
{
    if(den==b.den)
    {
        fraction c(num-b.num,den);
        return c;
    }
    else
    {
    fraction c(num*b.den-den*b.num,den*b.den);
    return c;
    }
}


fraction fraction::operator *(const fraction& b)const
{
    fraction c(num*b.num,den *b.den);
    return c;
}

fraction fraction::operator /(const fraction& b)const
{
    fraction c(num*b.den,den*b.num);
    return c;
}

fraction fraction:: reduce_fraction ()
{
    int i = abs(den * num);
    for (i; i > 1; i--)
    {
        if ((num % i == 0) && (den % i == 0))
        {
            num /= i;
            den /= i;
        }
    }

    fraction test;
    test.num = num;
    test.den = den;
    return test;
}

bool fraction:: operator > (const fraction& r)
{
    int lside = num*r.den;
    int rside = den*r.num;
    return (lside > rside);
}
bool fraction:: operator < (const fraction& r)
{
    int lside = num*r.den;
    int rside = den*r.num;
    return (lside < rside);
}
bool fraction:: operator ==(const fraction& r)
{
    if(num*r.den == r.num*den)
    {
        return true;
    }
    else
        return false;
}
bool fraction:: operator<=(const fraction& r)
{
    int lside = num*r.den;
    int rside = den*r.num;
    return((lside < rside) ||(num==r.num && den==r.den));
}
bool fraction:: operator>=(const fraction& r)
{
    int lside = num*r.den;
    int rside = den*r.num;
    return((lside > rside) ||(num==r.num && den==r.den));
}
ostream& operator <<(ostream& out,const fraction& b)
{
    out<<b.num<<"/"<<b.den;
    return out;
}
istream& operator >>(istream& in,fraction& b)
{
    cout<<"please enter the value on form of number / number"<<endl;
    char x;
    in>>b.num>>x>>b.den;
    return in;
}
fraction::~fraction(){}
