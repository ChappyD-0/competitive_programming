#include <stdio.h>
int main(){
int a, b;
while (scanf("%d %d", &a, &b) == 2)
printf("%d\n", a + b);	
}
//or you can check for EOF, i.e
//while (scanf("%d %d, &a,&b)!= EOF)
 
