#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    char s1[105],s2[105];
    int i;


    scanf("%s %s",s1,s2);

    for(i=0;s1[i];i++)
        if(('A'<=s1[i])&&(s1[i]<='Z')) s1[i]=s1[i]-'A'+'a';

    for(i=0;s2[i];i++)
        if(('A'<=s2[i])&&(s2[i]<='Z')) s2[i]=s2[i]-'A'+'a';


    printf("%d\n",strcmp(s1,s2));

    return 0;
}