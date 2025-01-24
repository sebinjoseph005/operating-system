#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>
void main()
{
pid_t cpid=fork();
if(cpid==0)
	{
		printf("...............");
		printf("I AM TGHE CHILD AND CHILD CREATED SUCCESSFULLY\n");
		printf("child id=%d\n",getpid());
		printf("parent id=%d\n",getpid());
	}
		if(cpid>0)
		{
			printf("...............");
			printf("I AM THE PARENT AND CHILD CREATED SUCCESFULLLY");	
			printf("child id=%d\n",cpid);
		        printf("parent id=%d\n",getpid());
		        wait(NULL);
		 }
			 if(cpid<0)
			{
				printf("child cvreation is unsuccessful\n");
			}
			exit(0);
			}	
		 
