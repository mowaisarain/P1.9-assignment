#ifndef __VERLET
#define __VERLET

#include "./mdstruct.h"

/* velocity verlet Part 1*/
void velverlet1(mdsys_t *sys);

/* velocity verlet Part 2*/
void velverlet2(mdsys_t *sys);

#endif /*  __VERLET   */
