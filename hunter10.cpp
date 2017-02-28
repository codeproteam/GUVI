#include <stdio.h>

//function to check whether all the elements of
//array arr[] is visited in hash[] array
int checkSubset(int *arr,int n,int *hash)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(hash[arr[i]] == 0)
			return 0;
	}	
//if all the elements in array is present in hash	
	return 1;
}

int main()
{
	int i;
	//1. create two arrays and initialize it
	int b[] = {1,2,7,8};
	int a[] = {3,4,5,6};
	
	//2. find the sizes of two arrays
	int size_a = sizeof(a)/sizeof(a[0]);
	int size_b = sizeof(b)/sizeof(b[0]);
	
	/* 3. create hash arrays for array a and b and initializeit */
	int ahash[100] = {0}, bhash[100] = {0};
	
	//4. prepare ahash
	for(i=0;i<size_a;i++)
		ahash[a[i]] = 1;
 	
	//5. prepare bhash
	for(i=0;i<size_b;i++)
		bhash[b[i]] = 1;

	//6. check whether a is a subset of b
	if(checkSubset(a,size_a,bhash))
		printf("a is a subset of b\n");
	else
		printf("a is not a subset of b\n");
	
	//7. check whether b is a subset of a
	if(checkSubset(b,size_b,ahash))
		printf("b is a subset of a\n");
	else
		printf("b is not a subset of a\n");
	return 0;
}
