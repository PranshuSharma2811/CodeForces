#include<bits/stdc++.h>
using namespace std;



int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int c = 0;
        int minc = INT16_MAX;
        for(int i =a;i<=b;i++){
            c = (i-a)+(b-i);
            if(c<minc){
                minc = c;
            } 
        }
        cout<<minc<<endl;
    }
    return 0;
}