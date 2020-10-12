#include <math.h>
#include "compex.h"
#include <stdio.h>
void bubbleSort(float array[], int size) {

int step;
int i;
  for (step = 0; step < size - 1; ++step) {
    for (i = 0; i < size - step - 1; ++i) {

      if (array[i] > array[i + 1]) {        
        float temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}


void printArray(float array[], int size) {
int i;
  for ( i = 0; i < size; ++i) {
    printf("%.1f  ", array[i]);
  }
  printf("\n");
}




complex add(complex a, complex b){
  complex c;
 c.real = a.real + b.real;
 c.img = a.img + b.img;
printf("%.1f + %.1fi", c.real, c.img);
return (c);
}


complex sub(complex a, complex b){
  complex c;
 c.real = a.real- b.real;
 c.img = a.img-b.img;
  printf("%.1f + %.1fi", c.real, c.img);
return (c);
}

complex cmul(complex a, int b){
  complex c;
 c.real = a.real*b;
 c.img = a.img*b;
  printf("%.1f + %.1fi", c.real, c.img);

return (c);
}


float absolute(complex a){
  float c;
  c = sqrt(a.real*a.real+a.img*a.img);
return (c);
}
