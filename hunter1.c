
#include <stdio.h>
int main()
{
  int n;
  int *a;
  int hash[100000] = {0};
  scanf("%d",&n);
  a = (int*)malloc(sizeof(int)*n);
  for(int i=0;i<n;i++)
    scanf("%d",(a+i)),hash[a[i]]++;
  for(int i=0;i<n;i++)
  {
    if(hash[a[i]]>1)
    {
      printf("%d ",a[i]);
      hash[a[i]] = 0;
    }
  }
  return 0;
}
