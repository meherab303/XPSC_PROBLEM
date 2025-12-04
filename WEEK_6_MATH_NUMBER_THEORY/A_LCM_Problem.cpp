#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;cin>>t;
  while(t--){
    int l,r;
    cin>>l>>r;

    int max_l=r/2;    //l<= lcm(x,y)<=r rakhte hole l max r/2 hote parbe .er beshi hole lcm(x,y) rules break korbe. 
    if(max_l>=l){
        cout<<max_l<<" "<<max_l*2<<endl;
    }else{
        cout<<-1<<" "<<-1<<endl;
    }
  } 
    

  
   
  return 0;
}

