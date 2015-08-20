#include <iostream>
using namespace std;

int largestSubArray(int arr[], int n){
	int sum = 0;
	int maxLength = -1;
	int startIndex;

	for (int i = 0; i < n-1; ++i)
	{
		if(arr[i] == 0){
			sum=-1;
		}else{
			sum=1;
		}
		for (int j = i+1; j < n; ++j)
		{
			if(arr[j] == 0){
				sum += -1;
			}else{
				sum += 1;
			}

			if(sum == 0 && maxLength < j-i+1)
			{
				maxLength = j-i+1;
				startIndex = i;
			}
		}
	}
	if(maxLength == -1){
		printf("No SubArray Exists with equal 0's and 1's");
	}else{
		printf("%d to %d\n", startIndex, startIndex + maxLength-1);
	}
	return maxLength;
}


int main(int argc, char const *argv[])
{
	//testing for the given case	
	int arr[] = {1,0,1,1,1,0,0,0,1};
	int n = sizeof(arr)/sizeof(arr[0]);
	largestSubArray(arr, n);
	return 0;
}