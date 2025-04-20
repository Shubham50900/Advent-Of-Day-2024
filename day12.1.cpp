#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define loop(a,i,n) for(ll a=i;a<n;a++)
#define ss 140

void check(int a[ss][ss],int x,int y,int n){
    if(x>ss-1||y>ss-1||x<0||y<0){return;}
    if(a[x][y]!=1){return;}
    else{
        a[x][y]=n;
        check(a,x+1,y,n);
        check(a,x,y-1,n);
        check(a,x-1,y,n);
        check(a,x,y+1,n);
    }
    return;
}

int main(){
    int a[26][ss][ss];
    loop(i,0,ss){
        loop(j,0,ss){
            loop(k,0,26){
                a[k][i][j]=0;           
            }
        }
    }
    loop(i,0,ss){
        char b[ss];
        cin>>b;
        loop(j,0,ss){
                a[(int)(b[j]-'A')][i][j]++;
        }
    }
    int n=2;
    vector<pair<int,int>> arr[26];
    loop(i,0,26){
        n=2;
        loop(j,0,ss){
            loop(k,0,ss){
                if(a[i][j][k]==1){arr[i].push_back({0,0});check (a[i],j,k,n);n++;}
            }
        }
    }
    loop(i,0,26){
        loop(j,0,ss){
            loop(k,0,ss){
                if(a[i][j][k])arr[i][a[i][j][k]-2].first++;
                if(k<ss-1&&a[i][j][k+1]==a[i][j][k]){arr[i][a[i][j][k]-2].second++;}
                if(j<ss-1&&a[i][j+1][k]==a[i][j][k]){arr[i][a[i][j][k]-2].second++;}
                if(k>0&&a[i][j][k-1]==a[i][j][k]){arr[i][a[i][j][k]-2].second++;}
                if(j>0&&a[i][j-1][k]==a[i][j][k]){arr[i][a[i][j][k]-2].second++;}

            }
        }
    }
    ll ans=0;
    loop(i,0,26){
        loop(j,0,arr[i].size()){
            ans+=arr[i][j].first*(4*arr[i][j].first-arr[i][j].second);
        }
    }
    cout<<ans<<endl;
}