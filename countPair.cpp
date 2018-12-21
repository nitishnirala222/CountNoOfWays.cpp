#include<iostream>
using namespace std;
int countPair(int n)
{
int arr[n];
for(int i=0;i<=n;i++)
{
if(i<=2)
arr[i]=i;
else
arr[i]=arr[i-1]+(i-1)*arr[i-2];
}
return arr[n];
}
int main()
{
int x;
cout<<"Enter a number: ";
cin>>x;
cout<<countPair(x);
}
