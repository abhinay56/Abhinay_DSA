#include<iostream>
using namespace std;
int main()
{
int n,larg=0,i;
cin>>n;
int arr[n];
cout<<"enter array elements:";
for(i=0;i<n;i++)
{
    cin>>arr[i];
}
for(i=0;i<n;i++)
{
    if(arr[i]>larg)
    {
        larg=arr[i];
    }
}
cout<<"the largest element in array is: "<<larg;
return 0;
}
