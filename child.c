#include <stdio.h>

main(){
	printf("Before Fork :: \n");
	int pid = fork();
	
	printf("PID is %d\n",pid);
	if(pid == 0){
		printf("The process is child :: %d\n",getpid());
		printf("Parent has ID :: %d\n",getppid());
		sleep(10);
	}
	else{
	sleep(10);
		printf("The process is parent :: %d\n",getpid());
		printf("Parent of parent is %d\n",getppid());
		sleep(5);
	}
	
}
