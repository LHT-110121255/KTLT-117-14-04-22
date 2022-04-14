
#include <stdio.h>
int Length_Int(int n) {
	if(n > 0) {
		n/=10;
		return 1 + Length_Int(n);
	}
}
int Luy_thua(int x, int n) {
	if(n == 0 ) return 1;
	return x * Luy_thua(x, n-1);
}
int sum_Element(int n, int m) {
	if( n == 0) return 0;
	return Luy_thua(n%10, m) + sum_Element(n/=10, m); 
}
void test_Amstrong(int value, int sum_element_value) {
	(value == sum_element_value) ? printf("%d ", value): printf("");
}
int main() {
	int n;
	printf("cac so amstrong thuoc [1, 1.000.000] la ");
	for(n = 1; n <=1000000; n++) {
		int m = Length_Int(n);
		int sum = sum_Element(n ,m);
		test_Amstrong(n, sum);	
	}
	return 0;
}


