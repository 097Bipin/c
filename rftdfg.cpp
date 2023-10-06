#include<stdio.h>
#include<conio.h>
int recursive (int);
int main (){
	int n, fac;
	printf("\n enter a number");
	scanf("%d",&n);
	fac = recursive (n);
	printf("\n factorial is %d",fac);
	getch();
	return 0;
     }
    int recursive (int n){
	if (n<=0){
	return 1;
	}
	else {
	return n* recursive (n-1);
	}
}
