#include<bits/stdc++.h>
using namespace std;

int main(){
    char temp[130][130];
    int x=48,y=85;
    int ans=1,count=0; 
    for(int i=0;i<130;i++){
        cin>>temp[i];
    }
    cout<<"registered"<<endl;
    for(int p=0;p<130;p++){
        for(int q=0;q<130;q++)
        {
            char a[130][130];
            for(int i=0;i<130;i++){
                for(int j=0;j<130;j++){
                    a[i][j]=temp[i][j];
                }
            }
            int b[130][130][4];
            for(int i=0;i<130;i++){
                for(int j=0;j<130;j++){
                    for(int k=0;k<4;k++){b[i][j][k]=0;}
                }
            }
    if(a[p][q]=='.'){
        cout<<p<<" "<<q<<endl;
        a[p][q]='#';
        int x=48,y=85;
    char flag='u';
    while(flag!='e'){   
        
        if(flag=='u'){
            for(int i=x;i>=0;i--){
                if(b[i][y][0]){count++;flag='e';break;}
                if(a[i][y]=='.'){a[i][y]='x';b[i][y][0]++;ans++;}
                if(i==0){flag='e';break;}
                
                if(a[i-1][y]=='#'){
                    flag='r';
                    x=i;
                    break;
                }
                
            }
        }
        if(flag=='r'){
            for(int i=y;i<=129;i++){
                if(b[x][i][1]){count++;flag='e';break;}
                if(a[x][i]=='.'){a[x][i]='x';b[x][i][1]++;ans++;}
                if(i==129){flag='e';break;}
                
                if(a[x][i+1]=='#'){
                    flag='d';
                    y=i;
                    break;
                }
            }
        }
        if(flag=='d'){
            for(int i=x;i<=129;i++){
                if(b[i][y][2]){count++;flag='e';break;}
                if(a[i][y]=='.'){a[i][y]='x';b[i][y][2]++;ans++;}
                if(i==129){flag='e';break;}
                
                if(a[i+1][y]=='#'){
                    flag='l';
                    x=i;
                    break;
                }
            }
        }
        if(flag=='l'){
            for(int i=y;i>=0;i--){
                if(b[x][i][3]){count++;flag='e';break;}
                if(a[x][i]=='.'){a[x][i]='x';b[x][i][3]++;ans++;}
                if(i==0){flag='e';break;}
                
                if(a[x][i-1]=='#'){
                    flag='u';
                    y=i;
                    break;
                }
            }
        }    
    }}}}
    cout<<count;
}