#include<iostream>
using namespace std;
int main() {
    int n,j;
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
             i++;
         }
     }
    cout<<"the index of unique elements :"<<i+1;
    return 0;
}
