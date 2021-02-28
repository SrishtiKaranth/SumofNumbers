#include <stdio.h>
int sumsd(int d);
int main()
{int d, sum;
printf("Enter any number to find sum of digits: ");
scanf("%d", &d);
sum = sumsd(d);
printf("Sum of digits is %d",sum);
return 0;
}
int sumsd(int d)
{
   if(d == 0)
        return 0;
return ((d% 10) + sumsd(d / 10));
}
