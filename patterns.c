#include<stdio.h>
#include<cs50.h>

int main(void){

int type = get_int("Enter type of pattern(1 or 2)");
int r = get_int("Number of rows");
int n = r;
 switch(type){
case 1:
	for(int row=0;row<r;row++){
		for(int col=r;col>row;col--){
			printf("#");
		}
		printf("\n");
	}
	break;
case 2:
	for(int row=1;row<=r;row++){
		for(int col=1;col<=r;col++){
			if(col>n-1){
			printf("#");
			}
			else{
			printf(" ");
			}
		}
		n--;
		printf("\n");
	}
	break;
default:
	printf("Error");		
}
}
