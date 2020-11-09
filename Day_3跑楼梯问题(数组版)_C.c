#include<stdio.h>
int main(){
	int n, i;
	long long sum[10002];//用数组存储算过的结果，避免递归时的反复逆推，减少运行复杂度 
	scanf("%d", &n);
	sum[1] = 1;
	sum[2] = 2;
	sum[3] = 4;
	for(i = 4; i <= n; i++)//在过程中就%1191，简化结果 
		sum[i] = (sum[i - 1] + sum[i - 2] + sum[i - 3])%1191;//递推 
	printf("%lld", sum[n]);
} 
