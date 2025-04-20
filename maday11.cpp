#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int32_t main(){
    vector < map <ll, ll> >  v(76);
    for(ll i=0;i<8;i++){
        int a;
        cin >> a;
        v[0][a]++;
    }
    for(int j=0;j<75;j++){
        //cout << j << nl;
        for (auto i : v[j]){
            ll x = i.first;

            //cout << x << " " << i.second << nl;
            if (x == 0) v[j+1][1] += i.second;
            else{
                int count = 0;
                while (x>0){
                    count++;
                    x/= 10;
                }
                if (count % 2){
                    /*if (i.first * 2024 < 0) {
                        cout << i.first << nl;
                    }*/
                    v[j+1][i.first*2024] += i.second;
                }
                else{
                    ll mul = pow(10, count/2);
                    ll left = i.first/mul;
                    ll right= i.first%mul;
                    v[j+1][left] += i.second;
                    v[j+1][right] += i.second;
                }
            }
        }
       // loop(k,0,v.size()){
        //cout << v[k] << " ";

    //}
        //std::cout << nl;//cout << v.size() << nl;
    }
    ll ans = 0;
    ll ans2 = 0;
    for (auto i : v[75]){
        ans += i.second;
        ans2 += i.first;
    }
    cout << ans <<" "<<.ans2;;
}
