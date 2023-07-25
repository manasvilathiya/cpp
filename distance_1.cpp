#include<iostream>
using namespace std;
class book
{
    private:
    int book_no;
    char booktital[20];
    float price;

     float total_cost(int n)
     {
        return price*n;
     }
     public:
     void input()
     {
        cout<<"enter book no:";
        cin>>book_no;
        cout<<"enter book tital:";
        cin>>booktital;
        cout<<"enter price:";
        cin>>price;
     }
     void purchase()
     {
        int n;

        cout<<"enter number of copies to be purchse:";
        cin>>n;

        float totalcost=total_cost(n);
        cout<<"total cose to paid:"<<totalcost<<endl;
     }
};

int main()
  {
    book b;
    b.input();
    b.purchase();
  }