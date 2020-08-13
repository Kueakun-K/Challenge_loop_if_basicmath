#include<stdio.h>
int main() {
	int x, y,i;
	scanf_s("%d %d", &x, &y);
	for (i = x; i <= y; i++) {
		printf("%d ", i);
	}
	return 0;
}