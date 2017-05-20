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
    // declear largest number of column or rows
   int largest;
   // declear largest condition whether the largest is row
   int largest_is_row = 0;
   // declear a count variable to count how many columns has been modified
   int count = 0; 
   // declear variables: header, number of rows and columns and max colour 
   char headername[2];
   int column_num, row_num, max_colour;
   // declear red, green, blue value for each pixel  
   int read1, read2, read3;
   // read header information 
   scanf("%s%d%d%d", headername, &column_num, &row_num, &max_colour);
   //let the largest be the largest number of column or rows and set largest_condition
   if(column_num < row_num){
	largest = column_num;
	}
   else{
	largest = row_num;
	largest_is_row = 1;
	}
   fprintf(stdout, "%s \n%d %d \n%d \n", headername, largest, largest, max_colour);
   // if the largest number is row, stop scanning at largest*largest pixcel
   if(largest_is_row == 0){ 
   // loop through each pixel and write them into stdout 
   while(scanf("%d%d%d", &read1, &read2, &read3) != EOF && count < largest*largest){
	// count + 1 for each pixel scanned 
	count++;
   	fprintf(stdout, "%d %d %d ", read1, read2, read3);
	// if the max column is reached move to the next line
	if(count >= column_num && column_num%count == 0){
		fprintf(stdout,"%s", "\n");
	}
	}
	// add to the next line by the end of file
	fprintf(stdout, "%s", "\n");
	}
    // if the largest number is column 
   else{
	// set cut_point to not add columns that are not in the square
	int cut_point = 0;
	   // loop through each pixel and write them into stdout 
   while(scanf("%d%d%d", &read1, &read2, &read3) != EOF ){
	// count + 1 for each pixel scanned 
	count++;
	// cut_point + 1 for each pixelin the same line scanned
	cut_point++;
	// only write to stdout if the column is in the square
	if(cut_point <= largest){
   	fprintf(stdout, "%d %d %d ", read1, read2, read3);
	}
	// if the max column is reached move to the next line and set cut point into 0
	if(count >= column_num && count%column_num == 0){
		fprintf(stdout,"%s", "\n");
		cut_point = 0;
	}
	}
	// add to the next line by the end of file
	fprintf(stdout, "%s", "\n");
}
}
