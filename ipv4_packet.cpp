#include<iostream>
using namespace std;
long int total,version,i;
long int version(int pkt[70000])
{
    for(i=total;total>1;i--)
    {
        if(pkt[i]==0 && pkt[i+1]==1 pkt[i+2]==0 pkt[i+3]==0)
        {
            version=4;
            return version;
            break;
        }
    }
}
int headerlen(int pkt[])
{
    i=n-4,j=0,k1,s=0,k2=3;
    while(j<4)
    {
        k1=pow(2,k2);
        k2--;
        k=pkt[i];
        k=(k*k1);
        s=s+k;
        j++;
        i--;


    }
    s=s*4;
    return s;
}


int time_to_live()
{
    int v=255;
    while(v>=0)
    {
v--;
if(v==0)
{
    print("Pkt Dropped");
}
    }

}

void fragmentation(int pkt[])
{
    int transmission limit=500 byte;
    int payload1=transmission limit-len;
    int segment_no=celi(payload/payload1);
    int seg1=segment_no,seg2=1;
    while(seg2<seg1)
    {
        payload3[seg2]=480;
        s=s+payload3[seg2];
        seg2++;
    }
    if(s<total_payload)
    {
        s=total_payload-s;
        payload3[seg2]=s;
    }
}

void Morefragment()
{
    int segment_no;

    int s1=1,m,i=0,i1=1,j=0,segm1[segment_no+1];
    while(s1<segment_no)
    {

        if(s1==1)
        {
            segm1[s1]=0;
        }
        else
            i++;
            s1++;
            if(s1==segment_no)
            {
                break;
            }

            m=480*i;

        segm1[s1]=m/8;
        sum=sum+segm1[s1];


    }

    int rem=total_payload-sum;
    segm1[s1]=rem;

}

main()
{
    long int pkt[70000];
    long int version1=version(pkt[70000]);
    int len=headerlen(pkt[70000]);
    total_length=header_len+payload;
    time_to_live(pkt[]);
    fragmentation();
    more_fragmentation();

}
