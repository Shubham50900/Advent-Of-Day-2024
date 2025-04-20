#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ss 54
int chec(int a[ss][ss],int x,int y,int n,int t1,int t2){
    if(n==9){
        if(x==t1&&y==t2){return 1;}
        else{return 0;}
    }
    int ans=0;
    if(x+1<ss&&a[x+1][y]-a[x][y]==1){ans+=chec(a,x+1,y,n+1,t1,t2);}
    if(y+1<ss&&a[x][y+1]-a[x][y]==1){ans+=chec(a,x,y+1,n+1,t1,t2);}
    if(x-1>-1&&a[x-1][y]-a[x][y]==1){ans+=chec(a,x-1,y,n+1,t1,t2);}
    if(y-1>-1&&a[x][y-1]-a[x][y]==1){ans+=chec(a,x,y-1,n+1,t1,t2);}
    return ans;
}
int main(){
    char a[ss][ss];
    int b[ss][ss];
    for(int i=0;i<ss;i++){
        cin>>a[i];
        for(int j=0;j<ss;j++){
            b[i][j]=(int)(a[i][j]-'0');
        }
    }
    ll ans=0;
    int flag=-1;
    for(int i=0;i<ss;i++){
        for(int j=0;j<ss;j++){
            if(b[i][j]==0){
                int x=i,y=j,n=0;flag++;
                for(int k=0;k<ss;k++){
                    for(int l=0;l<ss;l++){
                        if(b[l][k]==9){
                            ans+=chec(b,x,y,0,l,k);
                            //cout<<ans<<" "<<l<<k<<endl;
                        }
                    }
                }
                //cout<<ans;
            }
        }
    }
    cout<<ans;
}