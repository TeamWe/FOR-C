#include <stdio.h>
#include <stdlib.h>


typedef struct demo
{
	short i;
	char a[];
}demo1;

void demo(int a[2][2])
{
	printf("%d",a[1][1]);
}


int main()
{
	pid_t pid;
	int count = 0;
	int i;
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
