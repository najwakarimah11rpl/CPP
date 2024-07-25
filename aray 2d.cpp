#include <iostream>
using namespace std;
int main(){
cout<<"aray 2d omaga"<<endl;
int n[2][3]={{1,2,3},{4,5,6}};
for (int p=0; p<2; p++){ 
	for (int k=0; k<3; k++) {
		cout<<n[p][k]<<" ";
	} cout<<endl;
}
cout<<"============================\n";
int j[2][3];
	j[0][0]=1;
	j[0][1]=2;
	j[0][2]=3;
	j[1][0]=4;
	j[1][1]=5;
	j[1][2]=6;
for (int a=0; a<2; a++){
	for (int f=0; f<3; f++){
		cout<<j[a][f]<<",\n";
	} 
}
cout<<"============================\n";
cout<<"pake input\n";
int q,r[2][3]={{1,2,3},{4,5,6}};
for (int d=0; d<2; d++){ 
	for (int y=0; y<3; y++) {
		cout<<"inputkan angka pada "<<d<<y<<"=";
		cin>>q;} 
} for (int a=0; a<2; a++){
	for (int f=0; f<3; f++){
		cout<<j[a][f]<<",\n";
	} 
}



}
