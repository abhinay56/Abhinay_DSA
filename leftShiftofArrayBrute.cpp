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
    int temp[n],i=0;
    m=arr[0];
     for(j=1;j<n;j++)
     {
        temp[i]=arr[j];
            i++;
         }
       temp[n-1]=m;
     for(int i=0;i<n;i++)
    {
        cout<<temp[i];
    }
    return 0;
}
