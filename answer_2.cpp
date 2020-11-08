#include<stdio.h>
int fun(int n,int from,int to){
	if(n<=1){
		printf("%d %d\n",from,to);
		return 1;
	}
	int res=0;
	res+=fun(n-1,from,6-from-to);//from+to+ÁÙÊ±ÓÃÖù×Ó==6
	res+=fun(1,from,to);
	res+=fun(n-1,6-from-to,to);
	return res;
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%d",fun(n,1,3));
}
