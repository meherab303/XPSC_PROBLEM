#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    for(int i=n;i>0;i--){
	        cout<<i<<" ";
	    }
	    cout<<endl;
	}

}
// শুধু reverse permutation-এ সব i+Ai​=(N+1)হয়|tai lcm N+1 hoi.।kaorn অন্য কোনো permutation-এ shobgula value সমান হয় না, তাই অন্যগুলোর LCM কখনোই minimum হয় না।
//অন্য jekono permutation-এ অন্তত ১টি i+Ai different মান হবে → LCM বড় হবে → minimum পাওয়া যাবে না।