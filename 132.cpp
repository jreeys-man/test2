#include<bits/stdc++.h>
using namespace std;
char a[10005];
bool f(){
	stack<char>s;
	for(int i=0;i<strlen(a);i++){
		char c=a[i];
		if(c=='(')s.push(c);
		else{
			if(s.empty())return false;
			else s.pop();
		}
	}
	return s.empty();
}
int main(){
	cin>>a;
	if(f())cout<<"YES";
	else cout<<"NO";
} 
