#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ss 19999
int main(){
    char x[ss];
    cin>>x;
    ll a[ss];
    ll sum=0,ans=0;
    vector<ll> arr;
    for(ll i=0;i<ss;i++){
        a[i]=(int)(x[i]-'0');
        //cout<<a[i]<<endl;
        if(i%2==0)for(int j=0;j<a[i];j++){arr.push_back(i/2);}
        else for(int j=0;j<a[i];j++){arr.push_back(-1);}
    }
    ll i=0;
    while(1){
        if(i>=arr.size()){break;}
        if(arr[i]==-1){
            arr[i]=arr[arr.size()-1];
            arr.pop_back();
            i--;
        }
        i++;
    }
    for(ll j=0;j<arr.size();j++){
        ans+=j*arr[j];
        //cout<<arr[j];
    }
    cout<<ans;
}