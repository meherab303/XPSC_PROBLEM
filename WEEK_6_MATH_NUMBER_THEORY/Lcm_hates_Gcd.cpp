#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;cin>>t;
  while(t--){
    int a,b;cin>>a>>b;
    int gcd=__gcd(a,b);  //lcm baranu jabena.gcd baraite hbe.tahole a,b er gcd e hbe x.tahole a b both x dara divisible.lcm(a,x)=max_element.mane a e hbe.gcd(b,x)=min_element mane x e hbe.gcd er theke beshi baranu jabena.baraile lcm bere jabe.
    cout<<a-gcd<<endl;
  }  
  return 0;
}

