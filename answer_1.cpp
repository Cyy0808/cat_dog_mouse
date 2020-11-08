#include<stdio.h>
#define LEN 105
int main(){
	int n,r=1,c=1,cnt=1,i;
	int dr[]={0,1,0,-1},dc[]={1,0,-1,0},dcnt=0;
	int matrix[LEN][LEN]={0};
	scanf("%d",&n);
	for(int i=0;i<=n+1;i++){
		matrix[0][i]=1;
		matrix[n+1][i]=1;
		matrix[i][0]=1;
		matrix[i][n+1]=1;
	}
	while(cnt<=n*n){
		matrix[r][c]=cnt;
		cnt++;
		int nr=r+dr[dcnt];
		int nc=c+dc[dcnt];
		if(matrix[nr][nc]!=0){
			dcnt=(dcnt+1)%4;
		}
		r+=dr[dcnt];
		c+=dc[dcnt];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			printf("%3d ",matrix[i][j]);
		}
		printf("\n");
	}
}
