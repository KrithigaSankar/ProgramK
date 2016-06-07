#include <stdio.h>
#define RANGE 10

int main(void) {

	int number,i;
	scanf("%d",&number);
	for(i=1;i<=RANGE;i++)
	 {
	 printf("%d X %d = %d\n",i,number,i*number);
	 }
	
	return 0;
}
