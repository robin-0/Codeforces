/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);


int main()
{
    int pos[200][2],neg[200][2],po,ne,n,i,j,key[2],ans,max;

    while(scanf("%d",&n)!=EOF)
    {
        po=0;
        ne=0;

        while(n--)
        {
            scanf("%d%d",&key[0],&key[1]);

            if(key[0]<0)
            {
                for(j=ne-1;j>=0;j--)
                {
                    if(key[0]<neg[j][0])
                        break;
                    neg[j+1][0]=neg[j][0];
                    neg[j+1][1]=neg[j][1];
                }
                neg[j+1][0]=key[0];
                neg[j+1][1]=key[1];
                ne++;

            }
            else
            {
                for(j=po-1;j>=0;j--)
                {
                    if(key[0]>=pos[j][0])
                        break;
                    pos[j+1][0]=pos[j][0];
                    pos[j+1][1]=pos[j][1];
                }
                pos[j+1][0]=key[0];
                pos[j+1][1]=key[1];
                po++;

            }
        }

            ans=0;

            if(po<=ne)
            {
                for(i=0;i<po;i++)
                    ans+=pos[i][1]+neg[i][1];
            }
            else if(po>ne)
            {
                for(i=0;i<ne;i++)
                    ans+=pos[i][1]+neg[i][1];

                ans+=pos[ne][1];
            }

            max=ans;

            ans=0;

            if(ne<=po)
            {
                for(i=0;i<ne;i++)
                    ans+=pos[i][1]+neg[i][1];
            }
            else if(po<ne)
            {
                for(i=0;i<po;i++)
                    ans+=pos[i][1]+neg[i][1];
                ans+=neg[po][1];
            }

            if(ans>max)
                max=ans;

            printf("%d\n",max);




    }


    return 0;



}