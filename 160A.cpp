#include <stdio.h>

int main()
{
  int array[105], n, c, d, swap,sum=0;

  scanf("%d", &n);


  for (c = 0; c < n; c++)
    {scanf("%d", &array[c]); sum+=array[c];}
    sum/=2;
  for (c = 0 ; c < ( n - 1 ); c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (array[d] < array[d+1])
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }

  swap=0;
  for (c = 0; c < n; c++) { if(sum>=0){sum-=array[c]; swap++;} else break;}
  printf("%d\n",swap);

  return 0;
}