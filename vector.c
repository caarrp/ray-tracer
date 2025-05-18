#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "vector.h"

Vec* malloc_v(double x, double y, double z){
	//allocates memory for one 3d vector
    Vec *v = (Vec*)malloc(sizeof(Vec));
    v->x = x;
    v->y = y;
    v->z = z;

	return v;
	}


double len(Vec *v_1){
	//returns magnitude of 3d vector
    double x_val = (v_1->x);
    double y_val = (v_1->y);
    double z_val = (v_1->z);
    
    double val = x_val*2 + y_val*2 + z_val*2;
    return sqrt(val);
}


void free_v(Vec *v){
    //frees alocated memory
	free(v);
}


void print_v(Vec *v){
    printf("<%.3f, %.3f, %.3f>", v->x, v->y, v->z);
}
