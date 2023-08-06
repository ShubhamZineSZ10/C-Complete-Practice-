// different modes in file handling

// r   -read
// w   -write
// a   -append
// r+  -read + write
// w+  -write + read
// a+  -append + read

#include<stdio.h>
void main(){
	FILE *fp=fopen("Nee.txt","r+");             //read + write operations
	fprintf(fp,"Hey");                  // It will override the earlier characters in file

	                                    // OLD - Hi! This is my first file
					    // Now-  Hey This is my first file
}
