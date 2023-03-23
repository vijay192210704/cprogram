#include<stdio.h>
main()
{
 float n;
 scanf("%f",&n);
 if(n>0)
  printf("n is positive");
 else if(n<0)
  printf("n is negative");
 else
  printf("n is zero");
}