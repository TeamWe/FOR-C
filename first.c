#include <stdio.h>
#include <stdlib.h>

void demo(int **a)
{
	printf("%d",a[1][1]);
}


int main()
{
	pid_t pid;
	int count = 0;
	int i;
	int a[2][2] = {1,2,3,4};
	int *b[2];
	b[0] = a[0];
	b[1] = a[1];
	for(i=0;i<2;i++)
	{
		pid_t pid;
		pid = fork();
		if(pid == 0)
			printf("%d child %6d %6d %6d",i,getppid(),getpid(),pid);
		else
			printf("%d child %6d %6d %6d",i,getppid(),getpid(),pid);
	}
	return 0;
}
