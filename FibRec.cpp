#include<iostream>
using namespace std;
int n1=0,n;

int fib(int a,int b,int n)
{
    int s=0;

    n--;
    if(n<0)
    {
        return 1;
    }
    else
    {


s=a+b;
cout<<s<<" ";
fib(b,s,n);
    }
}
main()
{
int n,a=0,b=1;
cin>>n;

    fib(a,b,n);
}
