#include <stdio.h>

int main(){
	int c;
	int n = 0;
	while((c = getchar()) != EOF)
		if( c = '\n')
			n++;
	printf("%d\n", n);
	scanf("%d", &c);	
	return 0;	
}