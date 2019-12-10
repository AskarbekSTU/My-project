#include <stdio.h>

int main (){
	int j,i;
	printf("      ");
	for (j=1; j<=9; j++ )
	printf("%d  ", j);
	printf("\n");
	
	for (j=1; j<=9; j++){
	printf("%d  ", j);
	for (i=1; i<=j; i++)
	printf("%2d  ",  i*j);
	printf("\n");
	}
	return 0;
}



