#include <stdio.h>

int main () {
int a, b;
scanf("%d", &a);
scanf("%d", &b);
int c = b*0.01;
int d = (b - c*100)*0.1;
int e = (b - c*100 - d*10);
printf("%d\n", a*e);
printf("%d\n", a*d);
printf("%d\n", a*c);
printf("%d\n", a*b);
return 0;
}