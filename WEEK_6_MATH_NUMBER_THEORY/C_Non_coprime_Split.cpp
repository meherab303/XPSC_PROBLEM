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
  int t ;cin>>t;
  while(t--){
    int l,r;
    cin>>l>>r;
    if(l==r && r%2!=0){
       if(isPrime(r)){ //always prime>2 =sum(odd+even) and gcd(odd,even)=1.
        cout<<-1<<endl;
       }else{
            for(int i=2;i*i<=r;i++){
                if(r%i==0){
                  cout<<i<<" "<<r-i<<endl;  //example:70/7=10;mane 10 ta 7 mile 70 hbe .ekta 7(i) nile aro 9ta 7 thakbe.oi 9ta 7 er sum(r-i) o 7 dara bhag jabe.so gcd(7(i),63(r-1)) always 7(i) hbe.greater than 1.
                  break;  
                }
            }
       }
    }else{
        if(r/2!=1){
            cout<<r/2<<" "<<(r/2)<<endl;
        }else{
            cout<<-1<<endl;
        }
        
    }
  }  
    

  
   
  return 0;
}

