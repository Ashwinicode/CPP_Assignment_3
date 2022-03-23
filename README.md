# CPP_Assignment_3
The questions are as follows:


1) Declare a class Number having one data member: num and consist of the
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
      
ix. int reverse() : to reverse the number


2) Declare a class Fraction having two data members; num and denom indicating
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
      arguments and store the result in the third object that calls the function.



3) Declare a class Poin2D having two data members; xCo & yCo stands for xcoordinate
and y-coordinate. The class consists of the following members functions

i. A default constructor

ii. A parameterized constructor

iii. A destructor ( that diplays the statement “object destroyed for class Point2D”)

iv. Accesor functions : getPoint() to display the 2D point in (xCo, yCo) format

v. Mutator functions: setPoint(xco,yco) to set the values of 2D point.

vi. bool insideCircle(int r, Point2D cen) : to check and returns whether the point
    object that calls this member function is inside the circle defined by the radius r
    and center cen passed as arguments to this function.

vii. bool checkCollinear(Point2D,Point2D): check whether given three 2D points are
     collinear .

viii. bool onAxis() : return true is the point is on one of the axis.


4) Declare a class Time having three data members; hour, minute, and second in
24 hour format. It consist of the following member functions.

i. A default constructor

ii. A parameterized constructor

iii. A destructor ( that diplays the statement “object destroyed for class Time”)

iv. Accesor functions : getTime() prints time in HH:MM:SS AM/PM format.

v. Mutator functions: setTime(int,int,int), to set data members where arguments
    are passed by reference.

vi. calcTimeDifference(Time, Time) : finds the time difference between two given
    times and stores the result in the third object that has calls the function.

vii. resetTime() : it sets time to 00:00:00
