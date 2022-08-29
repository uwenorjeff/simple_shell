#include <stdio.h>
#include <unistd.h>

int main()

{
int p_pid;
int pid;

pid = getpid(); /*process id*/
p_pid = getppid(); /*parent process id*/

printf("Process ID: %d\n" , pid);
printf("Parent Process ID: %d\n", p_pid);

return 0;
}
