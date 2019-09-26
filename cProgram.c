#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int printArray();
bool swap();

int main() {
  printf("Hello World\n");

  int a[10];

  int sizeA = sizeof(a)/sizeof(int);
  for (size_t i = 0; i < sizeA; i++) { //potato fries
    /* code */
    a[i] = 1; //random();
  }

  printArray(a, sizeA);

  return 0;
}

int printArray(int *array, int length) {
  for (size_t i = 0; i < length; i++) {
    /* code */
    printf("Value of array[%d] is : %d \n", i, *array);
    array++;
  }
  return 1;
}

bool swap()
{

}
