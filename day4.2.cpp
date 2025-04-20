#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    char a[140][141];
    int ans=0;
    for(int i=0;i<140;i++){
        cin>>a[i];
    }
    int flag=0;
    for(int i=1;i<139;i++){
        for(int j=1;j<139;j++){
            if(a[i][j]=='A'){
                if(a[i+1][j+1]=='M'&&a[i+1][j-1]=='M'&&a[i-1][j-1]=='S'&&a[i-1][j+1]=='S'){ans++;}
                if(a[i+1][j+1]=='M'&&a[i+1][j-1]=='S'&&a[i-1][j-1]=='S'&&a[i-1][j+1]=='M'){ans++;}
                if(a[i+1][j+1]=='S'&&a[i+1][j-1]=='M'&&a[i-1][j-1]=='M'&&a[i-1][j+1]=='S'){ans++;}
                if(a[i+1][j+1]=='S'&&a[i+1][j-1]=='S'&&a[i-1][j-1]=='M'&&a[i-1][j+1]=='M'){ans++;}
            }
        }
    }
    cout<<ans;
}