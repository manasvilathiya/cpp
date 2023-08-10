#include<iostream>
using namespace std;
class test
{
     public:
     test ()
     {
         cout<<"constructor is called..."<<endl;
     }
    test(int m)
    {
         cout<<"constructor is called....m:"<<m<<endl;
    }
};
int main ()
{
    test t,b(50),a;
}
