#include <iostream>
using namespace std;
int main(){
cout<<"aray 2d pake char\n";
char cina[4][3]={{'a','b','c'},{'d','e','f'},{'g','h','i'},{'j','k','l'}};
cout<<"tampilan aray 2d 4 baris 3 kolom\n";
for (int n=0; n<4; n++){
	for (int u=0; u<3; u++){
		cout<<cina[n][u]<<" ";
	} cout<<endl;
} 
cout<<"============================\n";
cout<<"pake input\n";
char om,cina2[4][3];
for (int p=0; p<4; p++){
	for (int q=0; q<3; q++){
		cout<<"inputkan pada "<<p<<q<<"=";
		cin>>om;
		
	} 
}
for (int p=0; p<4; p++){
	for (int q=0; q<3; q++){
	cout<<cina2[p][q]<<" ";
	} cout<<endl;

}
}
