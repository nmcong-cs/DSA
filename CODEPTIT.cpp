#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin >> n;
	int a[n];
	set<int> s;
	for(int i=0;i<n;i++){
		cin >> a[i];
		s.insert(a[i]);
	}
	for(auto it : s){
		cout << it << " ";
	}
}