#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int t;cin>>t;
  while(t--){
    long long a,b,n;
    cin>>a>>b>>n;
    
    if(a%b==0){   // jdi a divisble by b  hoy tahole a er shokol multiple b dara divisible hobe.
        cout<<-1<<endl;
        continue;
    }
    if(n%a==0 && n%b!=0){  // n jdi a er multiple hoi and b dara divisilbe nahoy tahole n e ans
        cout<<n<<endl;
        continue;
    }
    long long first_multiple=((n/a)+1)*a;  // n theke boro a er first multiple ta ber korbo.jodi eita b dara divisble hoy tahole er porer multiple ta kokhonoi b dara divisible hobena as a is not divisible by b.
    if(first_multiple % b==0)first_multiple+=a;

    cout<<first_multiple<<endl;
  

}
   
  return 0;
}

