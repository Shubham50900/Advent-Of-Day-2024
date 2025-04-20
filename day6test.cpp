#include<bits/stdc++.h>
using namespace std;

int main(){
    char a[10][10];
    int x=6,y=4;
    for(int i=0;i<10;i++){
        cin>>a[i];
    }
    int b[10][10];
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            b[i][j]=0;
        }
    }
    int ans=1,count=0;  
    char flag='u';
    while(flag!='e'){
        if(flag=='u'){
            for(int i=x;i>=0;i--){
                if(a[i][y]=='x'){b[i-1][y]=1;}
                if(a[i][y]=='.'){a[i][y]='x';ans++;}
                
                if(i==0){flag='e';break;}
                
                if(a[i-1][y]=='#'){
                    flag='r';
                    x=i;
                    break;
                }
                
            }
        }
        if(flag=='r'){
            for(int i=y;i<=9;i++){
                if(a[x][i]=='x'){b[x][i+1]=1;}
                if(a[x][i]=='.'){a[x][i]='x';ans++;}
                
                if(i==9){flag='e';break;}
                if(a[x][i+1]=='#'){
                    flag='d';
                    y=i;
                    break;
                }
            }
        }
        if(flag=='d'){
            for(int i=x;i<=9;i++){
                if(a[i][y]=='x'){b[i+1][y]=1;}
                if(a[i][y]=='.'){a[i][y]='x';ans++;}
                
                if(i==9){flag='e';break;}
                
                if(a[i+1][y]=='#'){
                    flag='l';
                    x=i;
                    break;
                }
            }
        }
        if(flag=='l'){
            for(int i=y;i>=0;i--){
                if(a[x][i]=='x'){b[x][i-1]=1;}
                if(a[x][i]=='.'){a[x][i]='x';ans++;}
                
                if(i==0){flag='e';break;}
                
                if(a[x][i-1]=='#'){
                    flag='u';
                    y=i;
                    break;
                }
            }
        }
        
        
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(b[i][j]==1){count++;cout<<i<<j<<endl;}
        }
    }
    cout<<ans<<endl;
    cout<<count;
}