#include<iostream>
#include<vector>
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
            int n;
            cin>>n;
            vector<int> nums(n,0);
            for(int i=0;i<n;i++){
                cin>>nums[i];
            }
             for(int i=0;i<n/2;i++){
                if(i+2<n && nums[i]>=nums[(i)+2]){
                    swap(nums[i],nums[i+2]);
                }
             }
             for(int i=0;i<n;i++){
             }
             bool flag = false;
             for(int i=1;i<n;i++){
                if(nums[i]<nums[i-1] || nums[i]==nums[i-1] || nums[i]>n){
                    flag = true;
                    break;
                }
             }
             if(!flag) cout<<"YES"<<endl;
             else cout<<"NO"<<endl;
        }
}