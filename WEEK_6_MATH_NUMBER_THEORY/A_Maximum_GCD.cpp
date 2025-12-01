#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;cin>>t;
  while(t--){
    int n;cin>>n;
    cout<<n/2<<endl;
  }  
    

  //সবচেয়ে বড় GCD সবসময় একটি বড় সংখ্যার অর্ধেক হতে পারে।
  //1 থেকে n এর মধ্যে যেকোনো 2 সংখ্যার সর্বোচ্চ GCD = floor(n / 2)
  //karon kono shongkhake max n/2 darai divide kora jai.
  //odd number er khetreo n/2 e hobe.like n=45 hole pair hobe (22,44) er max gcd.

  //n=even hole max gcd pair=(n,n/2);
  //n=odd hole max gcd pair=(n-1,n/2);
  
   
  return 0;
}

