#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
	string tn;
	vector<string> teams;
	cin>>tn;
	while(tn!="Q"){
		teams.push_back(tn);
		cin>>tn;
	}
	int n = teams.size();
	if(n>=3 && n<=12){	
		cout<<"TOTAL MATCHES: "<<(n*(n-1))/2<<endl;
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(teams[i]!=teams[j])
					cout<<teams[i]<<"-VS-"<<teams[j]<<endl;
			}
		}
	}
	return 0;
}
