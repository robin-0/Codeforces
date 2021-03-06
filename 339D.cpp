/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <algorithm>
#include <vector>
#include <queue>
#include <iostream>
#include <string>

using namespace std;

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define DEBUG(a) cout<<a<<endl;
#define PI acos(-1.0)
#define MAX 132000
#define MOD 1000000007
#define EPS 1e-9
#define BIGGER(a,b) (a>=b ? a : b)
#define SMALLER(a,b) (a<=b ? a : b)
#define getInt(a) scanf("%d",&a);
#define getLong(a) scanf("%lld",&a);
#define pb push_back

int n,pivot;
int tree[4*MAX];
int array[MAX];

int twos[40]={0,};

void init(int node,int lo , int hi);
void update(int node, int lo , int hi , int index, int value);

void init(int node,int lo , int hi)
{
    if(lo==hi)
    {
        tree[node]=array[lo];
        return;
    }

    int leftNode=2*node;
    int rightNode=leftNode+1;
    int mode=(upper_bound(twos,twos+19,node)-twos-1)%2;
    int mid=(lo+hi)/2;

    init(leftNode,lo,mid);
    init(rightNode,mid+1,hi);

    if(mode==pivot)
        tree[node]=tree[leftNode]|tree[rightNode];
    else
        tree[node]=tree[leftNode]^tree[rightNode];
}

void update(int node, int lo , int hi , int index, int value)
{
    if(index<lo || hi<index)
    {
        return;
    }

    if(lo==hi && lo==index)
    {
        tree[node]=value;
        return;
    }

    int leftNode=2*node;
    int rightNode=leftNode+1;
    int mode=(upper_bound(twos,twos+19,node)-twos-1)%2;
    int mid=(lo+hi)/2;

    update(leftNode,lo,mid,index,value);
    update(rightNode,mid+1,hi,index,value);

    if(mode==pivot)
        tree[node]=tree[leftNode]|tree[rightNode];
    else
        tree[node]=tree[leftNode]^tree[rightNode];
}

int main()
{
    int m,p,b,i,pp;

    twos[0]=1;

    for(i=1;i<20;i++)
        twos[i]=twos[i-1]<<1;
/*for(i=0;i<19;i++)
    DEBUG(twos[i]);
    while(1)
    {

        getInt(p);
        DEBUG(upper_bound(twos,twos+19,p)-twos-1)
    }*/
    getInt(n)
    getInt(m)

    if(n%2==0)
        pivot=1;
    else
        pivot=0;

    pp=(1<<n)-1;

    for(i=0;i<=pp;i++)
        getInt(array[i]);

    init(1,0,pp);

    while(m--)
    {
        getInt(p)
        getInt(b)

        update(1,0,pp,p-1,b);
        printf("%d\n",tree[1]);
    }


    return 0;
}
