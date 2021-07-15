#include<stdio.h>
int isprime(int,int);
int main() 
{int num, result;
 printf("Enter the positive number:-");
 scanf("%d",num);
 result=isprime(num, num/2);
 if(result==1) 
 printf("%d is a prime number.", num);
 else
 printf("%d is not a prime number.", num);
 return 0;
}
int isprime(int n, int i)
{if(i==1) 
 return 1;
 else
 { if(n%i==0) 
   return 0;
   else
   isprime(n,i-1);
  }
}
