//#define _FILE_OFFSET_BITS  64

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(){
	int i=0,j=0,putSize=0;

	FILE *fp = fopen("test.txt", "w");

	for(i=0;i<(195225786+90000000);i++){
		if((putSize=fputs("0123456789\n", fp) == EOF)){
			printf("fputs fail : loop=%d",i);
			if(j++ > 10){
				sleep(10);
				break;
			}
		}
	}
	fclose(fp);
	
	printf("exit");
	return 0;
}
