#include<bits/stdc++.h>
using namespace std;



int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int t;cin>>t;
  while(t--){
    int n;cin>>n;
    vector<long long>gcd1,gcd2;

    for(int i=0;i<n;i++){
        long long x;cin>>x;
        if(i%2==0){
            gcd1.push_back(x);
        }else{
            gcd2.push_back(x);
        }
    }

    long long g1=0;
    for(int i=0;i<gcd1.size();i++){
        g1=__gcd(g1,gcd1[i]);
    }

    bool g1d=false;
    for(int i=0;i<gcd2.size();i++){
        if(gcd2[i]%g1==0){
            g1d=true;
            break;
        }
    }
    if(g1d==false){
        cout<<g1<<endl;
        continue;
    }

    long long g2=0;
    for(int i=0;i<gcd2.size();i++){
        g2=__gcd(g2,gcd2[i]);
    }
    bool g2d=false;
    for(int i=0;i<gcd1.size();i++){
        if(gcd1[i]%g2==0){
            g2d=true;
            break;
        }
    }
    if(g2d==false){
        cout<<g2<<endl;
        continue;
    }
    else{
        cout<<0<<endl;
    }


 }
    

  
   
  return 0;
}

