

#include<iostream>
using namespace std;
class Geeksname {
    public:
        string geekname;

        void printname() {
            cout<<"Name of geeks is "<<geekname;
        }
};

int main()

{
    Geeksname obj1;
    obj1.geekname="Harsh Narayan";
    obj1.printname();
    return 0;
}