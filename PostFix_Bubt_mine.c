#include<stdio.h>
int stack[20];
int top=-1;
void push(int x)
{
stack[++top]=x;
printf(" top    %d",top);
}
int pop()
{
return stack[top--];
}
main()
{
    char s[100],*e;
    gets(s);
    e=s;
    int num,n1,n2,n3;
    while(*e!='\0')
    {
        if(isdigit(*e))
        {
            num=*e-48;
            push(num);
        }
        else
        {
            n1=pop();
            n2=pop();

            switch(*e)
            {
            case '+':
                n3=n1+n2;
                break;

                case '-':
                n3=n1-n2;
                break;

                case '*':
                n3=n1*n2;
                break;

                case '/':
                n3=n1/n2;
                break;
            }
            push(n3);
        }
        e++;
    }

    printf(" expression is : %s ,  value is %d",s,pop());

}
