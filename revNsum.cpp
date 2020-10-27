#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
	int n;
	string num,rev;
	cin>>n;
	num = to_string(n);
	for(int i=num.length()-1;i>=0;i--){
		rev = rev+num[i];
	}
	int sum=0,r;
	while(n!=0){
		r = n%10;
		sum+=r;
		rev = rev*10+r;
		n/=10;
	}
	cout<<"Reverse: "<<rev<<endl;
	cout<<"sum: "<<sum;
}
