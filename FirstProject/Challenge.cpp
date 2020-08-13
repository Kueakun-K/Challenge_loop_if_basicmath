#include<stdio.h>
#include<math.h>
int main() {
	int x, y,i,l;
	float a=0,s=0,o;
	scanf_s("%d %d", &x, &y);
	if (x < y) {
		for (i = x; i <= y; i++) {
			printf("%d ", i);
			a += i;
		}
		o = a / ((y - x) + 1);
		printf("\nAverage = %.1f", o);
		for (l = x; l <= y; l++) {
			s += (l - o) * (l - o);
		}
		printf("\nSD = %.2f", sqrt(s / (y - x)));
	}
	else if (x >= y) {
		for (i = x; i >= y; i--) {
			printf("%d ", i);
			a += i;
		}
		o = a / ((x - y) + 1);
		printf("\nAverage = %.1f", o);
		for (l = x; l >= y; l--) {
			s += (l - o) * (l - o);
		}
		printf("\nSD = %.2f", sqrt(s / (x - y)));
	}
	return 0;
}