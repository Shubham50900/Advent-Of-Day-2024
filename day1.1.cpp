#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[1000],b[1000];
    for(int i=0;i<1000;i++){
        cin>>a[i]>>b[i];
    }
    sort(a,a+1000);
    sort(b,b+1000);
    int sum=0;
    for(int i=0;i<1000;i++){
        if(a[i]-b[i]<0){sum+=b[i]-a[i];}
        else sum+=a[i]-b[i];
    }
    cout<<sum;
}