#include<stdio.h>
int sum_of_digit(int n) 
{ if(n==0) 
  return 0;
  return(n%10 + sum_of_digit(n/10));
}
int main() 
{ int num, result;
  printf("Enter the digit:-");
  scanf("%d",num);
  result=sum_of_digit(num);
  printf("Sum of digits:-%d",result);
  return 0;
}
