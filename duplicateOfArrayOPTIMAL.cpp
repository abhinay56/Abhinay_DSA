#include<iostream>
using namespace std;
int main() {
    int n,m,j;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements in sorted manner :";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int i=0;
     for(j=1;j<n;j++)
     {
         if(arr[i]!=arr[j])
         {
             arr[i+1]=arr[j];
             m=i+1;
             i++;
         }
     }
     for(int i=0;i<=m;i++)
    {
        cout<<arr[i];
    }
    return 0;
}
