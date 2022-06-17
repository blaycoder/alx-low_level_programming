#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>

int main(void)
{
pid_t parentPID;
parentPID = getppid();
printf("%d\n", parentPID);
return (0);
}
