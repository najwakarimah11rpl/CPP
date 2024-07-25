#include <iostream>
using namespace std;
int main(){
cout<<"\taray 3d penjumlahan\n";
int a[2][4][3]={{{2,4,7},{8,3,4},{5,8,7},{1,3,5}},
	{{7,6,3},{4,5,3},{2,3,},{5,7,4}}};
int b[2][4][3]={{{5,8,1},{9,4,6},{1,2,3},{2,4,6}},
	{{2,4,5},{5,6,7},{2,8,9},{4,1,7}}};
	
cout<<"angka 3d 1=\n";
for (int y=0; y<2; y++){
	for(int h=0; h<4; h++){
	for (int g=0; g<3; g++){
	cout<<a[y][h][g]<<" ";} cout<<endl; } cout<<endl; }
cout<<"============================\n";
cout<<"angka 3d 2=\n";
for (int p=0; p<2; p++){
	for(int q=0; q<4; q++){
	for(int r=0; r<3; r++){
	cout<<b[p][q][r]<<" ";} cout<<endl;} cout<<endl; }
	
cout<<"============================\n";
cout<<"angka 3d1 + angka 3d2=\n";
for(int s=0; s<2; s++){
for (int y=0; y<4; y++){
	for(int q=0; q<3; q++){
	cout<<a[s][y][q] + b[s][y][q]<<" ";
	} cout<<endl;} 
	cout<<endl;
	}
	
}
