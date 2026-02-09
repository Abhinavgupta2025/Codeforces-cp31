#include<iostream>
#include<vector>
using namespace std;

int main()
{
	long long test;
	cin >> test;
	while (test--)
	{
		string s, t;
		cin >> s >> t;

		int n = s.size();
		int m = t.size();

		// Create a frequency vector to count occurrences of each letter in t
		vector<int> arr(26, 0);
		for (int i = 0; i < m; i++)arr[t[i] - 'A']++;
        for(int i=n-1;i>=0;i--){
            char a = s[i]-'A';
            if(arr[a]>0){
                arr[a]--;
            }
            else{
                s[i] = '.';
            }
        }
        string ans = "";
        for(int i=0;i<n;i++){
            if(s[i]!='.'){
                ans+=s[i];
            }
        }
        if(t==ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
   }
   return 0;
}  

// Time Complexity (TC): O(n+m) = O(30)
// Space Complexity (SC): O(n+m+26+m) = O(n+m) = O(30)
