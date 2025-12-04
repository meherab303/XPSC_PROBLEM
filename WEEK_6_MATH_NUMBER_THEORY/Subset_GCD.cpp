#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while(t--){
        int n,k;
	cin>>n>>k;
	int max_gcd=n/k;

	// int i=max_gcd;
	// while(k--){
	//       cout<<i<<" ";
	//       i+=max_gcd;
	// }
    for( int i=1;i<=k;i++){
        cout<<max_gcd*i<<" ";
    }
	
	cout<<endl;
    }
	

}

// n element er k subset er max_gcd n/k e hoite pare.er theke beshi kokhonoi possible na.

//যদি subset-এর প্রতিটি element max_gcd-এর গুণিতক হয় এবং সেই element-গুলো 1..N এর ভেতরে থাকে .তাহলে subset-এর GCD হবে max_gcd এবং এর চেয়ে বড় GCD সম্ভবই না, কারণ
// GCD কখনোই (N/k)-এর বেশি হতে পারে না।