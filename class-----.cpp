
/*
Calculation of area of rectangle by using objects and class
*/

#include<iostream>
using namespace std;
class Rectangle
{
    public:
    int length;
    int breadth;

    int area()
    {
        return length*breadth;
    }

    int perimeter()
    {
        return 2*(length + breadth);
    }

};

int main()
{
    Rectangle r1,r2;
    cout<<"Enter length and breadth of 1st rectangle"<<endl;
    cin>>r1.length>>r1.breadth;

    cout<<"Area = "<<r1.area()<<endl<<"Perimeter = "<<r1.perimeter()<<endl;

    cout<<"Enter length and breadth of 2nd rectangle"<<endl;
    cin>>r2.length>>r2.breadth;

    cout<<"Area = "<<r2.area()<<endl<<"Perimeter = "<<r2.perimeter()<<endl;

    return 0;

}