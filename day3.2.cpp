#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll sum=0;
    int mark=0;
    for(int l=0;l<881;l++){
        char a[100];
        fgets(a,100,stdin);
        int i=0;
        int flag=0;
        int x=0,y=0;
        if(strcmp(a,"dont()\n") == 0){
            mark=1;
        }
        if(strcmp(a,"do()\n")==0){
            mark=0;

        }
        while(a[i]!=','){
            if(a[i]<'0'||a[i]>'9'){flag=1;break;}
            else x=x*10+(int)(a[i]-'0');
            i++;
        }
        i++;
        if(flag==1){continue;}
        else{
            while(a[i]!=')'){
            if(a[i]<'0'||a[i]>'9'){flag=1;break;}
            else y=y*10+(int)(a[i]-'0');
            i++;
            }
            if(flag==1){continue;}
            else{if(mark==0){sum+=x*y;}}
        }
    }
    cout<<sum;
}