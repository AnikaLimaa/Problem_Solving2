#include<iostream>
using namespace std;
main()
{
    int a[5],b[5],i,j=0,d;
    for(i=0;i<3;i++)
    {
        cin>>a[i]>>b[i];
        if(b[i]>a[i])
        {
            cout<<"d"<<d<<endl;
            d=b[i]-a[i];
            j=d+j;
        }
    }
    cout<<j<<endl;
}
