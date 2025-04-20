#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int ttt=320;
    ll token=0;
    while(ttt--){
        ll a1,a2,b1,b2,c1,c2,x,y;
        cin>>a1>>a2>>b1>>b2>>c1>>c2;
        c1+=1e13;
        c2+=1e13;
        ll detx=c1*b2-b1*c2,dety=a1*c2-a2*c1,det=a1*b2-a2*b1;
        if(detx%det==0)x=detx/det;
        else x=-1;
        if(dety%det==0)y=dety/det;
        else y=-1;
        if(x>=0&&y>=0){token+=3*x+y;}
    }
    cout<<token;
}