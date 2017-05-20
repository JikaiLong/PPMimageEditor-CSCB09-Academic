#include <stdio.h>
#include <string.h>
/*
 * Read an image from the standard input and set the red value of each pixel to
 * zero.
 */
void remove_red()
{	 
   // declear a count variable to count how many columns has been modified
   int count = 0; 
   // declear variables: header, number of rows and columns and max colour 
   char headername[2];
   int column_num, row_num, max_colour;
   // declear red, green, blue value for each pixel  
   int read1, read2, read3;
   // read and write the same header to the output file
   scanf("%s%d%d%d", headername, &column_num, &row_num, &max_colour);
   fprintf(stdout, "%s \n%d %d \n%d \n", headername, column_num, row_num, max_colour);
   // loop through each pixel and change the first 1 read number which is red into 0 
   while(scanf("%d%d%d", &read1, &read2, &read3) != EOF){
	// count + 1 for each pixel scanned 
	count++;
	read1 = 0;
   	fprintf(stdout, "%d %d %d ", read1, read2, read3);
	// if the max column is reached move to the next line
	if(count >= column_num && column_num%count == 0){
		fprintf(stdout,"%s", "\n");
	}
	}
	// add to the next line by the end of file
	fprintf(stdout, "%s", "\n");
}

/*
 * Read an image from the standard input and convert it from colour to black and white.
 */
void convert_to_black_and_white()
{	
   // declear average to be the average number of 3 colours
   int average; 
   // declear a count variable to count how many columns has been modified
   int count = 0; 
   // declear variables: header, number of rows and columns and max colour 
   char headername[2];
   int column_num, row_num, max_colour;
   // declear red, green, blue value for each pixel  
   int read1, read2, read3;
   // read and write the same header to the output file
   scanf("%s%d%d%d", headername, &column_num, &row_num, &max_colour);
   fprintf(stdout, "%s \n%d %d \n%d \n", headername, column_num, row_num, max_colour);
   // loop through each pixel and change each colour number into the average  
   while(scanf("%d%d%d", &read1, &read2, &read3) != EOF){
	// count + 1 for each pixel scanned 
	count++;
	average = (read1 + read2 + read3)/3;
   	fprintf(stdout, "%d %d %d ", average, average, average);
	// if the max column is reached move to the next line
	if(count >= column_num && column_num%count == 0){
		fprintf(stdout,"%s", "\n");
	}
	}
	// add to the next line by the end of file
	fprintf(stdout, "%s", "\n");
}

/*
 * Read an image from the standard input and convert it to a square image.
 */
void instagram_square()
{
 
}

