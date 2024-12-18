#include<iostream>
using namespace std;

int solve(int n){
    int a;
    int b;
    int count = 0;
    for(a =1;a<n;a++){
        for(b=1;b<n;b++){
            if(a+b==n){
                count++;
            }
        }
    }
    return count;
}

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<solve(n)<<endl;

    }
}