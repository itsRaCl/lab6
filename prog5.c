#include<stdio.h>
int factorial(int n){
	int f=1;
	for (int i=1; i<=n;i++){
		f*=i;
	}
	return f;
}

void main(){
	int n, ret =0;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	for(int i=1; i<=n;i++){
		ret += factorial(i)/i;
	}
	printf("The value of 1!/1 + 2!/2 + 3!/3 + 4!/4 + 5!/5 + ... + n!/n is: %d\n", ret);
}