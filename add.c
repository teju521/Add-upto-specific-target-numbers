#include<stdio.h>
int main(void)
{
	int a[50],num,i,j,sum=0,target;
	printf("Enter number of elements into array");
	scanf("%d",&num);
	for(i=0;i<num;i++)
		scanf("%d",&a[i]);
	printf("Enter the target number");
	scanf("%d",&target);
	for(i=0;i<num;i++)
	{
		for(j=i+1;j<num;j++)
		{
			sum = a[i]+a[j];
			if(sum==target)
			{
			 printf("numbers are to be added are:%d,%d",a[i],a[j]);
			}
		}
	}
}