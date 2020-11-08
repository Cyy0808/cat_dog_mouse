//Day_1ÂÝÐý·½Õó 
#include <stdio.h>
int main() {
    int a[101][101];
	int n, i, j, digit, k, l, counter;//a[i][j], belong to the kth circle, the lth arrangement
	scanf("%d", &n);
	if(n == 1) {
		printf("1");
		return 0;
	}
	for(counter = 1; counter <= n * n; counter++) {
		digit = counter;
		for(k = 0; k <= (n / 2) - 1; k++) {
			if(digit <= 4 * (n - 2 * k- 1)) {
				int division;
				division = n - 2 * k - 1;
				l = (digit - 1) / division;
				switch(l) {
					case 0:
						a[k + 1][k + digit] = counter;
						break;
					case 1:
						digit = (digit - 1) % division;
						a[digit + k + 1][n - k] = counter;
						break;
					case 2:
						digit = (digit - 1) % division;
						a[n - k][n - digit - k] = counter; 
						break;
					case 3:
						digit = (digit - 1) % division;
						a[n- digit - k][k + 1] = counter;
						break;
					default:
						break;
				}
			}
			else if (n % 2 == 1 && counter == n * n) {
				a[(n + 1) / 2][(n + 1) / 2] = n * n;
			}
			else {
				digit -= (4 * (n - 2 * k - 1));
			}
	    }
    }
    for(i = 1; i <= n; i++) {
    	for(j = 1; j <= n; j++) {
    		printf("%d\t", a[i][j]);
		}
    	printf("\n");
	}
	return 0;
}
