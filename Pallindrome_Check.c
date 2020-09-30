#include<stdio.h>
#include<string.h>

char ch1[10]={"mum"};
char ch2[10];
int i=0,j=2,k,f=0;
int len=sizeof(ch1);
int k1=0,k2=0,c=0;
int pallindrome_check()
{
if(i<len && j>=0)
{
    ch2[i]=ch1[j];
    j--;
    i++;
    pallindrome_check();
}
if(k1<3)
{
    if(ch1[k1]==ch2[k2])
    {
     k1++;k2++;
     c++;
     printf(" C : %d \n ",c);
    pallindrome_check();
    }
    if(c==3)
    {
         printf("\n Yes Pallindrome");
        return 1;
    }
    if(ch1[k1]!=ch2[k2])
    {
        f=0;
        return -4;
    }

}


}
main()
{
   int r= pallindrome_check();

   if(r==-4)
   {
        printf(" not");
   }
    if(r==1)
   {
        printf("Yes Pallindrome!!!");
   }
}
