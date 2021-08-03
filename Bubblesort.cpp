#include <bits/stdc++.h>
using namespace std ;
int main() {
int n , a[10005] ;
cin >> n ;
for(int j = 1 ; j <= n ; j++){
	cin >> a[j] ;
}
for(int j = 1 ; j < n ; j++){
	for(int i = 2 ; i <= n ; i++){
		if(a[i] < a[i-1]){
			swap(a[i] , a[i-1]) ;
		}
	}
}
for(int j = 1 ; j <= n ; j++){
	cout << a[j] << " " ;
}
return 0;
}
