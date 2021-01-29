#include<stdio.h>
int main()
{
	int a[10]={1,2,3,4},b[10]={3,4,5,6};
	int i,j;
	int k=4;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(b[i]==a[j])
			{
			break;	
			}
		}
		if(j==4)
		{
			a[k]=b[i];
			k++;
		 } 
	}
	for(i=0;i<k;i++)
	printf("%d\n",a[i]);
	return 0; 
 } 
