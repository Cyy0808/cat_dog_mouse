#include<stdio.h>
void Hanoi(int n, int a, int b, int c);

int main(){
	int n;
	scanf("%d", &n);
	Hanoi(n, 1, 2, 3);
	return 0;
}

void Hanoi(int n, int a, int b, int c){
	if(n==1){
		printf("%d %d\n", a, c);
	}
	else{
		Hanoi(n - 1, a, c, b);
		printf("%d %d\n", a, c);
		Hanoi(n - 1, b, a, c);
	}
}
