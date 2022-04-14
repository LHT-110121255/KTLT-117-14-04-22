// Hàm tính S = X + X^1 + X^2 + ... + x^n
#include <stdio.h>

int luy_thua(int x, int n) {
	if(n == 0) return 1;
	return x * luy_thua(x, n-1);
}
int sum(int x, int n) {
	if(n == 0) return 0;
	return luy_thua(x, n) + sum(x, n-1);
}
int main() {
	int n, x;
	printf("nhap vao co so = , so mu = "); scanf("%d %d", &x, &n);
	printf("sum = %d ", sum(x, n));
	return 0;
}


