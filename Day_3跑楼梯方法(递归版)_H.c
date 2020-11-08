//Day_3ÅÜÂ¥Ìİ·½·¨(µİ¹é°æ)by Minus_Seven 
#include <stdio.h>
int step(int n) {
	if(n == 1) {
		return 1;
	}
	else if(n == 2) {
		return 2;
	}
	else if(n == 3) {
		return 4;
	}
	int res = 0;
	res += step(n-1);
	res += step(n-2);
	res += step(n-3);
	return res;
}
int main() {
	int n;
	scanf("%d",&n);
	printf("%d", step(n));
} 
//20.11.7 10:29~10:50
