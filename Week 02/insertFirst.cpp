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
	for(int i=n; i>0;i--){
		ara[i]=ara[i-1];
	}
	int value;
	cin>>value;
	ara[0]=value;
	for (int i=0; i<=n; i++){
		cout<<ara[i]<<" ";
	}
	return 0;

}
