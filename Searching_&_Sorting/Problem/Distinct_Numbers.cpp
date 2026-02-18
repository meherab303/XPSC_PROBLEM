#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;cin>>n;

  //using set

  /*
  set<int>s;
  for(int i=0;i<n;i++){
    int val;cin>>val;
    s.insert(val);
  }  

  cout<<s.size()<<endl;
  */

  //without set

  vector<int>v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  sort(v.begin(),v.end());

  int distinc=0;
  for(int i=0;i<n;i++){
    if(i==0 || v[i]!=v[i-1]){
        distinc++;
    }
  }
  cout<<distinc<<endl;

    

  
   
  return 0;
}

