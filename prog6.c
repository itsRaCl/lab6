#include <stdio.h>

int check_div(int a, int b){
	return a%b;
}

int main(){
	int n;
	printf("Enter the value of n: ");
	scanf("%d", &n);

	for (int i=2; i<n;i++){
		if (!(check_div(n,i))){
			printf("Not a prime number\n");
			return 0;
		}
	}
	printf("%d is a prime number\n", n);
	return 0;
}