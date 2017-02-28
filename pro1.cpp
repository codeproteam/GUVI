#include <iostream>
using namespace std;

string findCommonPrefix(string s1,string s2)
{
	string result = "";
	for(int i=0;s1[i] && s2[i];i++)
	{
		if(s1[i]!=s2[i]) break;
		result+=s1[i];
	}
	return result;
}

string longestCommonPrefix(string s[],int n)
{
	string commonPrefix = s[0];
	for(int i=1;i<n;i++)
	{
		commonPrefix = findCommonPrefix(commonPrefix,s[i]);
	}
	return commonPrefix;
}

int main() {
	int n;
	cin>>n;
	string s[n];
	for(int i=0;i<n;i++)
		cin>>s[i];
	cout<<longestCommonPrefix(s,n);
	return 0;
}
