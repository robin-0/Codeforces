#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    char inp[1005];

    scanf("%s",inp);

    if((inp[0]>='a')&&('z'>=inp[0])) inp[0]=inp[0]-32;

    printf("%s",inp);

    return 0;
}