#include<iostream>
#include<vector>

using namespace std;
class A{
	~A(){
		cout<<"destructor";	
	}
};

int main(){
	vector *v1 = new vector;
	//vector *v2 = new vector;
	return 0;
}
