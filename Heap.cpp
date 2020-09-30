#include<iostream>
using namespace std;
const int size=5;
int a[size];
int c;
void adjust(int s, int e)
{
    int v1=a[c];
   int  i=c;
    while(i/2>=1)
    {
        if(v1>a[i/2])
        {
            a[i]=a[i/2];
            i=i/2;
        }

        else
        {
            break;
        }
        a[i]=v1;
    }
}
void insert(int v)
{
    if(c<size-1)
    {
        c++;
        a[c]=v;
        adjust(c,1);
    }
    else
    {
        cout<<"Heap is Full!"<<endl;
    }
}

void print()
{
    int i;
    for(i=1;i<=c;i++)
    {
        cout<<a[i]<< "   ";
    }
    cout<<endl;
}

int main()
{
insert(1);
insert(14);
insert(30);
insert(23);
print();
}
