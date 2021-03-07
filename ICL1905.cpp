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
		int n,a;
		cin>>n>>a;
		
		ll c[n],d[n];
		for (int i=0;i<n;i++){
			cin>>c[i]>>d[i];
		}

		ll max_profit=0;
		for (int i=0;i<n;i++){
			ll fuel=0;
			ll maxi=d[i];
			ll mini=d[i];
			for (int j=i;j<n;j++){
				fuel+=c[j];
				maxi = max(maxi, d[j]) ;
                mini = min(mini, d[j]) ;
				ll gap=(maxi-mini)*(maxi-mini);
				ll res=a*(j-i+1)-fuel-gap;
				max_profit=max(res,max_profit);
				//cout<<max_profit<<endl;


			}
		}
		cout<<max_profit<<endl;
	}
	
}
