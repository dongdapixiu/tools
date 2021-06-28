
#include "proc.h"
extern void proc()
{
 	char bar[NUM]; 
	memset(bar,'\0',sizeof(bar));
	const char *lable="|/-\\";
	int i = 0;
	while(i<NUM-1){
		fflush(stdout);
		bar[i++]='#';
		printf("[%-100s][%d%%][%c]\r",bar,i,lable[i%4]);
		usleep(50000);
	}
	printf("\n");
	
} 
