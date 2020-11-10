//Day_4·ÖÐÎ by Minus_Seven
#include <stdio.h>
#include <math.h>

int res[1000][1000] = {0}; 
int i = 1; 
int j = 1;

void picture(int n, int di, int dj) {
	if(n == 1) {
		i += di;
		j += dj;
		res[i][j] = 1;
		i = 1; j = 1;
	}
	else {
		picture(n - 1, di, dj);
		picture(n - 1, di, dj + (int)pow(3, n - 2) * 2);
		picture(n - 1, di + (int)pow(3, n - 2), dj + (int)pow(3, n - 2));
		picture(n - 1, di + (int)pow(3, n - 2) * 2, dj);
		picture(n - 1, di + (int)pow(3, n - 2) * 2, dj + (int)pow(3, n - 2) * 2);
	}
}

int main() {
	int n;
	scanf("%d", &n);
    picture(n, 0, 0);
    for(i = 1; i <= (int)pow(3, n - 1); i++) {
    	for(j = 1; j <= (int)pow(3, n - 1); j++) {
    		if(res[i][j] == 1) {
    			printf("X"); 
			}
			else {
				printf(" ");
			}	
		}
		printf("\n");
	}
	return 0;
} 
