#include<stdio.h>
unsigned int stair(int n);

int main(){
	int n;
	scanf("%d", &n);
	printf("%d", stair(n));
	return 0;
} 

unsigned int stair(int n){
	unsigned int sum;
	if(n==1) sum = 1;
	else if(n==2) sum = 2;
	else if(n==3) sum = 4;
	else{
		sum = stair(n-1) + stair(n-2) + stair(n-3);
	} 
	return sum;
}
