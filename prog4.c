#include <stdio.h>

void square(int n){
	printf("Square : %d\n", n*n);
}
void cube(int n){
	printf("Cube: %d\n", n*n*n);
}
void area_of_circle(int n){
	printf("Area of Circle with radius %d: %f\n",n, 3.14*n*n);
}

int main(){
	int n;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	square(n);
	cube(n);
	area_of_circle(n);
}