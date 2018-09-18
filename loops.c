#include <stdio.h>
int main(void)
{
   int sum=0;
   int k;

     k=0;

    while (k<5)
    {
        sum=sum+k;
        k++;
    }
    printf ("4 + 6 = %d -sum\n", sum);

        for (k=11;k>1;)
     {
         k--;
  printf ("%2d\n", k);
    }
    printf ("Blastoff!\n");
}