#include <stdio.h>
#include <math.h>



int main(void) {
	
	int number,i,count=0;
	scanf("%d",&number);
    for(i=0;i<16;i++)
    {
    if((number&(int)pow(2,i))==(int)pow(2,i))
    {
    	count++;
    	
    }
    }
    if(count==1)
    {
    	printf("Power of 2");
    	
    }
    else
    {
    printf("Not a Power of 2");	
    }
    
    
	
	return 0;
}
