#include <stdio.h>
int main (){
int num=0, i;
printf("DIGITE UM NUMERO:");
scanf ("%d", &num);
for (i = 1; i <= 10; ++i) {
printf("%d x %d = %d\n", num, i, num*i);
 
}

return (0);
}
