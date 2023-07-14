#include<stdio.h>
int main()
{
int *pc,c;
c=5;
pc=&c;
printf("value of address of c is given by the pointer variable %p",pc);
printf("value of c is given by *pc i.e %d",*pc);

return 0;
}
