#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int n,cnt,i;
    char str[150];

    while(scanf("%d",&n)!=EOF)
    {
        cnt=0;
        int alp[26]={0,};
        scanf("%s",str);

        if(n<26) printf("NO\n");

        else
        {
            for(i=0;i<n;i++)
            {
                if(('a'<=str[i])&&(str[i]<='z'))
                {
                    if(alp[str[i]-97]==0)
                        {
                            alp[str[i]-97]=1;
                            cnt++;
                        }
                }
                else
                {
                    if(alp[str[i]-65]==0)
                        {
                            alp[str[i]-65]=1;
                            cnt++;
                        }
                }
            }
            if(cnt==26) printf("YES\n");
            else printf("NO\n");
        }
    }
    return 0;
}