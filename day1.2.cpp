#include<bits/stdc++.h>
using namespace std;
int count(int arr[1000],int x){
    int ans=0;
    for(int i=0;i<1000;i++){if (arr[i]==x){ans++;};}
    return ans;
    
}
int main(){
    int a[1000],b[1000];
    for(int i=0;i<1000;i++){
        cin>>a[i]>>b[i];
    }
    long long sum=0;
    for(int i=0;i<1000;i++){
        sum+=a[i]*count(b,a[i]);
    }
    cout<<sum;
}