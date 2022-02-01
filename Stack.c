#include<stdio.h>
#include<stdlib.h>
int stack[10],top=-1;
int push()
{
    int item;
    printf("enter the element to be inserted\n");
    scanf("%d",&item);
    if(top==10)
        {
        printf("stack overflow\n");
        }
    else
        {
         top=top+1;
         stack[top]=item;
        }
}
void pop()
{
    int item;
    if(top==-1)
        {
          printf("stack underflow\n");
    }
    else
    {
      item=stack[top];
      top=top-1;
      printf("deleted element=%d\n",item);
      }

}
int display()
{
  int i;
  if(top!=-1)
  {
    printf("stack elements\n");
    for(i=top;i>=0;i--)
     {
       printf("%d\n",stack[i]);
     }
  }
  else
   printf("no elements\n");
}
int main()
{
  int s=0;
  while(1)
   {
     printf("1:push\n2:pop\n3:display\n4:exit\n");
     scanf("%d",&s);
     switch(s)
      {
        case 1:push();
               break;
        case 2:pop();
               break;
        case 3:display();
               break;
        case 4:exit(0);
      }
   }
return 0;
}
