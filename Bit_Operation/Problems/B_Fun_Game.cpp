#include<bits/stdc++.h>
using namespace std;



/*
i)s[i] e jodi 1 hoi tahole yes.
ii)jodi 1 na hoy tahole dekhte hbe t[i]==1 kina.hole NO.mane s er age t e 1 eshe porse(mismatch)
iii)loop sesh hoye gele YES hbe .mane s = all 00.t=all 0.

*/
void solve(int n,string s,string t){
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            cout<<"YES"<<endl;
            return ;
        }else{
            if(s[i]!=t[i]){
                cout<<"NO"<<endl;
                return ;
            }
        }
    }
    cout<<"YES"<<endl;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int q;cin>>q;
  while(q--){
    int n;
    string s,t;
    cin>>n>>s>>t;
    //approach -1-->s er age t te 1 eshe porle no.
/*
     int sone=INT_MAX;
    int tone=INT_MAX;
    for(int i=0;i<n;i++){
       if(s[i]=='1'){
        sone=min(sone,i);  //index min neya mane first 1 ta count kora.
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
  
*/

//approch-2
solve(n,s,t);

 
    
} 
 
    

  
   
  return 0;
}




/*
i)s[0]==1 hole shob a ke t bananu jabe
ii)s e t er age 1 ashle YES.karon porer shob value ke (0,1) e convert kora jabe.
iii)jodi t e age 1 ashe tahole NO.

tricks==>focus on 1.


*/
