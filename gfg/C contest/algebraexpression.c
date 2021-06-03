#include <stdio.h>

int main() {
	int a, sum, b, diff;
	
	scanf("%d %d",&sum,&diff);
	
	a = (sum + diff)/2;
	b = (sum - diff)/2;
	printf("%d",a*b);
	return 0;
}
