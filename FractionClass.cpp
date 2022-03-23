/*2) Declare a class Fraction having two data members; num and denom indicating
numerator and denominator. It consists of the following member functions.
i. A default constructor
ii. A parameterized constructor
iii. A destructor ( that displays the statement “object destroyed for class Fraction”)
iv. Accessor functions : getFraction() to display the number in a/b format
v. Mutator functions: setFraction(int,int) to set the values of a Fraction.
vi. addFraction(Fraction,Fraction) : to add two Fraction objects passes as
arguments and store the result in the third object that calls the function.
vii. reduceFraction(Fraction) : to reduce a fraction to its equivalant form.
viii. divFraction(Fraction,Fraction) : to divide two Fraction objects passed as
arguments and store the result in the third object that calls the function.*/
#include<bits/stdc++.h>
using namespace std;
class Fraction 
{
    private:
        int num;
        int dnum;
    public:
        Fraction()//default constructor
        {
            num=1;//initialization of numenator
            dnum=1;//initialization of denumenator
        }
        Fraction(int n,int d)//argumented constructor
        {
            //Assigining the values to the data members
            num=n;
            dnum=d;
        }
        ~Fraction()//destructor to destroy the created objects
        {
            //printing messages after the object deletion
            cout<<"object destroyed for class Fraction"<<endl;
        }
        //member functions declarations
        void getFraction();
        void setFraction(int, int);
        void addFraction(Fraction,Fraction,Fraction);
        void reduceFraction(Fraction);
        void divFraction(Fraction,Fraction,Fraction);
};

//function definition to print the fraction in A/B form
void Fraction ::getFraction()
{
    cout<<num <<" / "<< dnum<<" ";
}

//mutator function to set the class data members
void Fraction ::setFraction(int x,int y)
{
    num=x;
    dnum=y;
}

//AddFraction definition to add two fraction objects which are passed as argument 
void Fraction::addFraction(Fraction o1,Fraction o2,Fraction o3)
{
    //adding and storing the result in third fraction object
    o3.num=(o1.num*o2.dnum)+(o2.num*o1.dnum);
    o3.dnum=(o1.dnum*o2.dnum);
    reduceFraction(o3);//called the function to reduce the result
}


//reduce function definition which reduces the given Fraction object as an argument
void Fraction::reduceFraction(Fraction obj)
{
    int gcd;
    for (int i = 1; i<=obj.num && i<= obj.dnum; ++i)//finding the GCD
    {
        if(obj.num %i==0 && obj.dnum %i == 0)
            gcd=i;
    }
    //the final reduced fraction is being printed here
    cout<<obj.num/gcd<<" / "<<obj.dnum/gcd<<endl;
}


//division fraction definition  
void Fraction::divFraction(Fraction o1,Fraction o2,Fraction o3)
{
    //dividing the fraction and storing the result into another Fraction object o3
    o3.num = (o1.num * o2.dnum);
    o3.dnum = (o1.dnum * o2.num);
    reduceFraction(o3);//this function is called to reduce the final result obtained after the division.
}


//The Driver program to demmonstrate all the operations designed in the calss Fraction 
int main()
{
    //Formatting the program to look attractive and for better understanding
    cout<<"---------------------------------"<<endl;
    cout<<"Demonstrating Fractional Addition"<<endl;
    cout<<"---------------------------------"<<endl;
    int a,b,c,d;//data initialization for the input
    cout<<"Enter Numenator of 1st fraction: ";
    cin>>a;
    cout<<"Enter Denumenator of 1st fraction: ";
    cin>>b;
    cout<<"Enter Numenator of 2nd fraction: ";
    cin>>c;
    cout<<"Enter Denumenator of 2nd fraction: ";
    cin>>d;
    //after taking the input, values are passed to the objects
    Fraction o1(a,b), o2(c,d), o3;
    cout<<"The Sum of the fractions (reduced form) is: "<<endl;
    o1.getFraction();
    cout<<" + ";
    o2.getFraction();
    cout<<" = ";
    o3.addFraction(o1,o2,o3);//addFraction is called here and passed 3 objects.3rd object is passed to store the result 
    cout<<endl;

    cout<<"---------------------------------"<<endl;
    cout<<"Demonstrating Fractional Divison"<<endl;
    cout<<"---------------------------------"<<endl;
 
    cout<<"The Divide of the fractions (in reduced form) is: "<<endl;
    o1.getFraction();
    cout<<" / ";
    o2.getFraction();
    cout<<" = ";
    o3.divFraction(o1,o2,o3);//divFraction is called here 
    cout<<endl;

    cout<<"---------------------------------"<<endl;
    cout<<"Demonstrating Fractional Reduce"<<endl;
    cout<<"---------------------------------"<<endl;

    Fraction obj(44,22);
    obj.getFraction();
    cout<<" = ";
    obj.reduceFraction(obj);//called the reduceFraction to reduce the fraction
    cout<<endl;

    return 0;
}