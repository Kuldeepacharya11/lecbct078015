
#include<stdio.h>

int c, *pc;

pc = c;  

*pc = &c;  

pc = &c;  

*pc = c; 