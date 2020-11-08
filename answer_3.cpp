#include<stdio.h>
int res[10005];
long long fun(int n){
	if(res[n]!=0)return res[n];
	if(n==1){
		return 1;
	}else if(n==2){
		return 2;
	}else if(n==3){
		return 4;
	}else{
		return res[n]=(fun(n-1)+fun(n-2)+fun(n-3))%1191;
	}
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%lld",fun(n));

}
