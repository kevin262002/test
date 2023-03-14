#include<stdio.h>
void div(int n){
	
	if( n%3==0 && n%5==0){ 
		printf("Divisible");
	}
	else{
		printf("Not Divisible");
	}

	return 0;
}
main(){
	
   int a;
   
    printf("Enter a number : ");
   	scanf("%d",&a);
	
	div(a);
}

