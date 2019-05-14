#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
   float val;
   char str[100];

   printf("Enter the string that needs to be converted\n");
   scanf("%s",str);
   val = atof(str);
   printf("String value = %s, Float value = %f\n", str, val);

   return(0);
}