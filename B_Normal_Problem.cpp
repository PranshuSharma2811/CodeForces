#include<bits/stdc++.h>
using namespace std;

string solve(string str){
    
    string newStr;
    for (char c : str) {
        if (c == 'p') {
            newStr += 'q';
        } else if (c == 'q') {
            newStr += 'p';
        } else {
            newStr += c;
        }
    }
   string reversedStr(newStr.rbegin(), newStr.rend());
    return reversedStr;


}

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        string str;
        cin>>str;
        cout<<solve(str)<<endl;
    }
    
}