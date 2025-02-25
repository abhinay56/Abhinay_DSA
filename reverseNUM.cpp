#include<iostream>
using namespace std;
int main(){
int num,rem,n,rev=0;
cin>>num;
n=num;
while(num!=0)
{
    rem=num%10;
    rev=rev*10+rem;
    num=num/10;
}
cout<<"Reversed number of "<<n<<" is:"<<rev;
}
