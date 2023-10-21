#include<iostream>
using namespace std;
// making a function.
int add(int num1,int num2)
{
    int sum=num1+num2;
    return sum;
}
// modifing same function
int add(int num1,int num2,int num3)
{
    int sum=num1+num2+num3;
    return sum;
}
float add(float num1,float num2)
{
    float sum=num1+num2;
    cout<<"your sum in float is:"<<sum;
    return sum;
}
int main()
{
    float a,b,c;
    a=5.5;
    b=4.5;
    add(a,b);
    return 0;
}