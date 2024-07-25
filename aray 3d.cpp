#include <iostream>
using namespace std;
int main(){
cout<<"aray 3d\n";
int angka[3][2][3]={{{1,2,3},{2,1,4}},  {{2,3,1},{6,1,7}},  {{4,1,2},{5,6,2}}};
for (int g=0; g<3; g++){
	for (int y=0; y<2; y++){
	for (int p=0; p<3; p++){
	cout<<angka[g][y][p]<<" ";
	} cout<<endl;
} }
cout<<"============================\n";
int a;
cout<<"pake input\n";
for (int h=0; h<3; h++){
	for(int k=0; k<2; k++){
	for (int m=0; m<3; m++){
	cout<<"inputkan indeks=";
	cin>>a;
	cout<<angka[h][k][m]<<endl;
	} 
	}
}
}
