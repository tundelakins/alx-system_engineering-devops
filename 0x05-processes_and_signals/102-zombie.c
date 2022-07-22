/**
 * main - Zombie Processes
 *
 *
 * Return: Always 0.
 */

#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(void)
{
	pid_t child_pid;
	/*fork() creates child process identical to parent*/
	child_pid = fork();

	/* if pid is greater than 0 than it is parent process*/
	/* if pid is 0 then it is child process*/
	/* if pid is -ve , it means fork() failed to create child process*/

	/* Parent process*/
	if (child_pid > 0)
	{
		sleep(20);
	}
	/* Child process*/
	else
	{
		exit(0);
	}

	return (0);
}

