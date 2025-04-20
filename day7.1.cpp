#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int countDigits(int number) {  if (number < 0) { number = -number; } int count = 0; if (number == 0) { return 1; }  while (number != 0) { number /= 10; ++count; } return count;}
int r(vector<ll> a,ll k, int n){
    if(n==1){
        if (a[0]==k){return 1;}
        else {return 0;}
    }
    else{
        ll x=a[0]*a[1];
        ll y=a[0]+a[1];
        a.erase(a.begin());
        vector<ll> b(a);
        a[0]=x;b[0]=y;
        return r(a,k,n-1)+r(b,k,n-1);
    }
}
int q(vector<ll> a,ll k, int n){
    if(n==1){
        if (a[0]==k){return 1;}
        else {return 0;}
    }
    else{
        ll x=a[0]*a[1];
        ll y=a[0]+a[1];
        ll z=a[0]*pow(10,countDigits(a[1]))+a[1];
        a.erase(a.begin());
        vector<ll> b(a);
        vector<ll> c(a);
        a[0]=x;b[0]=y;c[0]=z;

        return q(a,k,n-1)+q(b,k,n-1)+q(c,k,n-1);
    }
}

int main(){
    int t=850;
    ll ans=1298103531759;
    for(int i=0;i<850;i++){
        ll a;
        vector<ll> b;
        cin>>a;
        ll x;
        while(1){
            cin>>x;
            if(x==0){break;}
            b.push_back(x);
        }
        if(r(b,a,b.size())==0){
            if(q(b,a,b.size())!=0){ans+=a;}
        }
    }    
    cout<<ans;
}
