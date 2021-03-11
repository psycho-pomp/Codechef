#include <bits/stdc++.h>
using namespace std;

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
#define ll long long int 
int main(){
	
	fastio;
	int t;
	cin>>t;
	while(t--){
		int n,q;
		cin>>n>>q;
		int arr[n+1];
		int forward[n+1],backward[n+2];
		forward[0]=0;
		backward[n+1]=0;
		for (int i=1;i<=n;i++){
			cin>>arr[i];
			forward[i]=__gcd(forward[i-1],arr[i]);
		}
		for (int i=n;i>=1;i--){
			backward[i]=__gcd(backward[i+1],arr[i]);

		}
		while(q--){
			int l,r;
			cin>>l>>r;
			cout<<__gcd(forward[l-1],backward[r+1])<<endl;

		}
	}
	
}
