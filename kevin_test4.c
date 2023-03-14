#include<stdio.h>
main(){

    int i,j,a,b,sum=0;
    
    printf("Enter the size of row : ");
	scanf("%d",&a);
	
	printf("Enter the size of column : ");
	scanf("%d",&b);
	
	int n[a][b];
	
	for(i=0; i<a; i++){
		
		for(j=0; j<b; j++){
			
			printf("Value of [%d][%d] : ",i,j);
			scanf("%d",&n[i][j]);
			
			}
			printf("\n");
	}
	
	
	for(i=0; i<a; i++){
		
		for(j=0; j<b; j++){
			
			printf(" %d",n[i][j]);
			
			}
		printf("\n");
	}
	
	for(i=0; i<a; i++){
		
		for(j=0; j<b; j++){
			
			if(i==j){
				
				sum=sum+n[i][j];
			}
		}
	}
	
	printf("The sum of diagonal elements of the matrix is : %d",sum);
}



