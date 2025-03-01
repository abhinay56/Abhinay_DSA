#include <iostream>
#include <set>
using namespace std;
int main() {
    int n,i;
    cin>>n;
    int a[n];
    cout<<"enter elements into the array:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    set<int> st;
    for(i=0;i<n;i++)
        st.insert(a[i]);
    cout << "Array without duplicates: ";
    for(int x:st)
        cout <<x<<" ";
    return 0;
}
