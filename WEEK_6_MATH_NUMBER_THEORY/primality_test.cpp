#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n==1){
        return true;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n;cin>>n;

  bool result=isPrime(n);

  result?cout<<"Prime"<<endl:cout<<"Not Prime"<<endl;

  
   
  return 0;
}

