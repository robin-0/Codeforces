#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    unsigned long long int a,b,cnt,temp;

    while(scanf("%llu%llu",&a,&b)!=EOF)
    {
        cnt=0;

        for(;;)
        {
            if((a>b)&&a&&b)
            {
                temp=a/b;
                a-=temp*b;
                cnt+=temp;

            }
            else if((b>a)&&a&&b)
            {
                temp=b/a;
                b-=temp*a;
                cnt+=temp;
            }
            else
            {
                break;
            }
        }

        printf("%llu\n",cnt);
    }

    return 0;
}