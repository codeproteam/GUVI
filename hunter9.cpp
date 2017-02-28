#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int closest = 2<<16;
	int pFirst,pSecond;
	//generating all the possible pairs
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			//for every pair a[i], a[j]
			//find their sum
			int sum = a[i] + a[j];
			
			//check if the sum is closest to zero
			if(abs(sum)<abs(closest))
			{
				closest = sum;
				pFirst = a[i];pSecond = a[j];
			}
		}
	}
	cout<<pFirst<<" "<<pSecond<<endl;
	return 0;
}
