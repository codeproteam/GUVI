#include <iostream>
using namespace std;

int main() {
	int n;
	int *a;
	cin>>n;
	a = new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]==i)
		{
			cout<<a[i]<<endl;
			break;
		}
	}
	return 0;
}
