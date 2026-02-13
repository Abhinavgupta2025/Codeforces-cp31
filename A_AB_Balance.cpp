#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = s.length();
        
        if(s[0]!=s[n-1]){
            if(s[0]=='a'){
                s[n-1] = 'a';
            }
            else{
                s[n-1] = 'b';
            }
        }
         cout<<s<<endl;
        }
    
    return 0;
}