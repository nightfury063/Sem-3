//code segment
for (int i = 1; i <= n; i++)
{
	for (int j = 1; j < n; j++)
	{
		sum+=1;
	}
}
int *arr;
arr = new int[sum];
// Solution : 
// because sum is incremented by 1 for nlogn times 
// so value of sum becomes nlogn 
// therefore the space complexity is nlogn(base4)