#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* generic file- or pathname buffer length */
#define BLEN 200


/* helper function: read a line and then return
   the first string with whitespace stripped off */
int get_a_line(FILE *fp, char *buf);
