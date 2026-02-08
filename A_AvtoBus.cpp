#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long wheels;
        cin>>wheels;
        if(wheels<4 || wheels%2==1){
            cout<<-1<<endl;
            continue;
        }
        long long maxwheels = wheels/4;
        long long minwheels = (wheels + 5)/6;
        cout<<minwheels<<" "<<maxwheels<<endl;
    }₹
    return 0;
}