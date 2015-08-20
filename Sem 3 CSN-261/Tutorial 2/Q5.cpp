#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void printArray(int arr[], int size)
{	
	printf("{");
	for (int i = 0; i < size; ++i)
	{	
		cout<<arr[i];
		if(i!=size-1){
			cout<<",";
		}
	}
	printf("}");
	cout<<endl;
}

void permutations(int arr[], int i, int size)
{
	if(size == i)
	{
		printArray(arr, size);
		return;
	}
	int j = i;
	for (int j = i; j < size; ++j)
	{
		swap(arr+i, arr+j);
		permutations(arr, i+1, size);
		swap(arr+i, arr+j);
	}
	return;

}

int main(int argc, char const *argv[])
{	
	//testing for the given case
	int arr[] = {1,2,3};
	int n = sizeof(arr)/sizeof(arr[0]);
	permutations(arr, 0, n);
	return 0;
}
