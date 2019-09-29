#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int printArray();
bool swap();
int minIndex();
void selectionSort();
int binarySearchIterative();
int binarySearchRecursive();
void reverseFill();


int main() {
  printf("Hello World\n");

  int a[] = {4, 3, 2, 1, 6};

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

  int binVal = binarySearchIterative(a, 0, sizeA - 1, 5);
  printf("Finding value 5 at index %d using iterative search\n", binVal);

  int binVal2 = binarySearchRecursive(a, 0, sizeA - 1, 14);
  printf("Finding value 14 at index %d using recursive search\n", binVal2);

  reverseFill(a, sizeA);
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

int binarySearchRecursive(int array[], int leftMost, int rightMost, int value)
{
  while(leftMost <= rightMost)
  {
    int mid = (leftMost + rightMost) / 2;

    if(array[mid] == value)
    {
      return mid;
    }

    if(array[mid] > value)
    {
      return binarySearchRecursive(array, 1, mid - 1, value);
    }

    return binarySearchRecursive(array, mid + 1, rightMost, value);
  }

  return -1;
}

void reverseFill(int array[], int arrLength)
{
  //int index = 0;
  for(int i = 0; i < arrLength; i ++)
  {
    array[i] = arrLength - i;
  }
}
