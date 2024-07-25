#include <iostream>
using namespace std;
int main(){
cout<<"\tchar 3d ke 2\n";
char aoa[2][3][3]={{{'a','b','c'},{'d','e','f'},{'g','h','i'}},
	{{'j','k','l'},{'m','n','o'},{'p','q','r'}}};
	
for(int y=0; y<2; y++){
	for(int p=0; p<3; p++){
	for(int r=0; r<3; r++){
	cout<<aoa[y][p][r]<<" ";}cout<<endl; } }
cout<<"\tpake input\n";
int k;
for(int j=0; j<2; j++){
	for(int g=0; g<3; g++){
	for(int f=0; f<3; f++){
	cout<<"masukin huruf=";
	cin>>k;
	cout<<aoa[j][g][f]<<endl;
	} cout<<endl;} }

}
