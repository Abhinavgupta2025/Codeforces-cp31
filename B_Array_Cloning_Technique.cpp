#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        long long count = 1;
        long long maxfreq = 1;
        for(int i=1;i<n;i++){
            if(arr[i]==arr[i-1]){
                count++;
                maxfreq = max(maxfreq,count);
            }
            else{
                maxfreq = max(maxfreq,count);
                count = 1;
            }
        }
        long long operations = 0;
        while(maxfreq<n){
            operations++;//cloning;
            if(maxfreq*2<=n){
                operations+= maxfreq;
                maxfreq*=2;
            }
            else{
                operations+= n-maxfreq;
                maxfreq = n;
            }
        }
        cout<<operations<<endl;
    }
    return 0;
}