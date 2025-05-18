#include <math.h>

#ifndef VECTOR_H
#define VECTOR_H


typedef struct Vector{
    double x;
    double y; 
    double z;

    double r;
    double g;
    double b;

    double t;
}Vec;

Vec* malloc_v(double x, double y, double z);

Vec* add(Vec *v_1, Vec *v_2);
Vec* sub(Vec *v_1, Vec *v_2);
Vec* mult(Vec *v_1, Vec *v_2);
Vec* div(Vec *v_1, Vec *v_2a);

Vec* make_unit(Vec *v);

void dot(Vec *v_1, Vec *v_2);

void cross(Vec *v_1, Vec *v_2);

double len(Vec *v);

void print_v(Vec *v);


#endif
