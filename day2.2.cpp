#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int check(int a[],int n){
        int sum=a[0];
        int slope=0;
        sum-=a[1];
        if (sum<0)slope=-1;
        else slope=1;
        if (sum*slope>3||sum==0){return 0;}
        sum=a[1];
        for(int i=2;i<n;i++){
            sum-=a[i];
            if (sum*slope>3||sum*slope<=0){return 0;}
            sum=a[i];
        }
        return 1;
}

int main(){
    int ans=0;
    int t=686;
    for(int h=0;h<t;h++){
        vector<int> a;
        a.clear();
        int n=0;
        while (n!=-1){
            
            cin>>n;
            if(n!=-1){
                a.push_back(n);
            }
            
        }
        int slope=0;
        for(int i=0;i<a.size();i++){
            int arr[a.size()-1];
            for(int j=0;j<a.size();j++){
                if(j<i){arr[j]=a[j];}
                if(j==i){continue;}
                if (j>i){arr[j-1]=a[j];}
            }
            if(check(arr,a.size()-1)==1){ans+=1;break;}
        }
    }
    cout<<ans;
}