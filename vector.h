#include <math.h>

#ifndef VECTOR_H
#define VECTOR_H


typedef struct Vector{
    double *x;
    double *y; 
    double *z;
}Vec;

void add(Vec *v_1, Vec *v_2);

void dot(Vec *v_1, Vec *v_2);

void cross(Vec *v_1, Vec *v_2);

double len(Vec *v_1);

Vec* malloc_v();

#endif
