#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"

int main (int argc,char *argv[])
{

	int pid;
	int status=0, a, b;	
	pid = fork();
	if (pid == 0)
  	{	
  		exec(argv[1], argv+1);
    	printf(1, "exec %s failed\n", argv[1]);
    }
  	else
 	{
    	status = waitx(&a, &b);
 	}  
 	printf(1, "Wait Time = %d\n Run Time = %d with Status %d \n", a, b, status); 
 	exit();
}
