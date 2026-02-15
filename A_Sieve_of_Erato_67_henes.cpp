#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        bool flag1 = false;
        bool flag2 = false;
        for(int i=0;i<n;i++){
            if(arr[i]==67){
                flag1 = true;
            }
            if(arr[i]==1){
                flag2 = true;
            }
        }
        if(flag1 && flag2)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}