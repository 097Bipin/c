#include<stdio.h>
#include<conio.h>
int main(){
	int a,rem;
	printf("enter a number");
	scanf("%d",&a);
	rem=a%2;
	if(rem==0){
			printf("%d is even",a);
	}else{
			printf("%d is odd",a);
	}
	return 0;
}