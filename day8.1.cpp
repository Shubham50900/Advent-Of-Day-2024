#include<bits/stdc++.h>
using namespace std;
#define ll long long;
int  main(){
    char a[50][50];
    for(int i=0;i<50;i++){
        cin>>a[i];
    }
    char flag='.';
    int b[50][50],x,y;
    for(int i=0;i<50;i++){
        for(int j=0;j<50;j++){
            b[i][j]=0;
        }
    }
    for(int i=0;i<50;i++){
        for(int j=0;j<50;j++){
            cout<<i<<" "<<j<<endl;
            if(flag!='.'){
                for(int q=0;q<50;q++){
                    for(int r=0;r<50;r++){
                        if(q!=x&&r!=y){
                            if(a[q][r]==flag){
                                if(2*q-x<50&&2*r-y<50&&2*q-x>=0&&2*r-y>=0){b[2*q-x][2*r-y]++;}
                                if(2*x-q<50&&2*y-r<50&&2*x-q>=0&&2*y-r>=0){b[2*x-q][2*y-r]++;}
                            }
                        }
                    }
                }
                flag='.';
            }
            if(flag=='.'){
                if(a[i][j]!='.'){
                    flag=a[i][j];x=i;y=j;
                }
            }
        }
    }
    int ans=0;
    for(int i=0;i<50;i++){
        for(int j=0;j<50;j++){
            if(b[i][j]!=0){ans++;}
        }
    }
    cout<<ans;
}