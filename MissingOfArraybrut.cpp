#include<iostream>
using namespace std;
int main()
{
int n,i,j,flag;
cin>>n;
int arr[n];
cout<<"enter array elements:";
for(i=0;i<n;i++)
{
    cin>>arr[i];
}
    for (int i=1;i<= n;i++){
        int flag = 0;
        for (int j=0;j<n-1;j++) {
            if (arr[j] == i) {
                flag = 1;
                break;
            }
        }
        if (flag==0)
            return i;
    }
    return -1;
}
