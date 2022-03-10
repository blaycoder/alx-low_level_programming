#include<stdio.h>
#include<string.h>

int main(){
  
  int intType;
  char charType;
  float floatType;
  long int long_int_Type;
  long long int long_long_int_Type;
  
  printf("Size of a char: %zu byte(s)\n" sizeof(charType));
  printf("Size of an int: %zu byte(s)\n" sizeof(intType));
  printf("Size of a long int: %zu byte(s)\n" sizeof(long_int_Type));
  printf("Size of a long long int: %zu byte(s)\n" sizeof(long_long_int_Type));
  printf("Size of a float: %zu byte(s)\n" sizeof(floatType));

  return 0;
}
