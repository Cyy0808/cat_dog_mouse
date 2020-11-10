#include<stdio.h>
#include<math.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;
#define LEN 105

void copyto(char arr[][LEN],int tx,int ty,int len){
	for(int i=0;i<len;i++){
		for(int j=0;j<len;j++){
			arr[tx+i][ty+j]=arr[i][j];
		}
	}
}
void print(char arr[][LEN],int len){
	for(int i=0;i<len;i++){
		for(int j=0;j<len;j++){
			printf("%c",arr[i][j]);
		}
		printf("\n");
	}
}
int main(){
	char arr[LEN][LEN];
	int n;
	scanf("%d",&n);
	for(int i=0;i<pow(3,n-1);i++){
		for(int j=0;j<pow(3,n-1);j++){
			arr[i][j]=' ';
		}
	}
	arr[0][0]='X';
	for(int i=2;i<=n;i++){
		int len=pow(3,i-2);
		copyto(arr,len,len,len);//中心 
		copyto(arr,len*2,0,len);//右上 
		copyto(arr,len*2,len*2,len);//右下 
		copyto(arr,0,len*2,len);//左下 
	}
	print(arr,pow(3,n-1));
}
