#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define PI 3.1415926535
#define loop(i,a,b) for(int i=a;i<b;i++)
#define all(vect) vect.begin(), vect.end()
#define rall(vect) vect.rbegin(), vect.rend()
#define nl endl
#define mod 1000000007
#define size 130
//Helper functions syntax and prototypes for reference

// str.substr(pos, len) to create a substring from position pos of length len

// we can compare two strings in c++

//c++ has min(a,b) and max(a,b) functions

//void swap(a, b) swaps two variables

//cout << setprecision(7); to set the precision of output

//sort(all(vect)) to sort in ascending order
//sort(rall(vect)) to sort in descending order

//User defined structs we can defin our own comparison operators

//lower_bound(arr,arr+n,x) returns a pointer to the first array element whose value is at least x.
//upper_bound(arr. arr+n, x) returns a pointer to the first array element whose value is larger than x.
//equal_range returns both above pointers.

//to erase only one occurence of a element occuring many times in a multiset, use s.erase(s.find(ele))

//to access the element to which a set points to is done by using *iterator .

//use getline(cin, stringname) to input a string with spaces
bool even(ll a);
bool odd(ll a);

// Comparator function
bool comp (int a, int b); 


//Function to compare arrays
bool compareArrays(int arr1[], int size1, int arr2[], int size2);

//Funct to find gcd
ll gcd(ll a, ll b);

//To find modulus of exponentiation and modular inverse of a number
long long modpower(int a, int b, int p);
long long modInverse(int a, int p);

//Decimal to binary
string DecimalToBinary(int num);



// Actual Implementations:


bool compareArrays(int arr1[], int size1, int arr2[], int size2) {
    if (size1 != size2) {
        return false; // Arrays of different sizes can't be equal
    }
    return equal(arr1, arr1 + size1, arr2);
}

ll gcd(ll a, ll b) {
    while (b != 0) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long modpower(int a, int b, int p){
    long long result = 1;
    long long mult = a%p;
    while (b>0){
        if (b%2==1){
            result=((result%p)*(mult%p))%p;
        }
        b/=2;
        mult= ((mult%p)*(mult%p))%p;
    }
    result %= p;
    return result;
}
long long modInverse(int a, int p){
    return modpower(a, p-2, p);
}



bool even(ll a){
    if (a%2 == 0){
        return true;
    }
    return false;
}

bool odd(ll a){
    if (a%2 == 1){
        return true;
    }
    return false;
}

// Comparator function
bool comp (int a, int b) {
  return a > b;
}

string DecimalToBinary(int num)
{
    string str;
      while(num){
      if(num & 1) // 1
        str+='1';
      else // 0
        str+='0';
      num>>=1; // Right Shift by 1  
    }    
      return str;
}

//Actual solution
void code(){

}

//Invoking test cases
void test(int t){
    while (t--){
        code();
    }
}


//main
int main(){
    string s1[size];
    loop(i,0,size){
        cin >> s1[i];
    }
    
    int initialr;
    int initialc;
    
    loop(i,0,size){
        loop(j,0,size){
            if (s1[i][j] == '^'){
                initialr =  i;
                initialc = j;
            }
        }
    }
    int ans = 0;
    loop(i,0,size){
        loop(j,0,size){
            cout << i << " " << j << nl;
            int currr, currc;
            currr=initialr;currc=initialc;
            string s[size];
            loop(k,0,size){
                s[k] = s1[k];
            }
            s[i][j] = '#';
    char currpoint = 'n';
    int matrix[size][size] = {0};
    string dirn[size][size] = {""};
    int max = 5*130*130;
    while (max--){
        if (matrix[currr][currc] == 1){
            int flag = 0;
            loop(z,0,dirn[currr][currc].length()){
                if (currpoint == dirn[currr][currc][z]){
                    flag = 1;
                }
            } if (flag){ans++;
            break;}
        }
        matrix[currr][currc] = 1;
        dirn[currr][currc] += currpoint;
        if (currpoint == 'n'){
            if (currr == 0){
                break;
            }
            else{
                if (s[currr-1][currc] != '#') currr--;
                else currpoint = 'e';
            }
        }
        if (currpoint == 's'){
            if (currr == size-1){
                break;
            }
            else{
                if (s[currr+1][currc] != '#') currr++;
                else currpoint = 'w';
            }
        }
        if (currpoint == 'e'){
            if (currc == size-1){
                break;
            }
            else{
                if (s[currr][currc+1] != '#') currc++;
                else currpoint = 's';
            }
        }
        if (currpoint == 'w'){
            if (currc == 0){
                break;
            }
            else{
                if (s[currr][currc-1] != '#') currc--;
                else currpoint = 'n';
            }
        }       
    }
        }
    }


    cout<<ans;
}
