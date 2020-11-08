//Day_3跑楼梯方法(解方程版)by Minus_Seven 
#include <stdio.h>
#define a 1
#define b 2
#define c 3
int arrangment(int x, int y, int z);
int multiplication(int x);

int main() {
	int n, x, y, z, numof_step, numof_solution, numof_way = 0;
	scanf("%d", &n);
	for(z = 0; z <= (n / c); z++) {
		for(y = 0; y <= (n / b); y++){
			x = n - b * y - c * z;
			if(x >= 0) {
				numof_step = x + y + z;
				numof_way += arrangment(x, y, z);
			}
		}
    }
	printf("%d", numof_way);
	return 0;
}
 
int arrangment(int x, int y, int z) {
    int arrange, numof_step;
    numof_step = x + y + z;
    arrange = multiplication(numof_step) / (multiplication(x) * multiplication(y) * multiplication(z));
    return arrange;
}
 
int multiplication(int x) {
	int multiplicate = 1;
	x++;
	while(--x) { 
	    multiplicate *= x; 
	} 
	return multiplicate;
}
//20.11.7 9：10~10：28 
