
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../src/constants.h"
#include "../src/input.h"

int main(int argc, char* argv[])
{
// Unit Testing for input parameters

	//define input test strings for function get_a_line()

	char cmp1[BLEN];
	char cmp2[BLEN];
	char cmp3[BLEN];
	int exp1 = 123;
	double exp2 = 34.872312;
	char exp3[] = "abc.jhk";
	int r1,r2,r3;

	FILE* fpinp;
	fpinp = fopen("unit_test_inp.dat", "r");
	
	if(!(fpinp)){
		printf("Unable to open sample data file. cannot perform test...\n");
		return -1;
	}

	printf("Checking integer parsing...\n");
	r1 = get_a_line(fpinp,cmp1);
		if(r1){printf("Cannot continue.. \nTest aborted.\n"); return -1;}
		if(atoi(cmp1)==exp1) { printf("SUCCESS\n"); }

	printf("Checking floating point parsing...\n");
	r2 = get_a_line(fpinp,cmp2);
		if(r2){printf("Cannot continue.. \nTest aborted.\n"); return -1;}
		if(atof(cmp2)==exp2) { printf("SUCCESS\n"); }
	
	printf("Checking string parsing...\n");
	r3 = get_a_line(fpinp,cmp3);	
		if(r3){printf("Cannot continue.. \nTest aborted.\n"); return -1;}
		if(!strcmp(cmp3,exp3)) { printf("SUCCESS\n"); }
	
	printf("All Input tests passed!\n");

	fclose(fpinp);

	return 0;
}
