#include <iostream>
using namespace std;

bool containsThree(int n)
{
		while(n%10 != 0 || n>0){
		if(n%10 == 3){
			return true;
		}else{
			n = n/10;
		}
	}
	return false;
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int count = 0;
	for (int i = 1; i <= n; ++i)
	{
		if(containsThree(i)){
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}