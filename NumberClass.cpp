/*1) Declare a class Number having one data member: num and consist of the
following member functions.
i. A default constructor
ii. A parameterized constructor
iii. A destructor ( that displays the statement “object destroyed for class Num”)
iv. Accesor functions : getNumber() to return the number
v. Mutator functions: changeNumber(int) to set the values of the number.
vi. bool isArmstrong() : to check whether num is an armstrong number.
vii. bool isPrime() : to test primality of the number
viii. int nextCoprime() : to compute and return next number in the number series
that is coprime with this number.
ix. int reverse() : to reverse the number*/
#include <bits/stdc++.h>
using namespace std;
class Number
{
private:
    int num;

public:
    Number()//default constructor
    {
        num = 1;
    }
    Number(int n)//parameterized constructor
    {
        num = n;
    }
    ~Number()//destructor to destroy the class objects
    {
        cout << "Object destroyed for class Number." << endl;
    }

    int getNumber()//this function returns the number
    {
        return num;
    }

    void changeNumber(int x)//this is mutator to update the data member
    {
        num = x;
    }

    //this function checks whether the number is Armstrong or not
    void isArmstrong()
    {
        int temp = num;
        int sum = 0;
        int r;
        while (num > 0)
        {
            r = num % 10;
            sum = sum + (r * r * r);
            num = num / 10;
        }
        if (temp == sum)
            cout << " is Armstrong." << endl;
        else
            cout << " is not Armstrong." << endl;
    }

    //this function reverse the number as 234 to 432
    int reve()
    {

        int rev = 0;
        int temp = num, r;
        while (temp != 0)
        {
            r = temp % 10;
            rev = rev * 10 + r;
            temp /= 10;
        }
        return rev;
    }

    //this function checks that whether the number is prime or not
    void isPrime()
    {
        int flg = 0;
        for (int i = 2; i < num / 2; ++i)
            if (num % i == 0)
                flg++;
        if (flg == 0)
            cout << " is prime." << endl;
        else
            cout << " is not prime." << endl;
    }

    //this function returns the next coprime number
    int nextCoprime(int n)
    {
        int cop;
        for(int i=n;i<=2*n;i++)
            if(__gcd(i,n)==1)
                {
                    cop= i;
                    break;
                }
        return cop;
    }

};


//This is the Driver code to Demonstrate the class attributes
int main()
{
    cout << "---------------------------------" << endl;
    cout << "Demonstration of Reverse of a number" << endl;
    cout << "---------------------------------" << endl;

    Number obj1;//making object of class Number
    int x;
    cout << "Enter the number: ";
    cin >> x;//asking for input to the class data member
    obj1.changeNumber(x);//assigining value to the object
    cout << "The reverse of " << obj1.getNumber() << " is: " << obj1.reve() << endl;

    cout << "---------------------------------" << endl;
    cout << "Demonstration of Armstrong" << endl;
    cout << "---------------------------------" << endl;

    Number obj2;//making object of class Number
    cout << "Enter the number: ";
    int n;
    cin >> n;//asking for input to the class data member
    obj2.changeNumber(n);//assigining value to the object
    cout << obj2.getNumber();
    obj2.isArmstrong();

    cout << "---------------------------------------------------------------------" << endl;
    cout << "Demonstration of checking Prime and printing the next coprime number." << endl;
    cout << "---------------------------------------------------------------------" << endl;

    Number obj3;//making object of class Number
    cout << "Enter the number: ";
    int y;
    cin >> y;//asking for input to the class data member
    obj3.changeNumber(y);//assigining value to the object
    cout << obj3.getNumber();
    obj3.isPrime();
    cout<<endl;
    cout<<"Next Co-Prime number is: ";
    cout<<obj3.nextCoprime(y);
    cout<<endl;

    return 0;
}
