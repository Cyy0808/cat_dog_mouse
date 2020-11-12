#include<stdio.h>
#include<math.h>
#define LEN 105

int main(){
	int matrix[LEN][LEN]={0},r,c;
	int res[LEN][LEN]={0};
	scanf("%d %d",&r,&c);
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			scanf("%d",&matrix[i][j]);
		}
	}
	int mark=1;
	for(int i=0;i<r;i++){
		if(matrix[i][0]==0)mark=0;
		res[i][0]=mark;
	}
	mark=1;
	for(int i=0;i<c;i++){
		if(matrix[0][i]==0)mark=0;
		res[0][i]=mark;
	}
	for(int i=1;i<r;i++){
		for(int j=1;j<c;j++){
			if(matrix[i][j]==0)res[i][j]=0;
			else res[i][j]=res[i-1][j]+res[i][j-1];
		}
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			printf("%d ",res[i][j]);
		}
		printf("\n");
	}
	printf("%d\n",res[r-1][c-1]);
	
}
