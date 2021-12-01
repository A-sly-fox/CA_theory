#include<stdio.h>
#define LOOP 10000

int main(){
    int x;
    for(int i = 0; i < LOOP; i++)
        for(int j = 0; j < LOOP; j++)
            x = i + j;
    return 0;
}