//Day_2½ø½×ººÅµËþ 
#include <stdio.h>
#include <math.h>
void change_digit(int x, int y, int begin, int end, int a[131072][3]);
void assign_value(int a[131072][3], int k);
int numof_step(int n);

int main() {
	int n, i, j;
	scanf("%d", &n);

	int a[131072][3] = {0};
	a[1][1] = 1;
	a[1][2] = 3;

	if(n == 1) {
		printf("%d %d", a[1][1], a[1][2]);
		return 0;
	}
	for(i = 2; i <= n; i++) {
		change_digit(2, 3, 1, numof_step(i - 1), a);
	    assign_value(a, i);
	}
	for(i = 1; i <= 1048575; i++) {
		for(j = 1; j <= 2; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
		if(a[i + 1][1] == 0) {
				break;
		}
	}
	return 0;
} 

void change_digit(int x, int y, int begin, int end, int a[131072][3]) {
	int t, s;
	for(t = begin; t <= end; t++) {
		for(s = 1; s <= 2; s++) {
			if(a[t][s] == x) {
				a[t][s] = y;
			}
			else if(a[t][s] == y) {
				a[t][s] = x;
			}
		}
	}
}

void assign_value(int a[131072][3], int k) {
	int begin, end, t, s;
	begin = numof_step(k - 1) + 1;
	end = numof_step(k);
	a[begin][1] = 1;
	a[begin][2] = 3;
	for(t = 1; t <= end - begin; t++) {
		for(s = 1; s <= 2; s++) {
		    a[begin + t][s] = a[t][s];
		}
	}
	change_digit(2, 3, begin + 1, end, a);
	change_digit(1, 2, begin + 1, end, a);
}

int numof_step(int n) {
	int step;
	step = pow(2, n) - 1;
	return step;
}

