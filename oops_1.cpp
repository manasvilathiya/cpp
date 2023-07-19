#include<iostream>
using  namespace std;
class student;
{
      private:
      int admin:
      char name[20];
      float eng, maths, sci, total;
      float ctotal;
      {
         return eng+maths+sci;
      }
        public:
        int takedata()
        {
            cout<<"enter admin number:"<<endl;
            cin>>admin;
            cout<<"enter name:"<<endl;
            cin>>name;
            cout<<"enter marks eng:"<<endl;
            cin>>eng;
            cout<<"enter marks maths:"<<endl;
            cin>>maths;
            cout<<"enter marks sci:"<<endl;
            cin>>sci;
            total=ctotal();
        }
            int showdata()
            {
                cout<<"admin"<<"/t"<<"name"<<"/t"<<"eng"<<"/t"<<"maths"<<"/t"<<"sci"<<"/t"<<"total"<<endl;
                cout<<admin<<"/t"<<name<<"/t"<<eng<<"/t"<<maths<<"/t"<<sci<<"/t"<<total<<endl;
            }
};   
        int main()
        {
             student test;
             test. takedata();
             test. showdata();
        }