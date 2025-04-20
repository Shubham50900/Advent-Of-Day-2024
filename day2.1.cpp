#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    for(int h=0;h<1000;h++){
        int n;
        cin>>n;
        int sum=n;
        int slope=0;
        cin>>n;
        sum-=n;
        if (sum<0)slope=-1;
        else slope=1;
        int flag=0;
        if (sum*slope>3||sum==0){cout<<"unsafe"<<endl;flag=1;}
        sum=n;
        while(1){
            cin>>n;
            if(n==-1){break;}
            sum-=n;
            if ((sum*slope>3||sum*slope<=0)&&flag==0){cout <<"unsafe"<<endl;flag=1;}
            sum=n;
        }
        if(flag==0)cout<<"safe"<<endl;
    }
}