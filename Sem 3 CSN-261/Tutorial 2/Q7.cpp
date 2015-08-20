#include <iostream>
using namespace std;

int largestDiff(int A[], int size)
{
	int max_diff = A[1]-A[0];
	int min_elem = A[0];

	for (int i = 1; i < size; ++i)
	{
		if((A[i]-min_elem) > max_diff){
			max_diff = A[i]-min_elem;
		}
		if(A[i]<min_elem){
			min_elem = A[i];
		}
	}
	return max_diff;
}


int main(int argc, char const *argv[])
{	
	//testing for the given case
	int arr[] = {10, 3, 6, 8, 9, 4, 3};
	int n = sizeof(arr)/sizeof(arr[0]);
	printf("Maximum difference is : %d\n", largestDiff(arr, n));
	return 0;
}