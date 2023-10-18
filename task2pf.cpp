#include<iostream
using namespace std;
int angle(int a,int b)
{
    int c=180-(a+b);
    return c;
}

int main()
{
int z,h;
cout<<"enter first angle :"<<endl;
cin>>z;
cout<<"enter second angle"<<endl;
cin>>h;
int c=angle(z,h);
cout<<"your angle c is :"<<c;

return 0;
}