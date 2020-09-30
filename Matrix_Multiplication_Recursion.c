#include<stdio.h>
#include<string.h>

int matrix[2][2]={{1,7},
{2,3}};
int matrix1[2][2]={{5,4},{6,9}};
int res[5];
int s=0,i=0,j=0,k=0,i1=0,i2=0,c=0;
void matrix_Multiplication()
{
    if(k>1)
    {
        k=0;
        j++;


printf(" S :%d  ",s);
s=0;
    }
    if(j>1)
    {
        k=0;
        j=0;
        i++;
s=0;

    }
if(i<2)
{
    s=s+matrix[i][k]*matrix1[k][j];
c++;
    i1++;
    k++;
 matrix_Multiplication();
}
else
{
    return;
}

}
int main()
{
matrix_Multiplication();
int len=sizeof(res);

}
