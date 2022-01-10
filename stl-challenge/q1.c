#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include<sys/wait.h>
#include <stdlib.h>

int Process_count;

void func1(int s_no)
{
pid_t pid;

int status;
pid=wait(&status);

printf("parent: child process pid=%d exited with value %d\n",pid, WEXITSTATUS(status));
 
Process_count--;
signal(SIGCHLD, func1);

}

int main()
{
pid_t pid;

signal(SIGCHLD,func1);

for(int i=0;i<4;i++)
{

if((pid=fork())==0)
{

printf("Child PID=%d :: Sleeping for %d seconds\n",getpid(),i); sleep(i);
printf("Child Process Completed!!!\n");

exit(i);
}

else
Process_count++;
}

printf("Parent process going to sleep!!!\n");

while(Process_count!=0)
{

printf("Parent is sleeping\n");
sleep(60);
}

printf("Parent exited\n");
exit(0);

}
