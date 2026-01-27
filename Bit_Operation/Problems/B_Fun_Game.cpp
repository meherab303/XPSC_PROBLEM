#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int q;cin>>q;
  while(q--){
    int n;
    string s,t;
    cin>>n>>s>>t;
    int sone=INT_MAX;
    int tone=INT_MAX;
    for(int i=0;i<n;i++){
       if(s[i]=='1'){
        sone=min(sone,i);
       }
       if(t[i]=='1'){
        tone=min(tone,i);
       }
    }
    if(sone<=tone){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
  }  
    

  
   
  return 0;
}

