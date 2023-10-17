#include<iostream>>
using namespace std;
int main()
{
int n,m;

//definig rows
cin>>n;
cin>>m;
for(int i=1;i<=n;i++)
{
for(int j=1;j<=m;j++)
{
if(i==1 || n==i ||j==1||j==m)
{
cout<<"*";
}
else
{
cout<<" ";
}
}
cout<<endl;
}
return 0;
}