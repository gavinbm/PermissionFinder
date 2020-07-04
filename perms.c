#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char file[10];
	char com1[40] = "ls -l ~/";
	char com2[40] = " | cut -c 1-10";

	printf("Enter a file name:\n");
	scanf("%s", file);

	strcat(com1, file);
	strcat(com1, com2);

	printf("\nFirst char is file type (- indicates regular file, d indicates directory\nNext 3 chars indicate perms for file owner\nNext 3 chars indicate perms for group owner\nFinal 3 chars indicate perms for all other users\n)");
	system(com1);
	return 0;
}
