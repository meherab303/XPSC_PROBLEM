#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int m, n; 
    cin >> m >> n;

    vector<pair<pair<int,int>,int>> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i].first.first >> v[i].first.second >> v[i].second;
    }

    auto calc_ballon=[&]( int t,int z,int y,int cycle,int mid){
            int to_cyle = mid / cycle;
            int total_ballon = to_cyle * z;

           return total_ballon;
    };

    auto ok = [&](int mid) -> bool {
        int ballon = 0;
        for(int i = 0; i < n; i++){
            int t = v[i].first.first;
            int z = v[i].first.second;
            int y = v[i].second;
            int cycle = t * z + y; // per cycle e z ta ballon inflate kore

            int total_ballon=calc_ballon(t,z,y,cycle,mid); 
            

           
            ballon += total_ballon;

            int remain = mid % cycle;
            ballon += min(z, remain / t);

            if(ballon >= m) return true;
        }
        return ballon >= m;
    };

    vector<int> inflate(n);
    auto ballon_per_assistant = [&](int total_time){
        int need = m;
        for(int i = 0; i < n; i++){
            int ballon = 0;
            int t = v[i].first.first;
            int z = v[i].first.second;
            int y = v[i].second;
            int cycle = t * z + y;  

            int total_ballon=calc_ballon(t,z,y,cycle,total_time); 

            
            ballon += total_ballon;

            int remain = total_time % cycle;
            ballon += min(z, remain / t);

            int give = min(ballon, need);  //karon binary search minimum time ta dei.exact amount je paowa jabe eitar guarantee nei.tai oi minimum time e m theke beshi ballon inflate hoite pare.but assistant er total ballon ==m hoite hobe.

            inflate[i] = give;
            need -= give;
        }
    };

    int l = 0, r = 5000000, mid, ans;

    while(l <= r){
        mid = l + (r - l) / 2;
        if(ok(mid)){
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    ballon_per_assistant(ans);

    cout << ans << endl;
    for(auto val : inflate){
        cout << val << " ";
    }
    cout << endl;

    return 0;
}