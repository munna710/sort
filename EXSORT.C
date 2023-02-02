#include<stdio.h>
#include<conio.h>
void sort(int*,int);
void main()
{
	int a[10],i,n;
	clrscr();
	printf("enter the size: ");
	scanf("%d",&n);
	printf("\nenter %d elements into the array:\n",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("\narray before sorting: ");
	for(i=0;i<n;i++)
	printf(" %d",a[i]);
	sort(a,n);
	printf("\n array after sorting: ");
	for(i=0;i<n;i++)
	printf(" %d",a[i]);
	getch();
}
void sort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		if(a[i]>a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
}