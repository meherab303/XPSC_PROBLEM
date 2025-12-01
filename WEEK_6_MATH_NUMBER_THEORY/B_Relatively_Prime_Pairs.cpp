#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  long long l,r;cin>>l>>r;
  long long n=(r-l+1)/2;
  
  cout<<"YES"<<endl;
  long long i=l,j=l+1;   
  while(n--){    //gcd(a,a+1) is always 1.
    cout<<i<<" "<<j<<endl;
    i+=2,j+=2;
  }

  
   
  return 0;
}

//n and n-1 er gcd alway e 1 hbe. othoba n and n+1 er gcd always 1 hobe.

