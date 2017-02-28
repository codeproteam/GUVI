#include <iostream>
using namespace std;

void swap(int *x,int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

bool compare(int x,int y)
{
	string first,second;
	first = to_string(x);
	second = to_string(y);
	if(first+second > second+first)
		return true;
	else
		return false;
}

void modifiedSort(int *a,int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(compare(a[j],a[i]))
			{
				swap((a+j),(a+i));
			}
		}
	}
}

int main() {
	int n;
	int *a;
	cin>>n;
	a = new int[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	modifiedSort(a,n);
	for(int i=0;i<n;i++)
		cout<<a[i];
	return 0;
}
