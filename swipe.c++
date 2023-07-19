# include<iostream>
using namespace std;
int main ()
{
     int u,b;
      cout<<"enter u:";
      cin>>u;
      cout<<"enter b:";
      cin>>b;

      u=b+u;
      b=u-b;
      u=u-b;
       
       cout<<"u:"<<u<<"\n";
       cout<<"b:"<<b;
}