#include<iostream>
using namespace std;
int main()
{
int n,i,temp;
cin>>n;
int arr[n];
cout<<"enter array elements:";
for(i=0;i<n;i++)
{
cin>>arr[i];
}
for(i=0;i<n;i++)
{
    if(arr[i]>arr[i+1] || arr[i]==arr[i+1])
    {
    continue;
    }

    else
    {
        return -1;
    }
}
return 0;
}


