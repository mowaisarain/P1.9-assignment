#ifndef __UTIL
#define __UTIL

#include "./mdstruct.h"

void azzero(double *d, const int n);
double pbc(double x, const double boxby2);

/* compute kinetic energy */
void ekin(mdsys_t *sys);

#endif /* __UTIL  */
