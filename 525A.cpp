#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int n;
    
    while(scanf("%d",&n)!=EOF)
    {
        char str[200005];
        int keys[26]={0,},buy=0,i;
        scanf("%s",str);
        n=2*n-2;
        for(i=0;i<n;i+=2)
        {
            keys[str[i]-97]++;
            
            if(keys[str[i+1]-65]==0) buy++;
            else keys[str[i+1]-65]--;
        }
        printf("%d\n",buy);
    }
                
    return 0;

}