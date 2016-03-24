#include <stdio.h>
void print(int *a)
{
    int i=0;
	for(;i<6;i++)
        printf("%-4d",a[i]);
	printf("\n");
}
void siftdown(int *a,int n,int i)
{
	int t;
	int j=i*2+1;
	t=a[i];
	while(j < n)
	{
		if(j+1<n && a[j] < a[j+1])
			j++;
		if(t >= a[j])
			break;
		a[i] = a[j];
		i=j;
		j = 2*i+1;
		print(a);
	}
	a[i] = t;
}

void siftup(int *a,int i)
{
	int t,j=(i-1)/2;
	t = a[i];
	while(j>=0 && 0!=i)
	{
		if(t <= a[j])
			break;
		a[i] = a[j];
		i=j;
		j=(i-1)/2;
	}
	a[i] = t;
}

void createheap(int *a,int length)
{
	int i;
	print(a);
	for(i=(length-2)/2;i>=0;i--)
	{
		siftdown(a,length,i);
		print(a);
	}
}

void head_sort(int *a,int length)
{
	int i,t;
	for(i=length-1;i>0;i--)
	{
		t = a[i];
		a[i] = a[0];
		a[0] = t;
		siftdown(a,i,0);
	}
}



int main()
{
	int a[] = {4,3,7,8,4,1};
	createheap(a,6);
	print(a);
	head_sort(a,6);
	print(a);
	return 0;
}
