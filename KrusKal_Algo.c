#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int i,j,k,a,b,u,v,n=4,ne=1;
int min,mincost=0,parent[9];
int find(int);
int uni(int,int);
void main()
{

	printf("\n\tImplementation of Kruskal's algorithm\n");
	printf("\nEnter the no. of vertices:");
	//scanf("%d",&n);
	printf("\nEnter the cost adjacency matrix:\n");

	int cost[4][4]={
    { 999,3,1,6},
	{ 3,999,5,999},
	{ 1,5,999,5},
	{ 6,999,5,999}};
	printf("The edges of Minimum Cost Spanning Tree are\n");
	while(ne < n)
	{
	    ///printf("\n\t Ne  = %d\n",ne);
		for(i=1,min=999;i<=n;i++)
		{
			for(j=1;j <= n;j++)
			{
				if(cost[i][j] < min)
				{
					min=cost[i][j];
					a=u=i;
					b=v=j;
				}
			}
		}
		//printf("\n\t before U  %d\n",u);
		u=find(u);

		//printf("\n\t after U  %d\n",u);

		//printf("\n\t before V  %d\n",v);
		v=find(v);
        //printf("\n\t after V  %d\n",v);


		if(uni(u,v))
		{
			//printf(" uni function : %d edge (%d,%d) =%d\n",ne++,a,b,min);
			mincost +=min;

			//printf("\n\t in uni mincost  %d\n",mincost);
		}
		cost[a][b]=cost[b][a]=999;
	}
	printf("\n\t total Minimum cost = %d\n",mincost);
	getch();
}
int find(int i)
{
    //printf("\n\t parent ??  %d\n",parent[i]);

	while(parent[i])

        //printf("\n\t in while loop parent\n");
	i=parent[i];


	//printf("\n\t I Value:   %d\n",i);
	return i;
}
int uni(int i,int j)
{
    //printf("\n\t In Uni Function\n");

	if(i!=j)
	{ //printf("\n\t if e achi i!=j  I %d  J %d\n",i,j);
		//printf("\n\t parent[j]  %d\n",parent[j]);
		parent[j]=i;
		return 1;
	}
	return 0;
}
