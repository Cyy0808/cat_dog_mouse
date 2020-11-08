#include<stdio.h> //“‘µ›πÈ µœ÷ 
int recursion(int n);

int main(){
	int n;
	scanf("%d", &n);	 
	printf("%d", recursion(n));
	return 0;
}

int recursion(int n){
	if(n==1) return 1;
	else return 2*recursion(--n)+1; 
}
