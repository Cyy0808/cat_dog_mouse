//Day_2³õ¼¶ººÅµËþ
#include <stdio.h>

int sum(int n, int a[21]);

int main() {
	int n, counter;
	int a[21] = {0};
	a[1] = 1;
	scanf("%d", &n);
	for(counter = 2; counter <= n; counter++) {
		a[counter] = counter + sum(counter, a);
	}
	printf("%d", a[n]);
	return 0;
} 
int sum(int n, int a[21]) {
	int i, isum = 0;
	for(i = 1; i < n; i++) {
		isum += a[i];
	}
	return isum;
}
