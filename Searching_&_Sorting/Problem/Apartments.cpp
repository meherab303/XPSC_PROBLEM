#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n,m,k;
  cin>>n>>m>>k;
  vector<int>desired(n);
  vector<int>free_apart(m);
  
  for(auto &des:desired){
    cin>>des;
  }
  for(auto &free:free_apart){
    cin>>free;
  }
    

  sort(desired.begin(),desired.end());
  sort(free_apart.begin(),free_apart.end());

  int ans=0,j=0,i=0;
  while(i<m && j<n){
    if(abs(free_apart[i]-desired[j])<=k){
        ans++;
        j++;
        i++;
    }else if(free_apart[i]<desired[j]){
        i++;

    }else if(free_apart[i]>desired[j]){
        j++;
    }
  }
  cout<<ans<<endl;
   
  return 0;
}

