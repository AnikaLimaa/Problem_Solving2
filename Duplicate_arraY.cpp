#include<iostream>
using namespace std;
main()
{
    int a[]={1,2,3,4,4};
    int i,j=0,k=0,c=0;
    for(i=0;i<5;i++)
    {
        while(j<5)
        {
            if(i!=j && a[i]==a[j])
            {
                c++;
                cout<<"total"<<a[i]<<endl;
            }
            j++;
        }
        j=0;
    }
}
