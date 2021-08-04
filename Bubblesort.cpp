#include <bits/stdc++.h>
using namespace std ;
int main() {
int n  ;
vector <long long >v ;
cin >> n ;
for(int j = 0 ; j < n ; j++){
	int x ;
	cin >> x;
	v.push_back(x) ;
}
for(int j = 0 ; j < n-1 ; j++){
	for(int i = 1 ; i < n ; i++){
		if(v[i] < v[i-1]){
			swap(v[i] , v[i-1]) ;
		}
	}
}
for(int j = 0; j < v.size() ; j++){
	cout << v[j] << " " ;
}
return 0;
}
