#include <iostream>
#include <string>
using namespace std;
int main(){
cout<<"lirik reff cinta terbaik:\n";
string omaga[3][3]={{"meski","ku","bukan"},{"yg","pertama","dihatimu"},{"tapi","cintaku","terbaik untukmu"}};
for (int s=0; s<3; s++){
	for(int b=0; b<3; b++){
	cout<<omaga[s][b]<<" \n";} 
 } cout<<endl;
 cout<<"===================================\n";
 int p;
 for (int a=0; a<3; a++){
 	for (int z=0; z<3; z++){
 	cout<<"masukan indeks untuk memunculkan lirik=";
cin>>p;
cout<<omaga[a][z]<<endl;

	 } }
//perbedaan: string= berupa kata, char=1 karakter

}
