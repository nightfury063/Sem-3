//Solution without Extra Space
//For solving with extra space we can use extra array 
//to store values from 0 to k and k to size-1 differently
#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void rotate(int A[], int size, int k)
{
	for (int i = 0; i < k/2; ++i)
	{
		swap(A[i],A[k-i-1]);
	}
	int z = 0;
	for (int i = k; i < k+((size-k)/2); i++)
	{
		swap(A[i], A[size-1-z]);
		z++;
	}
	
}

void printArrayBackwards(int A[], int size)
{
	for (int i = size-1; i >= 0; i--)
	{
		printf("%d \t", A[i] );
	}
}

int main(int argc, char const *argv[])
{
	//testing for the given case
	int arr[] = {1,2,3,4,5,6,7};
	int n = sizeof(arr)/sizeof(arr[0]);
	int k = 2;
	//this line will rotate the array
	rotate(arr, n, k);
	//this line will output the array
	printArrayBackwards(arr, n);

	cout<<endl;
	return 0;
}