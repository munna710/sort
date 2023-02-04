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
	int i,j,x;
	for(i=1;i<n-1;i++)
	{
		x=a[i];
		for(j=i-1;x<a[j]&&j>=0;j--)
		{
			a[j+1]=a[j];
		}

		a[j+1]=x;
	}
}