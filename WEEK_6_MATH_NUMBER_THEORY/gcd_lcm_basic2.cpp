#include<bits/stdc++.h>
using namespace std;

int GCD(int a,int b){
    return __gcd(a,b); //log(min(a,b))
}

int LCM(int a,int b){   //gcd(a,b)*lcm(a,b)=a*b;
   
    // return (a*b)/__gcd(a,b);
    return (a/__gcd(a,b))*b;  //log(min(a,b))
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
   int a,b;
   cin>>a>>b;
   cout<<GCD(a,b)<<endl;
   cout<<LCM(a,b)<<endl;

    

  
   
  return 0;
}

//gcd(a,b)*lcm(a,b)=a*b;
//lcm(a*b)=(a*b)/gcd(a,b);
//lcm(a,b)=(a/gcd(a,b))*b;

