#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[5], i, j, c;
	for (i = 0; i < 5; i++)
		scanf_s("%d",&a[i]);
	for (i = 0; i < 5; i++)
		for(j=0;j<5-i-1;j++)
			if(a[j]>a[j+1])
			{
				c = a[j]; a[j] = a[j + 1]; a[j + 1] = c;

			}
		
		
		
		
		
		for(i=0;i<5;i++)
		printf("a[%d]=%d\n", i, a[i]);







	return 0;
}