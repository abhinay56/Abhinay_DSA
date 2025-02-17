#include<iostream>
using namespace std;
int main()
{
    int n,num,r,p=0;
    cin>>num;
    n=num;a
    while(num!=0)
    {
       r=num%10;
       p=p*10+r;
       num=num/10;
    }
    if(n==p)
    {
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}
