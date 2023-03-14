#include<stdio.h>

main(){
	
	int n,r,a,sum;
	
	printf("Enter Number : ");
	scanf("%d",&n);
	
	a = n;
	
	while(n>0){
		
		r = n%10;
		sum = (sum*10)+r;
		n = n/10;
	}
	
	if(a==sum){
		printf("Palindrome");
	}
	else{
		printf("Not Palindrome");
	}
	
}
