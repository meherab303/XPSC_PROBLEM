#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;cin>>t;
  while(t--){
    int n;cin>>n;
    map<int,int>mp;
    for(int i=1;i<=n;i++){
       int x;cin>>x;
       mp[x]=i;
    }

    const int val=1000;
    int max_sum=0;
    for(int i=val;i>0;i--){
        for(int j=i;j>0;j--){
            if(__gcd(i,j)==1){
                if(mp[i]!=0 &&mp[j]!=0){
                    max_sum=max(max_sum,mp[i]+mp[j]);
                }
            }
        }
    }

   if(max_sum==0){
    cout<<-1<<endl;
   }else{
    cout<<max_sum<<endl;
   }
    
    

    
  }  
    

  
   
  return 0;
}

//1.array te same value duplicate hbe.tai value gular max index map e store korbo.

//2.jeheto duplicate value thakbe tai duplicate  pair er gcd barbar ber korar mane hoina.tai focus korbo only value er upor.mane prottekta unique pair er gcd ber korbo.duplicate pair er gcd only 1bar ber hobe.like gcd(1000,1000),gcd(999,999),gcd(1,1) etc.karon gcd(1,1) er gcd o 1.

//3.gcd ber korbo value er upor.array te max value 1000.tai 1000 theke 1 porjnto shokol pair er gcd ber korbo.jader gcd 1 hbe oi pair ta map e thakle max_sum er sathe tader index compare korbo

