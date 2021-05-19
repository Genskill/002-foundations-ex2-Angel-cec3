#include<stdio.h>
#include<cs50.h>
 int main(void){

int s1 = get_int("side 1 ");
int s2 = get_int("side 2 ");
int s3 = get_int("side 3 ");
 int large = 0;
if(s2>s1 && s2>s3){
	large = s2;
	if(s1*s1 + s3*s3 == large * large)
 		printf("Yes\n");
	else
		printf("No\n");
	}
else if(s3>s1 && s3>s2){
	large = s3;
	if(s1*s1 + s2*s2 == large * large)
 		printf("Yes\n");
	else
		printf("No\n");
	}
else{
	large = s1;
	if(s2*s2 + s3*s3 == large * large)
 		printf("Yes\n");
	else
		printf("No\n");
	}
}
