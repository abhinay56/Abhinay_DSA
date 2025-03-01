#include<iostream>
using namespace std;
int main() {
    int n, i;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements: ";
    for (i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int largest=arr[0],slargest=-1;
    for(i=1;i<n;i++)
    {
        if(arr[i]>largest)
        {
           slargest=largest;
           largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>slargest)
        {
            slargest=arr[i];
        }
    }
    cout<<"The second largest element in the array is :"<<slargest;
    return 0;
}
