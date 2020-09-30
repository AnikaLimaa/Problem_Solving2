#include<iostream>
using namespace std;
int n=5,i,j,t;
int timeslot[10],maxdead,maxprofit;
int job[10]={1,2,3,4,5};
int profit[10];
int deadline[10];

main()
{
for(i=1;i<=n;i++)
{
    cin>>profit[i];
}
for(i=1;i<=n;i++)
{
    cin>>deadline[i];
}

for(i=1;i<=n;i++)
{

    for(j=i+1;j<=n;j++)
    {
if(profit[j]>profit[i])

{
    t=profit[i];
    profit[i]=profit[j];
    profit[j]=t;


    t=deadline[i];
    deadline[i]=deadline[j];
    deadline[j]=t;

}
    }
}


for(i=1;i<=n;i++)
{
cout<<"   "<<profit[i]<<endl;
cout<<"   "<<deadline[i];
}
}
