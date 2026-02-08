#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> v(n,0);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int count = 0;
        bool flag = false;
        for(int i=n-2;i>=0;i--){
                while(v[i]>=v[i+1]){
                   v[i] = v[i]/2;
                   count++;
                   if(v[i]==0) break;
                }
                if(v[i]==0 && v[i+1]==0){
                    cout<<-1<<endl;
                    flag = true;
                    break;
                }
        }
        if(!flag)cout<<count<<endl;
       
    }
}
