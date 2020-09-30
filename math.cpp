#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
main()
{
    long long i,s=0,a,b;
    cin>>a>>b;
    if((a>=0)&&(b>=0))
    {
        for(i=a;i<=b;i++)
        {
            s=s+i;
        }
    }
    cout<<s<<endl;
}
