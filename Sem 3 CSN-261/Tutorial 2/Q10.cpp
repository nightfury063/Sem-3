#include <iostream>
using namespace std;
const int SIZE=20;
int main (int argc, char const *argv[])
{
    int numbs[SIZE], value, idx, n;
    
    cout<<"PLease enter size of an array"<<endl;
    cin>>n;
    
    cout << "Please enter a sequence of numbers "<<endl;
    
    for(idx = 0; idx < n; idx++)
           cin >>numbs[idx];

    cout<< numbs[0] << " ";
	
	for (int i = 1; i < n; i++)
	{
		bool matching = false;
		for (int j = 0; (j < i) && (matching == false); j++)
			if (numbs[i] == numbs[j]) matching = true;
		if (!matching) cout<< numbs[i] << " ";
	}	
		   
	return 0;	   
}