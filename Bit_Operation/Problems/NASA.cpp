#include<bits/stdc++.h>
using namespace std;

const int max_val=(1<<15);

vector<int>palindrome;

bool isPalindrome(int x){
    string s=to_string(x);
    int len=s.size();
    for(int i=0;i<len/2;i++){
        if(s[i]!=s[len-1-i]){
            return false;
        }
    }
    return true;
}

void totalPalindrome(){
    for(int i=0;i<max_val;i++){
        if(isPalindrome(i)){
            palindrome.push_back(i);
        }
    }
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  totalPalindrome();
  int t;cin>>t;
  while(t--){
   int n;cin>>n;
   vector<int>v(n),count(max_val);
   for(int i=0;i<n;i++){
    cin>>v[i];
    count[v[i]]++;
   }

   long long ans=n;
   for(int i=0;i<n;i++){
    for(int j=0;j<palindrome.size();j++){
        int current_val=(v[i]^palindrome[j]);
        ans+=count[current_val];

    }
   }
   cout<<ans/2<<endl;

  }  
    

  
   
  return 0;
}

