#include <stdio.h>
int main(void)
{
   int sum=0;
   int k;

     k=0;

    while (k<5)
    {
        sum=sum+k;
        k++; //use something different in "for" version
    }
    printf ("%d\n", sum);

        for (k=5;k>0;)
     {
         k--;
  printf ("%d\n", k);
    }
}