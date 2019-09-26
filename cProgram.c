#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int printArray();
bool swap();
int minIndex();

int main() {
  printf("Hello World\n");

  int a[10];

  int sizeA = sizeof(a)/sizeof(int);
  for (size_t i = 0; i < sizeA; i++) { //potato fries
    /* code */
    a[i] = sizeA - i;

  }

  printArray(a, sizeA);
  int ret = minIndex(a, sizeA);
  printf("%d\n", ret);

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

bool swap(int a, int b, int *arr)
{
  int temp;
  temp = arr[a];
  arr[a] = arr[b];
  arr[b] = temp;
  return true;
}

int minIndex(int *arr, int length)
{
  int currMin = arr[0];
  int retIndex;

  for(int i = 0; i < length; i ++)
  {
    int temp = arr[i];

    if(temp < currMin)
    {
      retIndex = i;
    }
  }

  return retIndex;
}
