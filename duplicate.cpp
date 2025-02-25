#include <iostream>
#include <set>
using namespace std;
int main() {
    int n,i;
    cout<<"enter n:";
    cin>>n;
    int arr[n];
    cout<<"enter sorted array:";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    set<int> s;
    for (int i = 0; i < n; i++)
        s.insert(arr[i]);
    cout << "Array after removing duplicates: ";
    for (int x : s)
        cout << x << " ";
    return 0;
}
