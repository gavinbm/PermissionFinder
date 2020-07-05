#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int option;
	char file[10];
	char com[30] = "ls -l ";
	

	printf("Enter a file name:\n");
	scanf("%s", file);
	strcat(com, file);

	printf("= = = Which set of permissions would you like to see? = = =\n");
	printf("1) File Type\n2) File Owner\n3) Group owner\n4) Other users\n5) All the above\n");
	scanf("%d", &option);

	switch(option) {
		case 1:
			strcat(com, " | cut -c 1");
			break;
		case 2:
			strcat(com, " | cut -c 2-4");
			break;
		case 3:
			strcat(com, " | cut -c 5-7");
			break;
		case 4:
			strcat(com, " | cut -c 8-10");
			break;
		case 5:
			strcat(com, " | cut -c 1-10");
			break;
		default:
			strcat(com, " | cut -c 1-10");
			break;
	}

	system(com);
	return 0;
}
