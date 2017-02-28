#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a[n];
	int hash[1000000] = {0};
	for(int i=0;i<n;i++)
		cin>>a[i],hash[a[i]]=i;
	//finding the triples a[i] + a[j] = a[k]
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			//for every pair a[i] + a[j]
			int sum = a[i] + a[j];
			//if the pair is already visited
			//print the pair
			if(hash[sum])
			{
				//print the triple
				cout<<i<<" "<<j<<" "<<hash[sum]<<endl;
			}
		}
	}
	return 0;
}
