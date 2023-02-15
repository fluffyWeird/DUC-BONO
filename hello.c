#include <stdio.h>

int main(){
   int a;
int b;
int* p,*q;
p = &a;
*p = 4;  
q=&b;
*q=*p+10;
printf("%d \n", *q);
p = &b;
*p = 3;
printf("%d %d %d %d\n",a,b,*p,*q);

}