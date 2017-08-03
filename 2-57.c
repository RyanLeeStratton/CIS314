//code modified from book example -------------------
#include <stdio.h>

 typedef unsigned char *byte_pointer;

 void show_bytes(byte_pointer start, int len) {
 int i;
 for (i = 0; i < len; i++){
 printf(" %.2x", start[i]);
 }
 printf("\n");
 }

 void show_short(short int x) {
 show_bytes((byte_pointer) &x, sizeof(short int));
 }

 void show_long(long int x) {
 show_bytes((byte_pointer) &x, sizeof(long int));
 }

 void show_double(double x) {
 show_bytes((byte_pointer) &x, sizeof(double));
 }
// ---------------------------------------------------


 int main(){
double storage;
short int short_storage;
long int long_storage;
printf("please input a number for conversion");
printf("\n");
scanf("%lf", &storage);
short_storage = storage;
long_storage = storage;

printf("double representation:     ");
show_double(storage);
printf("long int representation:   ");
show_long(long_storage);
printf("short int representation:  ");
show_short(short_storage);
printf("\n");
}


