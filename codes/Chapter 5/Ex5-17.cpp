#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> v1{0, 1, 1, 2}, v2{0, 1, 1, 2, 3, 5, 8};
	bool flag = true;
	for ( decltype(v1.size()) i = 0; i < v1.size(); ++i ){
		if ( v1[i] != v2[i] ) {
			flag = false;
			break;
		}
		else continue;
	}
	if ( flag ) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}