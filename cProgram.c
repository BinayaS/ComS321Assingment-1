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
    if(i % 2 == 0) {
      a[i] = 0;
    } else {
      a[i] = rand() % 10 + 1;
    }
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
