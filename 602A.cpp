/* بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ */
/* رَّبِّ زِدْنِى عِلْمًا */



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define OUTPUT freopen("myfile.txt","w",stdout);
#define INPUT freopen("input.txt","r",stdin);
#define pi acos(-1.0)
#define MAX 100005

long long int my_power(long long int num,long long int power);

int main()
{
    long long int x,y;
    int bx,by,i,nx,ny;
    int inp;


    scanf("%d%d",&nx,&bx);
    x=0;
    for(i=1;i<=nx;i++)
    {
        scanf("%d",&inp);
        x+=my_power(bx,nx-i)*inp;
    }

    scanf("%d%d",&ny,&by);
    y=0;
    for(i=1;i<=ny;i++)
    {
        scanf("%d",&inp);
        y+=my_power(by,ny-i)*inp;
    }

    if(x<y)
        printf("<\n");
    else if(x>y)
        printf(">\n");
    else
        printf("=\n");

    return 0;

}


long long int my_power(long long int num,long long int power)
{
    long long int temp;
    if(power==1)
        return num;
    else if(power==0)
        return 1;
    else if(power%2==1)
    {
        temp=my_power(num,power/2);
        return temp*temp*num;
    }
    else if(power%2==0)
    {
        temp=my_power(num,power/2);
        return temp*temp;
    }
}
