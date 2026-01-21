#include<bits/stdc++.h>
using namespace std;

bool find_kth_bit_on_or_of(int n,int k){
    return (n>>k)&1;  //k bar right shift korle kth bit front e ashbe.eitar sathe 1 er AND operation korlei on(1) or off (0) bujha jabe.
}

void print_all_on_off_bits(int n){
    for( int k=7;k>=0;k--){
        if(find_kth_bit_on_or_of(n,k)){
            cout<<1<<" ";
        }else{
            cout<<0<<" ";
        }
    }
}

//approach-1
// void turn_kth_bit_off(int n,int k){
//     int m=(1<<k);
//     if(find_kth_bit_on_or_of(n,k)){
//         cout<<(n^m)<<endl;
//     }else{
//         cout<<n<<endl;
//     }
//     // cout<<((n>>k)&1)<<"--->"<<((n>>k)&0);
// }
 
//approach-2

int turn_kth_bit__off(int n,int k){
    int m=~(1<<k);   // just kth bit er sathe 0 diye AND korlei off hoye jabe.and other bit jemon ache temon e rakhar jonno 1 er rakhte hbe.tai first e 1 er left shift.tahole k=3 er jnno hbe =00001000.then NOT korle 11110111.eitar sathe n er AND korlei kth bit off hoye jabe.
    

    return (n&m);
}
int turn_kth_bit_on(int n,int k){
    int m=1<<k;  //kth bit er sathe 1 diye OR korlei kth bit turn on hoye jabe
    return (n|m);
    // cout<<((n>>k)&1)<<"--->"<<(((n>>k)&1)|1);
}

int toggle_kth_bit(int n,int k){
    int m=(1<<k);  //kth bit sathe 1 diye xor korlei toggole hoye jabe .karon 1 thakle 1^1-->0,0 thakle 0^1-->1.
    return (n^m);
}






int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
    
    
  int a=45;
  cout<<find_kth_bit_on_or_of(a,2)<<endl; 
  print_all_on_off_bits(a);
  cout<<endl; 
  cout<<turn_kth_bit__off(a,5)<<endl;
  cout<<turn_kth_bit_on(a,4)<<endl;
  cout<<toggle_kth_bit(a,1)<<endl;
  
   
  return 0;
}

