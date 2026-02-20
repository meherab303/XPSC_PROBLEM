#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;cin>>n;
  vector<pair<int,int>>v(n);
//   for(int i=0;i<n;i++){
//     cin>>v[i].first>>v[i].second;
//   } 
    for(auto &[first,second]:v){
        cin>>first>>second;
    }
    for(auto &[first,second]:v){
        swap(first,second);
    }
   
    sort(v.begin(),v.end());  //ending diye sort hobe jeheto swap korsi.target holo jeigula age sesh hbe oigula age dekha

   
    int ans=0,last_movie=0;
    for(auto [end,start]:v){

        if(start>=last_movie){  //erporer movie ta last movie er pore shuru hole obosshoi next movie er start time ager movie er ending time er shoman ba boro hbe.
            ans++;
            last_movie=end;
        }
    }

    cout<<ans<<endl;
    

  
   
  return 0;
}


///movie dekhar timeline==>jeita age sesh hobe oita dekha.tarpor jeita start hoye age sesh hobe oitai dekha.evabe continue cholbe.

