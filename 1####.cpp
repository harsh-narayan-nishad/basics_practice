#include<iostream>
using namespace std;
class classroom
{
    public :
    int l,w;

    classroom()
    {
        cout<<"Hellow"<<endl;
    }

    /*
    classroom(int x, int y)
    {
        l=x;
        w=y;
    }


    void area()
    {
        cout<<l*w<<endl;
    }
    */

    classroom( int x, int y, int z=5)
    {
        cout<<x<<endl<<y<<endl<<z<<endl;
    }
};

int main()
{
    
    classroom c1;
    classroom c2 (10, 20);
 //   c2.area();

    classroom c3 (30, 40);   //---> Creating an object.
  //  c3.area();
 //   c1.area();     // Garbage value will be obtained beacause no value of x and y
    
    classroom c4(50,60, 70);

    return 0;
}
