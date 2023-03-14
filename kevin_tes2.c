#include<stdio.h>

main(){
	
	int a,b,c;
	
	printf("Enter Number : ");
	scanf("%d",&a);
	
	if(a<=50){
		b = a*0.50;
	}
	else if(50<a && a<=150){
		b = a*0.75;
	}
	else if(150<a && a<=250){
		b = a*1.20;
	}
	else{
		b = a*1.50;
	}
	
	c = b+b*20;
	printf("%d",c);
	
}
