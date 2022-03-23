/*4) Declare a class Time having three data members; hour, minute, and second in
24 hour format. It consist of the following member functions.
ix. A default constructor
x. A parameterized constructor
xi. A destructor ( that diplays the statement “object destroyed for class Time”)
xii. Accesor functions : getTime() prints time in HH:MM:SS AM/PM format.
xiii. Mutator functions: setTime(int,int,int), to set data members where arguments
are passed by reference.
xiv. calcTimeDifference(Time, Time) : finds the time difference between two given
times and stores the result in the third object that has calls the function.
xv. resetTime() : it sets time to 00:00:00*/
#include <bits/stdc++.h>
using namespace std;
class Time
{
private:
    //data members
    int hr;
    int min;
    int sec;

public:
    //member functions
    Time()//default constructor
    {
        hr = 0;
        min = 0;
        sec = 0;
    }
    Time(int h, int m, int s)//parameterized constructor
    {
        hr = h;
        min = m;
        sec = s;
    }
    ~Time()//destructor to destroy the objects of Time class
    {
        cout << endl;
        cout << "Object destroyed for class Time" << endl;
    }
    //member functions declarations
    void getTime();
    void setTime(int, int, int);
    void calcTimeDifference(Time, Time);
    void resetTime();
};

//getTime definition to print the time in a formated way (HH:MM:SS AM/PM)
void Time::getTime()
{
    cout << setw(2) << setfill('0') << hr << ":"
         << setw(2) << setfill('0') << min << ":"
         << setw(2) << setfill('0') << sec << " ";
    if (hr < 12)//condition for AM & PM
        cout << "AM";
    else
        cout << "PM";
}

//mutator definition to update the data values given by the user as input
void Time::setTime(int h, int m, int s)
{
    hr = h;
    min = m;
    sec = s;
}

//This function calculates the difference between two time periods and stores the result in 3rd object
void Time::calcTimeDifference(Time t1, Time t2)
{
    Time diff;//result storing object
    if (t2.sec > t1.sec)
    {
        --t1.min;
        t1.sec += 60;
    }

    diff.sec = t1.sec - t2.sec;
    if (t2.min > t1.min)
    {
        --t1.hr;
        t1.min += 60;
    }
    diff.min = t1.min - t2.min;
    diff.hr = t1.hr - t2.hr;
    diff.getTime();//finally printing the result 
}

//this function resets the time to 00:00:00
void Time::resetTime()
{
    hr = 0;
    min = 0;
    sec = 0;
}

//This is thr Driver code to Demonstrate the Number class attributes
int main()
{
    cout << "---------------------------------" << endl;
    cout << "Demonstrating Time Difference" << endl;
    cout << "---------------------------------" << endl;
    int h1, m1, s1;//data values to be passed to the class data members after input
    int h2, m2, s2;//data values to be passed to the class data members after input
    Time t1, t2;//object creation 
    cout << "Enter the 1st time period." << endl;//asking for input of 1st time period
    cout << "Enter hour   : ";
    cin >> h1;
    cout << "Enter minute : ";
    cin >> m1;
    cout << "Enter second : ";
    cin >> s1; 
    t1.setTime(h1, m1, s1);

    cout << "Enter the 2nd time period." << endl;//asking for input of 2nd time period
    cout << "Enter hour   : ";
    cin >> h2;
    cout << "Enter minute : ";
    cin >> m2;
    cout << "Enter second : ";
    cin >> s2;
    //finally printing the result in a formated way
    t2.setTime(h2, m2, s2);
    t1.getTime();
    cout << " - ";
    t2.getTime();
    cout << " = ";
    Time t3;

    t3.calcTimeDifference(t1, t2);
    cout << endl;

    cout << "---------------------------------" << endl;
    cout << "Demonstrating Time Reset" << endl;
    cout << "---------------------------------" << endl;

    Time t4(12,3,40);//creating an object with argumented constructor
    cout<<"Time before Reset : ";
    t4.getTime();
    cout<<endl;
    cout<<"Time after Reset : ";
    t4.resetTime();
    t4.getTime();
    cout<<endl;

    return 0;

}