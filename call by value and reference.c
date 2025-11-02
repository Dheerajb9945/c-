#include <stdio.h>
void exchange(int x, int y);
void swap(int *x, int *y);
int main(){
int x,y;
printf("\n enter values for x and y");
scanf("%d %d",&x,&y);
printf("Values before swap: x = %d, y = %d\n", x,y);
printf("\n demonstrating call by reference\n");
swap(&x,&y);
printf("Values after swap using call by refernce: x = %d, y = %d", x,y);
printf("\n demonstrating call by vale\n");
exchange(x,y);
}
void exchange(int x, int y){
int temp = x;
x = y;
y = temp;
printf("Values after swap using call by vlaue: x = %d, y = %d", x,y);
}
void swap(int *x, int *y){
int temp = *x;
*x = *y;
*y = temp;
}
