#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int n;
	cin>>n;
	int ara[n];
	for (int i=0; i<n; i++){
		cin>>ara[i];
	}
	int value;
	cin>>value;
	ara[n]=value;
	for (int i=0; i<=n; i++){
		cout<<ara[i]<<" ";
	}
	return 0;

}
