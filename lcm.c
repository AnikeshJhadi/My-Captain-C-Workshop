#include<stdio.h>
int findlcm(int,int);
int main() 
{int a,b,lcm;
 printf("Enter the two numbers:-");
 scanf("%d%d",&a,&b);
 lcm= findlcm(a,b);
 printf("LCM=%d",lcm);
 return 0;
}
int findlcm(int a,int b)
{static int temp=1;
 if(temp%a==0 && temp%b==0) 
 {return temp;}
 else
 {
  temp++;
  findlcm(a,b);
  return temp;
  }
}
