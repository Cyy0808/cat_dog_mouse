#include<stdio.h>
int main(){
	int n, i;
	long long sum[10002];//������洢����Ľ��������ݹ�ʱ�ķ������ƣ��������и��Ӷ� 
	scanf("%d", &n);
	sum[1] = 1;
	sum[2] = 2;
	sum[3] = 4;
	for(i = 4; i <= n; i++)//�ڹ����о�%1191���򻯽�� 
		sum[i] = (sum[i - 1] + sum[i - 2] + sum[i - 3])%1191;//���� 
	printf("%lld", sum[n]);
} 
