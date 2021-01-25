#include <iostream>
#include "fraction.h"
using namespace std;
class FractionCalculator
{
public:
    FractionCalculator() {}
    void calculator()
    {
        fraction r1,r2,r3,r4,r5,r6;
        int choise;
        cout<<"\t\t\t\t\t |---------------------------------| \n";
        cout<<"\t\t\t\t\t |            Fraction             | \n";
        cout<<"\t\t\t\t\t |---------------------------------| \n";
        cout<<"\---------------------------------| ";
        cout<<"\nFirst Fraction\n";
        cout<<"\---------------------------------| \n";
        cin>>r1;
        cout<<endl;
        cout<<"\---------------------------------| \n";
        cout<<"Second Fraction \n";
        cout<<"\---------------------------------| \n\n";

        cin>>r2;
        cout<<"\n---------------------------------------------------------------- \n";
        cout<<endl;

        cout<<"\t\t\t\t*"<<"\t\t\t====Menu====\t\t\t"<<"*\n";
        cout<<"\t\t\t\t*"<<"\t\t\t1.Addition\t\t\t"<<"*\n";
        cout<<"\t\t\t\t*"<<"\t\t\t2.Subtraction\t\t\t"<<"*\n";
        cout<<"\t\t\t\t*"<<"\t\t\t3.Multiplication\t\t"<<"*\n";
        cout<<"\t\t\t\t*"<<"\t\t\t4.Dividing\t\t\t"<<"*\n";
        cout<<"\t\t\t\t*"<<"\t\t\t5.Operator ( < , > , == )\t"<<"*\n";
        cout<<"\t\t\t\t*"<<"\t\t\t6.Operator ( <=, >=)\t\t"<<"*\n";
        cout<<"\t\t\t\t*"<<"\t\t\t7.Exit\t\t"<<"*\n";
        cout<<"\t\t\t\t*"<<"\t\t\t================\t\t"<<"*";
        cout<<"\n\t\t\t\t*********************************************************\n";
        bool a=true;
        while (a)
        {
            cout<<"\n---------------------------------------------------------------- \n";


            cout<<"PLease Enter Your Choice : ";
            cin>>choise;
            switch(choise)
            {
            case 1:
                cout<<"Addition is "<<r1+r2<<endl;
                r3=r1+r2;
                cout<<"Reduced : "<<r3.reduce_fraction()<<endl;
                continue;
            case 2:
                cout<<"subtraction is "<<r1-r2<<endl;
                r4=r1-r2;
                cout<<"Reduced : "<<r4.reduce_fraction()<<endl;
                continue;
            case 3:
                cout<<"Multiplication is "<<r1*r2<<endl;
                r5=r1*r2;
                cout<<"Reduced : "<<r5.reduce_fraction()<<endl;
                continue;

            case 4:
                cout<<"division is "<<r1/r2<<endl;
                r6=r1/r2;
                cout<<"Reduced : "<<r6<<endl;continue;
            case 5:
                if(r1>r2)cout<<r1<<" > "<<r2<<endl;
                else if(r1<r2)cout<<r1<<" < "<<r2<<endl;
                else if(r1==r2)cout<<r1<<" == "<<r2<<endl;continue;
            case 6:
                if(r1<=r2)cout<<r1<<" <= "<<r2<<endl;
                else if(r1>=r2)cout<<r1<<" >= "<<r2<<endl;continue;
            case 7:
                a=false;
            }

        }

    }


};
int main()
{
    FractionCalculator c;
    c.calculator();
    return 0;
}
