#include<stdio.h>
#include<math.h>
#define LEN 105
void fun(char arr[][LEN],int x,int y,int n){
	if(n==1){
		arr[x][y]='x';
	}else{
		int len=pow(3,n-2);  
		fun(arr,x-len,y-len,n-1);
		fun(arr,x-len,y+len,n-1);
		fun(arr,x+len,y-len,n-1);
		fun(arr,x+len,y+len,n-1);
		fun(arr,x,y,n-1);
	}
}
int main(){
	int n;
	scanf("%d",&n);
	char arr[LEN][LEN]={' '};
	int len=pow(3,n-1);
	for(int i=0;i<len;i++){
		for(int j=0;j<len;j++){
			arr[i][j]=' ';
		}
	}
	fun(arr,len/2,len/2,n);
	for(int i=0;i<len;i++){
		for(int j=0;j<len;j++){
			printf("%c",arr[i][j]);
		}
		printf("\n");
	}
}
