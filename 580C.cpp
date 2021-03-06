/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define PI acos(-1.0)
#define MAX 100005
#define MOD 1000000007
#define EPS 1e-9

vector <vector <int> > adj(MAX);
char cat[MAX]={0,};
char color[MAX]={0,};
int consec[MAX]={0,};
int ans=0;
int m;

void dfs(int previous , int node , int max);

void dfs(int previous , int node , int max)
{

    int size=adj[node].size(),i;
    //printf("%d\n",node);

    color[node]=1;

    if(cat[node]==0)
        consec[node]=0;
    else
    {
        if(node!=1)
            consec[node]=consec[previous]+1;
        else
            consec[node]=1;
    }

    //printf("%d\t%d\n",node,consec[node]);

    if(consec[node]>max)
        max=consec[node];



    if(size==1 && node!=1)
    {
        //printf("%d\t%d\n",node,max);
        if(max<=m)
            ans++;
        return;
    }

    for(i=0;i<size;i++)
    {
        if(color[adj[node][i]]==0)
        {
            dfs(node,adj[node][i],max);
        }
    }

}


int main ()
{
    int n;
    int i,a,b;

    scanf("%d%d",&n,&m);

    for(i=1;i<=n;i++)
    {
        scanf("%d",&cat[i]);
    }

    for(i=1;i<n;i++)
    {
        scanf("%d%d",&a,&b);

        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    dfs(1,1,0);

    printf("%d\n",ans);





    return 0;

}