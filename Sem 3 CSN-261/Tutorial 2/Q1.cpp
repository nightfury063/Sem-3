#include<iostream>
using namespace std;

void swap(int *a,int *b){
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

void wiggly(int arr[], int t){

	for (int i = 0; i < t; ++i)
	{
		if(i%2==0 && arr[i]>arr[i+1]){
			swap(arr[i], arr[i+1]);
		}
		else if(i%2 !=0 && arr[i]<arr[i+1]){
			swap(arr[i], arr[i+1]);
		}
	}
}

void printArray(int arr[], int t)
{
	cout<<"The wiggly array : "<<endl;
	wiggly(arr, t);
	for(int j=0; j<t; j++){
		cout<<arr[j]<<"\t";
	}
}

int main(){
	
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int t = sizeof(arr)/sizeof(arr[0]);

	wiggly(arr, t);
	printArray(arr, t);

	return 0;
}
