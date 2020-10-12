#include <stdio.h>
#include "complex.h"
#include <math.h>
int main() {
int n;
scanf("%d",&n);
complex arr[1000];
float value[n];
unsigned int i;
for( i = 0; i < n; ++i ){
scanf("%f %f", &arr[i].real,&arr[i].img);
}
unsigned int j;
for( i = 0; i < n; ++j ){
value[j] = absolute(arr[j]);  
printf("%.1f ", value[j]); 
}
bubbleSort(value, n);
printArray(value,n);

complex a;
complex b;
int c;
scanf("%f%f", &a.real, &a.img);
scanf("%f%f", &b.real, &b.img);
scanf("%d", &c);
add(a,b);
sub(a,b);
cmul(a,c);

}
