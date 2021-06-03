#include <stdio.h>

int main() {
	
	int b[7];
	int n, i = 0;
	
	scanf("%d",&n);
	
	while (n>0)
	{
	    b[i] = n%2;
	    n = n/2;
	    i++;
	}
	
	if (b[0] == 1)
	    printf("Yes");
	else
	    printf("No");
	
	return 0;
}
