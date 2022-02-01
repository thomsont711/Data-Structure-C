#include <stdio.h>
struct Employee
{
int empid;
char name[50];
int salary;
}emp[50];
int main()
{ int n,i;
  printf("Enter the number of employees\n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("Enter the employee details-%d\n",i+1);
    printf("Employee id:");
    scanf("%d",&emp[i].empid);
    getchar();
    printf("Employee name:");
    scanf("%[^\n]",emp[i].name);
    printf("Employee salary:");
    scanf("%d",&emp[i].salary);
 }
  printf("Employee Details\n");
  printf("Employee id---Employee name---Employee salary\n");
   for(i=0;i<n;i++)
       printf("%-15d %-15s %10d\n",emp[i].empid,emp[i].name,emp[i].salary);
}
