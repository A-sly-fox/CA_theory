#include<stdio.h>

struct node_t_1{
  char my_char;
  short my_short;
  int my_int;
  long my_long;
  float my_float;
  double my_double;
  long double my_long_double;
}node_t_1;

struct node_t_2{
  char my_char;
  long double my_long_double;
  short my_short;
  double my_double;
  float my_float;
  int my_int;
  long my_long;
}node_t_2;

struct node_t_3{
  char my_char;
  short my_short;
  long double my_long_double;
  float my_float;
  double my_double;
  int my_int;
  long my_long;
}node_t_3;

int main(){
    printf("size of node_t_1:%ldB\n",sizeof(node_t_1));
    printf("size of node_t_2:%ldB\n",sizeof(node_t_2));
    printf("size of node_t_3:%ldB\n",sizeof(node_t_3));
    return 0;
}