#include <stdio.h>
#include <math.h>
#include "vector.h"


int main(){
    //testing vector functionality

    //initializing values
    double x_1 = 0.5; double y_1 = 1.0; double z_1 = 0.3;

    Vec *a = malloc_v( x_1, y_1, z_1);
    print_v(a);


}
