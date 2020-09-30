#include<iostream>
#include<math.h>
using namespace std;
main()
{
    int n,min=1,max=100,an=40;
    cout<<"guess a number:";
    cin>>n;
    while(min<=max)
    {
        int avg=(min+max)/2;

if(avg==an)
{
    cout<<"Correct";
    break;
}
else if(n<an)
{
min=n+1;
}
else if(n>an)
{
    max=n-1;
}
    }

}
