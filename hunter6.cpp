#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;

int main() {
	int n;//size of the array
	int *a;//pointer to the array of integers
	int hash[1000000];
	//get the number of elements from the user
	cin>>n;
	a = (int*)malloc(sizeof(int)*n);
	memset(hash,0,sizeof(hash));
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(hash[a[i]%1000000])
		{
			cout<<a[i]<<endl;
			break;
		}
		hash[a[i]%1000000]++;
	}
	return 0;
}
