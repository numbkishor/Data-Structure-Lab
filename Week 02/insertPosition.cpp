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
	int pos;
	cin>>pos;
	while (pos<0 || pos>n+1){
		cout<<"Invalid Position";
		cin>>pos;
	}
	for(int i=n; i>pos-1;i--){
		ara[i]=ara[i-1];
	}
	int value;
	cin>>value;
	ara[pos-1]=value;
	for (int i=0; i<=n; i++){
		cout<<ara[i]<<" ";
	}
	return 0;

}
