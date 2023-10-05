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

    
    classroom(int x, int y)
    {
        cout<<x<<y<<endl;
    }

/*
    void area()
    {
        cout<<l*w<<endl;
    }

    */
    classroom( float a1, float a2)
    {
        cout<<a1<<" "<<a2<<endl;
    }

    classroom( int x, int y, int z)
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
    
    classroom c4( 50 ,60, 70);
    classroom c5(10.6f, 10.7f);


    return 0;
}
