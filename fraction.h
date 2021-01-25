#ifndef FRACTION_H
#define FRACTION_H
#include <iostream>
#include <istream>
#include <ostream>
#include <cstdlib>
using namespace std;
class fraction
{

    private:
        int num;
        int den;

    public:
        fraction(){
        num=1;den=1;}
        fraction(int num, int den);

         operator double();
        fraction reduce_fraction ();
        fraction operator + (const fraction& b)const;
        fraction operator +=(const fraction& b);
        fraction& operator ++();
        fraction operator ++(int)  ;

        fraction operator - (const fraction& b)const;
        fraction operator -=(const fraction& b);
        fraction& operator --();
        fraction operator --(int);

        fraction operator * (const fraction& b)const;
        fraction operator *= (const fraction& b);

        fraction operator /(const fraction& b)const;
        fraction operator /= (const fraction& b);

        bool operator ==(const fraction& b);
        bool operator <(const fraction&b);
        bool operator >(const fraction&b);
        bool operator <=(const fraction&b);
        bool operator >=(const fraction&b);

        friend ostream& operator<<(ostream& out,const fraction &f);
        friend istream& operator >>(istream& in, fraction& f);


        ~fraction();

};

#endif // FRACTION_H
