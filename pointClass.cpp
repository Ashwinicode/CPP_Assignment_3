/*3) Declare a class Poin2D having two data members; xCo & yCo stands for xcoordinate
and y-coordinate. The class consists of the following members functions.
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
viii. bool onAxis() : return true is the point is on one of the axis.*/
#include <bits/stdc++.h>
using namespace std;
class Point2D
{
private:
    float xCo;
    float yCo;

public:
    Point2D()
    {
        xCo = 0.0;
        yCo = 0.0;
    }
    Point2D(float x, float y)
    {
        xCo = x;
        yCo = y;
    }
    ~Point2D()
    {
        cout << "object destroyed for class Point2D" << endl;
    }
    void getPoint();
    void setPoint(float, float);
    bool insideCircle(int, Point2D);
    bool checkCollinear(Point2D, Point2D, Point2D);
    bool onAxis();
};

//getPoint definition to print the coordinates in formated way as (x,y)
void Point2D::getPoint()
{
    cout << "(" << xCo << " , " << yCo << ")";
}

//setPoint definition to set the accepted values from user to the class data members
void Point2D::setPoint(float x, float y)
{
    xCo = x;
    yCo = y;
}

//insideCircle definition to check whether the point reside into the circle or not
bool Point2D::insideCircle(int r, Point2D center)
{
    //(x - center_x)² + (y - center_y)² < radius²
    if (pow((xCo - center.xCo), 2) + pow((yCo - center.yCo), 2) <= pow(r, 2))
        return true;
    else
        return false;
}

//checkCoolinear definition to check whether the points are collinear or not, this method takes 2 class objects
bool Point2D::checkCollinear(Point2D p1, Point2D p2, Point2D p3)
{
    float m;
    float n;
    m = (p2.yCo - p1.yCo) / (p2.xCo - p1.xCo);
    n = (p3.yCo - p2.yCo) / (p3.xCo - p2.xCo);

    if (m == n)
        return true;
    else
        return false;
}

//onAxis definition to check whether the point is on the axis or not
bool Point2D::onAxis()
{
    if (xCo == 0 || yCo == 0)
        return true;
    else
        return false;
}

//Driver program to demonstrate all the class attributes

int main()
{
    cout << "---------------------------------" << endl;
    cout << "Demonstration of insideCircle method" << endl;
    cout << "---------------------------------" << endl;
    float x, y, r;
    cout << "Enter the X axis of center: ";
    cin >> x;
    cout << "Enter the Y axis of center: ";
    cin >> y;
    cout << "Enter the radius: ";
    cin >> r;
    Point2D center(x, y);
    if (center.insideCircle(r, center))
    {
        center.getPoint();
        cout << " is inside the Circle." << endl;
    }
    else
    {
        center.getPoint();
        cout << " is not inside the Circle." << endl;
    }
    //center.~Point2D();

    cout << "---------------------------------------------" << endl;
    cout << "Demonstration of collinearity of three points" << endl;
    cout << "---------------------------------------------" << endl;
    float a, b, c, d, e, f;
    cout << "Enter the X1 axis of 1st point: ";
    cin >> a;
    cout << "Enter the Y1 axis of 1st point: ";
    cin >> b;
    Point2D p1(a,b);
    cout<<endl;


    cout << "Enter the X2 axis of 2nd point: ";
    cin >> c;
    cout << "Enter the Y2 axis of 2nd point: ";
    cin >> d;
    Point2D p2(c,d);
    cout<<endl;

    cout << "Enter the X3 axis of 3rd point: ";
    cin >> e;
    cout << "Enter the Y3 axis of 3rd point: ";
    cin >> f;
    Point2D p3(e,f);
    cout<<endl;
    if(p1.checkCollinear(p1,p2,p3))
    {
        cout<<endl;
        cout<<"Points are Collinear."<<endl;
    }
    else
    {
        cout<<endl;
        cout<<"Points are not Collinear."<<endl;
    }


    cout << "----------------------------------------" << endl;
    cout << "Demonstration of point to be on the axis" << endl;
    cout << "----------------------------------------" << endl;
    cout << "Enter the X axis of point: ";
    cin >> x;
    cout << "Enter the Y axis of point: ";
    cin >> y;
    Point2D point(x,y);
    point.getPoint();
    if(point.onAxis())
        cout<<" is on the axis."<<endl;
    else
        cout<<" is not on the axis."<<endl;

    return 0;
}