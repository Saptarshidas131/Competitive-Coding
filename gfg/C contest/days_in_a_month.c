#include <stdio.h>

int main() {
	
	int m;
	
	scanf("%d",&m);
	
	if (m > 12)
	    printf("-1");
	else if (m == 2)
	    printf("28");
	else if (m == 4 || m == 6 || m == 9 || m == 11)
	    printf("30");
	else
	    printf("31");
	    
	return 0;
}
