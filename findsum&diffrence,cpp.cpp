#include<stdio.h>
#include<conio.h>
int main(){
	int sales,dis;
	printf("enter sales amount");
	scanf("%d",&sales);
	if(sales<=5000){
		dis=sales*10/100;
}
else if(sales<=10000){
	dis=sales*15/100;
}
else if(sales<=20000){
	dis=sales*20/100;
}
else{
	dis=sales*20/100;
}

printf("discount amount is %d",dis);
getch();
return 0;


}
