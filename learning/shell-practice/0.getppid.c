#include <stdio.h>
#include <unistd.h>
/**
 * main - prints the PID of the parent process
 * Return: (0) always success
 */
int main(void)
{
	pid_t ppid;

	ppid = getppid();
	printf("Parent process PID: %u\n", ppid);
}
