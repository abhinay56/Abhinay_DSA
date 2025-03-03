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
    m=arr[0];
     for(j=1;j<n;j++)
     {
        arr[i]=arr[j];
            i++;
         }
       arr[n-1]=m;
     for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}
