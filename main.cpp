#include<iostream>
using namespace std;
class complex2;
class complex1
{
int r,i;
public:

    void getdata()
    {
        cout<<"Enter a number"<<endl;
        cin>>r;
        cout<<"Enter imaginary number"<<endl;
        cin>>i;
    }
    friend void complexadd (complex1 &, complex2 &);
};
class complex2
{
int r,i;
public:

    void getdata()
    {
        cout<<"Enter a number"<<endl;
        cin>>r;
        cout<<"Enter imaginary number"<<endl;
        cin>>i;
    }
    friend void complexadd (complex1 &, complex2 &);
};
void complexadd (complex1&c1, complex2&c2)
{
    int real = c1.r+c2.r;
    int image = c1.i+c2.i;
    cout<<"Real part"<<real;
    cout<<"\nImaginary part"<<image;
}
int main()
{
    complex1 a;
    complex2 b;
    a.getdata();
    b.getdata();
    complexadd (a,b);
    return 0;
}
