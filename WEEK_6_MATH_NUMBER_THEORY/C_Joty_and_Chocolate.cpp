#include<bits/stdc++.h>
using namespace std;

long long lcm(int a,int b){
    return (long long )(a/__gcd(a,b))*b;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int  n,a,b,p,q;
  cin>>n>>a>>b>>p>>q;

   
  long long chocA=(long long)(n/a)*p,chocB=(long long)(n/b)*q;
  long long overLap_A_B=(n/lcm(a,b));

  long long total_choc=((chocA+chocB)-(overLap_A_B*(p+q)))+(overLap_A_B*max(p,q));

  cout<<total_choc<<endl;

 
    

  
   
  return 0;
}

