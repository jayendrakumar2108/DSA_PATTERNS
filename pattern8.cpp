#include <iostream>
using namespace std;
void print(int n){
	for(int i;i<n;i++){
		char ch='A'+i;
		for(int j=0;j<=i;j++){
			cout<<ch<<" ";
		}
		cout<<endl;
	}
}

int main() {
    int t; 
    cin >> t; 
    for (int i = 0; i < t; i++) {
        int n; 
        cin >> n; 
        print(n);
    }

    return 0;
}

