#include<iostream>
#include<vector>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        int count = 0;
        for(int i=1;i<n;i++){
            if(nums[i]+ nums[i-1]==7 || nums[i] == nums[i-1]){
                i++;
                count++;
            }
        }
        cout<<count<<endl;

    }
}