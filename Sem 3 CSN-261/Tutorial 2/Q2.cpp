#include <iostream>
using namespace std;
bool hasSumElements(int arr[], int size, int sum){
	int leftPointer = 0;
	int rightPointer = size-1;

	while(leftPointer < rightPointer)
	{
		if(arr[leftPointer] + arr[rightPointer] == sum){
			return true;
		}
		else if(arr[leftPointer] + arr[rightPointer] > sum){
			rightPointer--;
		}
		else if(arr[leftPointer] + arr[rightPointer] < sum){
			leftPointer++;
		}	
	}
	return false;
}
int main(int argc, char const *argv[])
{
	int x;
	cout<<"Enter a number to check the sum : "<<endl;
	cin>>x;
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int n = sizeof(arr)/sizeof(arr[0]); // n = size
	//assume array to be in increasing order
	if(hasSumElements(arr, n, x)){
		printf("Array has pair of elements with sum : %d \n", x);
	}else{
		printf("Sum not found \n");
	}
	return 0;
}