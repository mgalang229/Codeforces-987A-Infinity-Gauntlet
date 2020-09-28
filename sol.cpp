#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	string s[n];
	for(int i=0; i<n; ++i)
		cin >> s[i];
	map<string, string> mp;
	mp["purple"]="Power", mp["orange"]="Soul";
	mp["green"]="Time", mp["red"]="Reality";
	mp["blue"]="Space", mp["yellow"]="Mind";
	int cnt=0;
	for(auto x : mp) {
		bool ok=0;
		for(int i=0; i<n; ++i)
			if(s[i]==x.first)
				ok=1;
		if(!ok)
			cnt++;
	}
	cout << cnt << "\n";
	for(auto x : mp) {
		bool ok=0;
		for(int i=0; i<n; ++i)
			if(s[i]==x.first)
				ok=1;
		if(!ok)
			cout << x.second << "\n";
	}
}
