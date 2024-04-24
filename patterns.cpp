#include <iostream>
using namespace std;
void print1() {
	for(int i=0; i<4;i++){
		for(int j=0;j<4;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}
int main(){
	print1();
}


#include <iostream>
using namespace std;
void print1(int n) {
	for(int i=0; i<4;i++){
		for(int j=0;j<4;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}
int main(){
	int n;
	cin>>n;
	print1(n);
}
