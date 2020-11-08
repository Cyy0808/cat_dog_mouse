#include<stdio.h>
int main(){
	int n, i, j, num=1, c=-1, z=n*n, a[100][100]={0};
	scanf("%d", &n);
	
	while(++c<=((n-1)/2)){
		for(i=c,j=c;j<(n-c-1);j++) a[i][j]=num++;//j++已处理j为加1状态，故下一行不需要再加1 
		for(i=c;i<(n-c-1);i++) a[i][j]=num++;	
		for(;j>=c;j--) a[i][j]=num++;
		for(j+=1,i-=1;i>c;i--) a[i][j]=num++;
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%5d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
