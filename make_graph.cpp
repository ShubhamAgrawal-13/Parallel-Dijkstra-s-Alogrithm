#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = 1e9+7;

int main(){
	int p, n, m;
	cin>>p>>n>>m;
	int a[n][n];
	memset(a, 0, sizeof a);
	for(int i=0; i<m; i++){
		int u, v, w;
		cin>>u>>v>>w;
		a[u-1][v-1]=w;
		a[v-1][u-1]=w;
	}
	int count=0;
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n-1; j++){
			if(a[i][j]!=0){
				count++;
				cout << i+1 << " " << j+1 << " " << a[i][j] << "\n";
			}
		}
	}
	cout << count << endl;
	return 0;
}
