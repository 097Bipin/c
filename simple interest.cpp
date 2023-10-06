#include <stdio.h>
#include<conio.h>
int main()
{
    int p,t;
    float r,si;
    printf("enter principle");
    scanf("%d",&p);
     printf("enter rate");
      scanf("%f",&r);
      printf("enter time");
       scanf("%d",&t);
si=(p*t*r)/100;
  printf("interest is %2f",si);
    return 0;
}
