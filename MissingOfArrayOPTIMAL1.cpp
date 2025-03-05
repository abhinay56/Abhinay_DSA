#include<iostream>
using namespace std;
int main()
{
int n,sum=0,i;
cin>>n;
int arr[n];
cout<<"enter array elements:";
for(i=0;i<n;i++)
{
    cin>>arr[i];
}
for(i=0;i<n;i++)
{
    sum+=arr[i];
}
int N=(n*(n+1))/2;
int miss=N-sum;
cout<<"the missing element in array is: "<<miss;
return 0;
}
