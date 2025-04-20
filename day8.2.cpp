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
                                for(int z=1;(z*q-(z-1)*x<50&&z*r-(z-1)*y<50&&z*q-(z-1)*x>=0&&z*r-(z-1)*y>=0);z++){b[z*q-(z-1)*x][z*r-(z-1)*y]++;}
                                for(int z=1;(z*x-(z-1)*q<50&&z*y-(z-1)*r<50&&z*x-(z-1)*q>=0&&z*y-(z-1)*r>=0);z++){b[z*x-(z-1)*q][z*y-(z-1)*r]++;}
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