#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        vector<int> ans;
        for(int i = 0;i<n;i++){
            string row;
            cin>>row;
            for(int j=0;j<4;j++){
                if(row[j]=='#'){
                    ans.push_back(j+1);
                    break;
                }
            }
          
        }
          reverse(ans.begin(),ans.end());
        for(int col:ans){
            cout<<col<<" ";
        }
        cout<<endl;
       
    }
    return 0;
}