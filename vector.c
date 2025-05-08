#include <stdio.h>
#include <stdlib.h>
#include "vector.h"
#include <math.h>

Vec* malloc_v(double x, double y, double z){
    Vec *v = (Vec*)malloc(sizeof(Vec*));
    v->x = (double*)malloc(sizeof(double));
    v->y = (double*)malloc(sizeof(double));
    v->z = (double*)malloc(sizeof(double));

	return v;
	}


double len(Vec *v_1){
	//returns magnitude of 3d vector
    double x_val = *(v_1->x);
    double y_val = *(v_1->y);
    double z_val = *(v_1->z);
    
    double val = x_val*2 + y_val*2 + z_val*2;
    return sqrt(val);
}
void free_v(Vec *v){
	free(v);
}
