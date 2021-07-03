#include <stdio.h>
#include <string.h>
 
union Data {
   int i;
   float f;
   char str[20];
};
 
void unionExecution(int iin, float fin, char strin[20]) {

   union Data data;        

   data.i = iin;
   printf( "\ndata.i : %d\n", data.i);
   
   data.f = fin;
   printf( "data.f : %f\n", data.f);
   
   strcpy( data.str, strin);
   printf( "data.str : %s\n", data.str);

}