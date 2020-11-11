#include<stdio.h>
#include<math.h>
void pattern(int n, int a, int b);
char arr[1000][1000]={ };

int main(){
	int n, i, j;
	scanf("%d", &n);
	int len=pow(3, n-1);
	pattern(n, len/2, len/2);
	for(i=0; i<len; i++){
		for(j=0; j<len; j++)printf("%c", arr[i][j]=='x'?'x':' ');
		printf("\n");
	}
	return 0;
}

void pattern(int n, int a, int b){
	int len=pow(3, n-2);
	if(n==1)arr[a][b]='x';
	else{
		pattern(n-1, a-len, b-len);
		pattern(n-1, a+len, b-len);
		pattern(n-1, a-len, b+len);
		pattern(n-1, a+len, b+len);
		pattern(n-1, a, b);
	}		
}
