#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;cin>>t;
  while(t--){
    int n,k;
    cin>>n>>k;
    const int total_bit=30;
    vector<int>v(n);
    vector<int>bit(total_bit+1);

    for(int i=0;i<n;i++){
        cin>>v[i];
        for(int j=total_bit;j>=0;j--){
            if(!((v[i]>>j)&1)){  
               bit[j]++;  //total i tomo bit e total kotota 0 ache oita ber kortesi
            }
         
        }

    }

    int ans=0;   // jeheto highest 30 ta bit.31 tomo bit nai(0<=ai<2^31).tahole 2^0 theke 2^30 porjnto cumulative sum korleo int er range ei thakbe.int range=2^31.

    for(int i=total_bit;i>=0;i--){
        int need=bit[i];
        if(need<=k){
            ans+=(1ll<<i);
            k-=need;
        }
    }
    cout<<ans<<endl;
  }  
    

  
   
  return 0;
}

