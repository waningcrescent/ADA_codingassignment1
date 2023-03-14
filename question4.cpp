
#include <bits/stdc++.h>
using namespace std;
 
int sloppyshuffles(string A, string B, int n, int k){
    if (A == B){
        return 1;
    }
    if(n%2==1){
        return 0;}
    if(n%2 == 0){
        string A1 = A.substr(0,n/2);
        string B1 = B.substr(0,n/2);
        string A2 = A.substr(n/2,n/2);
        string B2 = B.substr(n/2,n/2);
    if(A1 == B2 && A2 == B1){
        return 1;}
    /*if(A1 == B1 && sloppyshuffles(A2, B2, n/2, k)){
        return 1;
    } 
    if(A2 == B2 && sloppyshuffles(A1, B1, n/2, k)){
        return 1;
    }   
    if(A1 == B2) && sloppyshuffles(A2, B1, n/2, k)){
        return 1;
    }   
    if(A2 == B1 && sloppyshuffles(A1, B2, n/2, k)){
        return 1;
    }*/
    if(sloppyshuffles(A2, B2, n/2, k) && sloppyshuffles(A1, B1, n/2, k)){
        return 1;}
    if(sloppyshuffles(A1, B2, n/2, k) && sloppyshuffles(A2, B1, n/2, k)){
       return 1; 
    }
    
    else{
        return 0;

    }
}}
 
int main() {
    int k = 0;
    int t;
    cin>>t;
    for(int l=0;l<t;l++){
        int n;
        cin >> n;
        string strA;
        cin >> strA;
        string strB;
        cin >> strB;
        if(sloppyshuffles(strA, strB, n, k) == 1){
            cout << "YES" <<endl;
        }
        else{
            cout << "NO" <<endl;
        }
        }
        
    return 0;
    }
