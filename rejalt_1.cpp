#include<iostream>
using namespace std;
class sk
{
    private:
    int admin;
    char name[20];
    float english,maths,science,total;
    float ctotal()
   {
      return english+maths+science;
   }
   public:
   int takedata()
   {
    cout<<"enter admin number:"<<endl;
    cin>>admin;
    cout<<"enter name:"<<endl;
    cin>>name;
    cout<<"enter english marks:"<<endl;
    cin>>english;
    cout<<"enter maths marks:"<<endl;
    cin>>maths;
    cout<<"enter science marks:"<<endl;
    cin>>science;
    total=ctotal();
  }
   int showdata()
  {
     cout<<"admin"<<"/t"<<"name"<<"/t"<<"english"<<"/t"<<"maths"<<"/t"<<"science"<<"/t"<<"total"<<endl;
     cout<<admin<<"/t"<<name<<"/t"<<english<<"/t"<<maths<<"/t"<<science<<"/t"<<total<<endl;
  }
};
int main()
{
    sk test;
    test.takedata();
    test.showdata();
}