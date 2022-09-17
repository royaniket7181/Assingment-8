#include<stdio.h>
int main(){
	int i,j,x,y;
	 for(i=1;i<=3;i++){
		for(j=1;j<=19;j++){						
			if((j>=4-i && j<=6+i) || (j>=14-i && j<=16+i)){
			  printf("*");    
		  }
		else {
		printf(" ");
			}
		}
		printf("\n");
		}
		printf("******MySirG*******\n");
		for(x=1;x<=9;x++){
			for(y=1;y<=18;y++){
				if(y>=x+1 && y<=19-x) {
					printf("*");
				}
				else {
					printf(" ");
				}
			}
			printf("\n");
		}
	
	
	return 0;
	}