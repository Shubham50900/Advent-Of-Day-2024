#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int countDigits(ll number) { int count = 0;  while (number != 0) { number /= 10; ++count; } return count; }
int main(){
    vector<ll> a;
    for(int i=0;i<8;i++){
        ll x;
        cin>>x;
        a.push_back(x);
    }
    int t=75;
    while(t--){
        ll s=a.size();
        for(auto i=a.begin();i!=a.end();i++){
            s=a.size();
            if(*i==0){*i=1;}
            else{
                if(countDigits(*i)%2==1){*i*=2024;}
                else{
                    ll q=*i%((ll)pow(10,countDigits(*i)/2));
                    *i/=pow(10,countDigits(*i)/2);
                    auto p=(ll)(i-a.begin());
                    a.insert(i+1,q);
                    i=a.begin()+p+1;
                }
            }
        }
    cout<<t<<" "<<a.size()<<endl;
    if(t>=72)for(int i=0;i<a.size();i++){cout<<a[i]<<" ";}
    }
    cout<<a.size();
}