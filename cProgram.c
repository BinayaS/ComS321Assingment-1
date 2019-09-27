#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int printArray();
bool swap();
int minIndex();
void selectionSort();
int binarySearchIterative();

int main() {
  printf("Hello World\n");

  int a[] = {3, 2, 14, 6, 2, 5};

  int sizeA = sizeof(a)/sizeof(int);
  // for (size_t i = 0; i < sizeA; i++) { //potato fries
  //   /* code */
  //   a[i] = sizeA - i;
  //
  // }


  printArray(a, sizeA);

  int ret = minIndex(a, sizeA, 0);
  printf("The min index is %d\n", ret);

  selectionSort(a, sizeA);
  printArray(a, sizeA);

  int binVal = binarySearchIterative(a, 0, sizeA - 1, 14);
  printf("%d\n", binVal);
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

bool swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
  return true;
}

int minIndex(int arr[], int length, int start)
{
  int minIndex = start;

  for(int i = start + 1; i < length; i ++)
  {
    if(arr[i] < arr[minIndex])
    {
      minIndex = i;
    }
  }

  return minIndex;

}

void selectionSort(int array[], int length)
{
  for(int i = 0; i < length - 1; i ++)
  {
    int min = minIndex(array, length, i);
    swap(&array[min], &array[i]);
  }
}

int binarySearchIterative(int array[], int leftMost, int rightMost, int value)
{
  while(leftMost <= rightMost)
  {
    int mid = (leftMost + rightMost) / 2;

    if(array[mid] == value)
    {
      return mid;
    }

    if(array[mid] < value)
    {
      leftMost = mid + 1;
    } else
    {
      rightMost = mid - 1;
    }
  }

  return -1;
}
