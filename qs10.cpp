#include<stdio.h>
int main(){
	int a,b;
    scanf("%d%d",&a,&b);
	if((a+b)%2==0){
		printf("%d is even number : ",a+b);
	}
	else{
		printf("%d is odd number : ",a+b);
	}
	return 0;
}