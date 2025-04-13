#ifndef VECTOR_H
#define VECTOR_H

void add(Vec *v_1, Vec *v_2);

void dot(Vec *v_1, Vec *v_2);

void cross(Vec *v_1, Vec *v_2);



typedef struct{
    double x;
    double y; 
    double z;
}Vec;



#endif
