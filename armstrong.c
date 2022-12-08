#include <stdio.h>
#include <math.h>

int IsArmstrong(int n){

	int div=1,x=1,digits=-1;
	

	do{
		div = n/x;

		x*=10;

		digits++;
	}	while(div!=0);
	int armstrong_sum = 0, temp_num=n;
	for (int i=digits-1; i>=0;i--){
		int check_num = temp_num  / pow(10, i);
		temp_num -= check_num * pow(10,i);
		armstrong_sum += pow(check_num , digits);
		
	}
	if (armstrong_sum == n){
		return 1;
	}
	else return 0;
}

int main(){
	int a,b;

	printf("Enter the start of the range: ");

	scanf("%d",&a);

	printf("Enter the end of the range: ");

	scanf("%d", &b);

	printf("Armstrong Numbers between %d and %d\n",a, b);

	for (int i=a; i<=b;i++){

		if (IsArmstrong(i)){

			printf("%d\n", i);

		}
	}
	return 0;
}