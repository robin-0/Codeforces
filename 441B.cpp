/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main()
{
    int n,v,pre,rotting,a[4005],b[4005],i,j,bag,collect,day,v2;

    while(scanf("%d%d",&n,&v)!=EOF)
    {
        day=0;
        bag=0;
        for(i=0;i<n;i++)
            {
                scanf("%d%d",&a[i],&b[i]);
                if(a[i]>day)
                    day=a[i];
            }

        rotting=0;
        day+=2;

        for(i=1;i<day;i++)
        {
            pre=0;
            for(j=0;j<n;j++)
            {
                if(a[j]==i)
                    {
                        pre+=b[j];
                    }
            }

            if(rotting>v)
            {
                    bag+=v;
                    v2=0;
            }
            else
            {
                bag+=rotting;
                v2=v-rotting;
            }

            if(pre>v2)
            {
                bag+=v2;
                pre-=v2;
            }
            else
            {
                bag+=pre;
                pre=0;
            }



            rotting=pre;


        }

        printf("%d\n",bag);


    }

    return 0;

}


