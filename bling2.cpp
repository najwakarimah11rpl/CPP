#include <iostream>
using namespace std;
int main() {
for (int a=1; a<=5; a++){
	for (int s=1; s<=a; s++)
	cout<<"*";
	cout<<endl;
}
//kanan
for (int y=5; y>=1; y--){
	for (int p=1; p<=5; p++)
	if (p >= y) {
		cout <<"*";
	} else{
		cout<<" ";
	}
	cout << endl;
}



	
	
	
	
	
	
	
	
	
}
