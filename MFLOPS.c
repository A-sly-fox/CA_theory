#include<stdio.h>
#define LOOP 100000

int main(){
    float x, y, z;
    for(y = 0.0; y < LOOP; y++)
        for(z = 0.0; z < LOOP; z++)
            x = y + z;
    return 0;
}