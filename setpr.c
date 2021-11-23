#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"

int main(int argc,char *argv[]){
	
	int a=atoi(argv[1]);
	int b=atoi(argv[2]);
	if(argc!=3){
		printf(1,"Invalid No. of arguments\n");
	}
	else{
		int x=set_priority(a,b);
		if(x==-1){
			printf(1,"Entered pid is not correct\n");
		}
		else
		printf(1,"Priority of Process with pid %d was this %d previously\n",a,x);
	}
	exit();
}