#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ss 19999
int main(){
    char x[ss];
    cin>>x;
    ll a[ss];
    ll sum=0,ans=0;
    vector<int> arr;
    ll s=0;
    for(ll i=0;i<ss;i++){
        a[i]=(ll)(x[i]-'0');
        if(i%2==0)for(ll j=0;j<a[i];j++){arr.push_back(i/2);}
        else for(ll j=0;j<a[i];j++){arr.push_back(-1);}
        s+=a[i];
    }
    //cout<<arr.size()<<s;
    for(ll i=ss-1;i>-1;i--){
        if(i%2==0){
            for(ll j=0;j<i;j++){
                if(j%2==1&&a[j]>=a[i]){
                    for(ll k=0;k<s;k++){if(arr[k]==i/2){arr[k]=0;}}
                    int flag=0;
                    for(ll k=0;k<s;k++){
                        if(arr[k]==(j-1)/2){
                            flag=1;
                        }
                        if(flag==1&&arr[k]==-1){
                            for(int q=0;q<a[i];q++){
                                arr[k+q]=i/2;
                            }
                            a[j]-=a[i];
                            break;
                        }
                    }
                    break;
                }
            }
        }
    }
    //for(int i=0;i<ss;i++){cout<<a[i];}cout<<endl;
    //for(ll w=0;w<arr.size();w++){cout<<arr[w];}
    for(ll i=0;i<arr.size();i++){
        if(arr[i]!=-1){ans+=i*arr[i];}
    }
    cout<<ans;  
}