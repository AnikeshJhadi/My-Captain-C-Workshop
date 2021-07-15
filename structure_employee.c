
#include<stdio.h>
struct employee
{char name[30];
 int age;
 long int phno;
 float salary;
}p[2];
void display()
{int j;
 for(j=0;j<2;j++) 
 {printf("Name of Employee  %d:-%s\n", j+1,p[j].name);
  printf("Age of Employee  %d:-%d\n", j+1,p[j].age);
  printf("Contacts of Employee %d:-%d\n",j+1,p[j].phno);
  printf("Salary of Employee  %d:-%f\n", j+1,p[j].salary);
  }
};
int main() 
{int i;
 for(i=0;i<2;i++) 
 {printf("Enter the name of employee %d:-",i+1);
  scanf("%s",&p[i].name);
  
  printf("Enter the age of employee %d:-",i+1);
  scanf("%d",&p[i].age);
  
  printf("Enter contacts of employee %d:-",i+1);
  scanf("%s",&p[i].phno);
  
  printf("Enter the salary of employee %d:-",i+1);
  scanf("%f",&p[i].salary);
 }
display();
return 0;
}
