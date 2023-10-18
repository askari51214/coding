#include<iostream>
#include<fstream>
using namespace std;
float volume( float radius)
{
    float z=(radius*radius*radius);
    float pi=3.14;
    float v=(4*(3.14)*z)/3;
   return v;
}
int main()
{
    float r;
    cout<<"enter value of radius:";
    cin>>r;
    float v= volume(r);
    cout <<v;
    fstream file1;
    file1.open("file.txt",ios::out);
    file1<<v;
    file1.close();
    return 0;
}




