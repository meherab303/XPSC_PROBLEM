#include<bits/stdc++.h>
using namespace std;



int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;cin>>t;
  while(t--) {
    int n;cin>>n;
    bool got=true;

    for(int i=0;i<n;i++){  
        int x;cin>>x;
        if(x%2==0){  //ekta even number thaklei odd multiple paowa jabena.
            got=false;
        }
    }

    if(got){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

  } 
    

  
   
  return 0;
}

//odd number ke kokhonoi even dara divide kora jaina.
//multiple jdi odd hoite hoi mane lcm jdi odd korte hoi tahole shohok number ke odd e hoite hbe
//lcm(even,odd)==always even.
//lcm(odd,odd)=always odd.