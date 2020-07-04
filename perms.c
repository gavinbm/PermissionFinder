#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char file[10];
	char com[30] = "ls -l ";

	printf("Enter a file name:\n");
	scanf("%s", file);
	strcat(com, file);
	strcat(com, " | cut -c 1-10");
	printf("File (T)ype\nFile (O)wner\n(G)roup owner\n(A)ll other users\n");
	system(com);
	
	return 0;
}
