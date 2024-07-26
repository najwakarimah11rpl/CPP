#include <iostream>
using namespace std;
int main(){
cout<<"\ttampilan array 3 dimensi char\n";
char ok[4][3][2]={{{'a','b'},{'c','d'},{'e','f'}},{{'g','h'},{'i','j'},{'k','l'}},{{'m','n'},{'o','p'},{'q','r'}},
	{{'r','s'},{'t','u'},{'v','w'}}};
for(int y=0; y<4; y++){
	for (int h=0; h<3; h++){
	for(int j=0; j<2; j++){
	cout<<ok[y][h][j]<<" ";
	} cout<<endl;
	} cout<<endl;}
	
	
cout<<"\tnilai kelulusan\n";
int p;
cout<<"masukan nilai=";
cin>>p;
if(p>70){
	cout<<"lulus";
} else if(p<70){
	cout<<"tidak lulus";}
else{ cout<<"nilai tidak terdektesi";
}

/cout<<"\tsegitiga kanan atas pake input\n";
int k=0;,p=0;
cout<<"=";
cin>>k;
for (int y=5; y>=1; y--){
	for (int p=1; p<=5; p++)
	if (p >= y-p) {
		cout <<"*";
	} else{
		cout<<" ";
	}
	
	
cout<<"\t segitiga kiri bawah\n";
int j;
cin>>j;
	for (int a=1; a<=j; a++){
	for (int s=1; s<=a; s++)
	cout<<"*";
	cout<<endl;*/
}
 


