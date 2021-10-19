# include <stdio.h>
int a[] = {90, 2, 3, -58, 34};
int main(void){
    int n = 5,i,j,buf;
    for (i=0; i<n-1; ++i){
        for (j=0; j<n-1-i; ++j){
            if (a[j] < a[j+1]){
                buf = a[j];
                a[j] = a[j+1];
                a[j+1] = buf;
            }
        }
    }
    return 0;
}