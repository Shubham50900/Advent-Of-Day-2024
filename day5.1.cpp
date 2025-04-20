#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[1176],b[1176];
    char x[5];
    int ans=0;
    for(int i=0;i<1176;i++){
        cin>>x;
        a[i]=0;
        b[i]=0;
        int j=0;
        while(j<2){
            a[i]=a[i]*10+(int)(x[j]-'0');
            j++;
        }j++;
        while(j<5){
            b[i]=b[i]*10+(int)(x[j]-'0');
            j++;
        }
    }
    for(int i=0;i<197;i++){
        char y[80];
        cin>>y;
        vector<int> q;
        int e=0;
        for(int j=0;y[j];j++){
            
            if(y[j]==','){q.push_back(e);e=0;}
            else{
                e=e*10+(int)(y[j]-'0');
            }
            
        }
        q.push_back(e);
        int flag=0;
        for(int j=0;j<q.size();j++){
            if(flag==0)
            {for(int k=0;k<j;k++){
                for(int s=0;s<1176;s++){
                    if(a[s]==q[j]&&b[s]==q[k]){flag=1;break;}
                }
                if(flag==1){break;}
            }
            for(int k=j+1;k<q.size();k++){
                for(int s=0;s<1176;s++){
                    if(a[s]==q[k]&&b[s]==q[j]){flag=1;break;}
                }
                if(flag==1){break;}
            }}
        }
        if(flag==1){
            for(int j=0;j<q.size();j++){
                flag=1;
            for(int k=0;k<j;k++){
                for(int s=0;s<1176;s++){
                    if(a[s]==q[j]&&b[s]==q[k]){int temp=q[j];q[j]=q[k];q[k]=temp;j=0;k=0;flag=2;break;}
                }
                if(flag==2){break;}
            }
            for(int k=j+1;k<q.size();k++){
                for(int s=0;s<1176;s++){
                    if(a[s]==q[k]&&b[s]==q[j]){int temp=q[j];q[j]=q[k];q[k]=temp;j=0;k=1;flag=2;break;}
                }
                if(flag==2){break;}
            }
        }
        ans+=q[(q.size()-1)/2];
        }
    }
    cout<<ans;
}