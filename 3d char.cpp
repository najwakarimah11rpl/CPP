#include <iostream>
using namespace std;
int main (){
cout<<"\taray 3d char\n";
char ciwo[4][3][2]={{{'a','b'},{'c','d'},{'e','f'}}, {{'g','h'},{'i','j'},{'k','l'}},{{'m','n'},{'o','p'},{'q','r'}},
		{{'s','t'},{'u','v'},{'w','x'} }};
for(int po=0; po<4; po++){
	for(int yh=0; yh<3; yh++){
	for(int gtw=0; gtw<2; gtw++){
	cout<<ciwo[po][yh][gtw]<<" "; } } } cout<<endl;

char arr1[4][3][2];
arr1[0][0][0]='a';
arr1[0][0][1]='b';

arr1[0][1][0]='c';
arr1[0][1][1]='d';

arr1[0][2][0]='e';
arr1[0][2][1]='f';

arr1[1][0][0]='g';
arr1[1][0][1]='h';

arr1[1][1][0]='i';
arr1[1][1][1]='j';

arr1[1][2][0]='k';
arr1[1][2][1]='l';

arr1[2][0][0]='m';
arr1[2][0][1]='n';

arr1[2][1][0]='o';
arr1[2][1][1]='p';

arr1[2][2][0]='q';
arr1[2][2][1]='r';

arr1[3][0][0]='s';
arr1[3][0][1]='t';

arr1[3][1][0]='u';
arr1[3][1][1]='v';

arr1[3][2][0]='w';
arr1[3][2][1]='x';
cout<<endl;
cout<<"\ttampilan pake indeks\n";
for(int p=0; p<4; p++){
	for (int h=0; h<3; h++){
	for (int k=0; k<2; k++){
	cout<<ciwo[p][h][k]<<" ";}cout<<endl; } }
	
cout<<"\tpake input\n";
for (int y=0; y<4; y++){
	for(int j=0; j<3; j++){
	for(int d=0; d<2; d++){
	cout<<"masukan abjad pada indeks ke "<<y<<j<<d<<"=";
	cin>>arr1[y][j][d];} } }cout<<endl;
}
