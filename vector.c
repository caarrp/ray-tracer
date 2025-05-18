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

Vec* add(Vec *v_1, Vec *v_2){
	//adds vector 1 to vector 2
    double add_x = v_1->x + v_2->x;
    double add_y = v_1->y + v_2->y;
    double add_z = v_1->z + v_2->z;
    Vec *v = malloc_v(add_x, add_y, add_z);

    return v;
}


Vec* sub(Vec *v_1, Vec *v_2){
	//subtracts vector 1 from vector 2
    double sub_x = v_1->x - v_2->x;
    double sub_y = v_1->y - v_2->y;
    double sub_z = v_1->z - v_2->z;
    Vec *v = malloc_v(sub_x, sub_y, sub_z);

    return v;
}


Vec* mult(Vec *v_1, Vec *v_2){
	//multiplies vector 1 to vector 2
    double mult_x = v_1->x * v_2->x;
    double mult_y = v_1->y * v_2->y;
    double mult_z = v_1->z * v_2->z;
    Vec *v = malloc_v(mult_x, mult_y, mult_z);
    
    return v;
}
Vec* div(Vec *v_1, Vec *v_2){
	// divides vector 1 from vector 2
    double div_x = v_1->x / v_2->x;
    double div_y = v_1->y / v_2->y;
    double div_z = v_1->z / v_2->z;
    Vec *v = malloc_v(div_x, div_y, div_z);
    
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


Vec *make_unit(Vec *v){
	//returns unit vector of current vector
    double magn = len(v);
    double unit_x = v->x / magn;
    double unit_y = v->y / magn;
    double unit_z = v->z / magn;
    Vec *v = malloc_v(unit_x, unit_y, unit_z);

    return v;
}


void free_v(Vec *v){
       //frees alocated memory
    free(v);
}


void print_v(Vec *v){
	//prints x,y,z coordinates of vector
    printf("<%.3f, %.3f, %.3f>", v->x, v->y, v->z);
}
