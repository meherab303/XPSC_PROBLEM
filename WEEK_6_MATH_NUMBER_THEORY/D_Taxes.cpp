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

  if(isPrime(n)){
    cout<<1<<endl;
  }else if(n%2==0){  //jekono even number ke 2ta prime er summation e convert kora jai.prime gula 2 ba 2 er theke boro hoi.
    cout<<2<<endl;

  }else{    //jekono odd number ke 2ta ba 3ta prime er summation e convert kora jai. odd theke 2 minus korle prime hole 2ta hobe. nahoy 3ta(odd theke 3 minus korle even hbe.oi even ke 2ta prime ke convert)
    int n2=n-2;
    if(isPrime(n2)){
        cout<<2<<endl;
    }else{
        cout<<3<<endl;
    }
    
  }


  
   
  return 0;
}


//1.even number= sum of 2 prime.
//.odd number=if(odd-2==prime)sum of 2 prime;
            //else sum of 3 prime.(odd-3=even(2 prime))

