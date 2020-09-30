#include<iostream>
using namespace std;
int cost[5][5];
int vertex[5];
int infinity=9999999;
int i,j,k;
bool flag[5];
main()
{
for(i=0;i<5;i++)
{
    for(j=0;j<5;j++)
    {
        cin>>cost[i][j];
    }
}


for(i=1;i<5;i++)
{
    vertex[i]=infinity;
}

vertex[0]=0;

for(i=0;i<5;i++)
{
    for(j=0;j<5;j++)
    {
        if((cost[i][j]>0)&&(!flag[i]))
        {
        vertex[j]=vertex[i]+cost[i][j];
        }
    }
}

}
