#include<stdio.h>
int main(){
	int i,j;
	char k;
	for(i=1;i<=4;i++){
		k='A'; 
		for(j=1;j<=9;j++){
			
			if(j==1 || j==i){
			
			printf("*");
			
			}
			else {
			
			printf(" ");
			
			}
		}
		printf("\n");
	}
	printf("*****");
	return 0;
	}