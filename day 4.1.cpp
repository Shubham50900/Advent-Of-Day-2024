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
    char c[5];
    for(int i=0;i<140;i++){
        for(int j=0;j<140;j++){
            if(a[i][j]=='X'){
                for(int k=0;k<4;k++){
                    c[k]=a[i+k][j];
                    if(i+k>139){flag=1;break;}
                }
                if(strcmp(c,"XMAS")==0&&flag==0){ans++;}
                flag=0;
                for(int k=0;k<4;k++){
                    c[k]=a[i-k][j];
                    if(i-k<0){flag=1;break;}
                }
                if(strcmp(c,"XMAS")==0&&flag==0){ans++;}
                flag=0;
                for(int k=0;k<4;k++){
                    c[k]=a[i][j+k];
                    if(j+k>139){flag=1;break;}
                }
                if(strcmp(c,"XMAS")==0&&flag==0){ans++;}
                flag=0;
                for(int k=0;k<4;k++){
                    c[k]=a[i][j-k];
                    if(j-k<0){flag=1;break;}
                }
                if(strcmp(c,"XMAS")==0&&flag==0){ans++;}
                flag=0;
                for(int k=0;k<4;k++){
                    c[k]=a[i+k][j+k];
                    if(i+k>139||j+k>139){flag=1;break;}
                }
                if(strcmp(c,"XMAS")==0&&flag==0){ans++;}
                flag=0;
                for(int k=0;k<4;k++){
                    c[k]=a[i-k][j-k];
                    if(i-k<0||j-k<0){flag=1;break;}
                }
                if(strcmp(c,"XMAS")==0&&flag==0){ans++;}
                flag=0;
                for(int k=0;k<4;k++){
                    c[k]=a[i-k][j+k];
                    if(j+k>139||i-k<0){flag=1;break;}
                }
                if(strcmp(c,"XMAS")==0&&flag==0){ans++;}
                flag=0;
                for(int k=0;k<4;k++){
                    c[k]=a[i+k][j-k];
                    if(j-k<0||i+k>139){flag=1;break;}
                }
                if(strcmp(c,"XMAS")==0&&flag==0){ans++;}
                flag=0;
            }
        }
    }
    cout<<ans<<endl;
}