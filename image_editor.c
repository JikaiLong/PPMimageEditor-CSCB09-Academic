#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * Include the function prototypes of all those functions implemented in image_processing.c.
 * Do not remove or modify them in any way.
 */

void remove_red();
void convert_to_black_and_white();
void instagram_square();

int main(int argc, char *argv[]) {
        /* Task 1 needs to be completed here: Make sure that the command line arguments are correct. In case an error exists,
         * print the error message and terminate the program. Otherwise, invoke the corresponding
         * image processing function. */
	/* If the number of command arguments is not equal to 1, exit the program with return 1 to indicate an error*/  
	if(argc != 2){
		fprintf(stderr, "%s", "Error: Expecting one command-line argument, which needs to be either 1, 2, or 3.\n");
		exit(1); 
	}
	/* If the number of command arguments is equal to 1, do the following*/ 
	else{
	/* use variable to store command argument*/
		char* arg = argv[1];
		/*if the command argument is not 1, 2 or 3, exit the program with return 1 to indicate an error*/
		if(strcmp(arg, "1") == 0 || strcmp(arg, "2") == 0 || strcmp(arg, "3") == 0){
			if(strcmp(arg, "1") == 0){
				remove_red();
			}
			else if(strcmp(arg, "2") == 0){
				convert_to_black_and_white();
			}
			else{printf("wrong\n");}
		}
		else{
			fprintf(stderr, "%s", "Error: Expecting one command-line argument, which needs to be either 1, 2, or 3.\n");
			exit(-2);
		}
        

}
return 0;
}
