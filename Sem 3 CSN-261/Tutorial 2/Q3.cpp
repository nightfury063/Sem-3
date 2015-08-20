#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void sort(int arr[], int arr_size)
{
   int lo = 0;
   int hi = arr_size - 1;
   int mid = 0;
   while(mid <= hi)
   {
      switch(arr[mid])
      {
         case 0:
           swap(&arr[lo++], &arr[mid++]);
           break;
         case 1:
           mid++;
           break;
         case 2:
           swap(&arr[mid], &arr[hi--]);
           break;
      }
   }
}
void printArray(int arr[], int arr_size)
{
  for (int i = 0; i < arr_size; i++)
    printf("%d ", arr[i]);
  printf("\n");
}


int main()
{
  int arr[] = {0,1,0,2,1,2,0,1,0,0,0,1,2,0};
  int arr_size = sizeof(arr)/sizeof(arr[0]);
  int i;

  sort(arr, arr_size);

  printf("array after sorting: ");
  printArray(arr, arr_size);

  return 0;
}
