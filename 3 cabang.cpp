#include <iostream>
using namespace std;
int main(){
cout<<"masukan nilai=";
int a;
cin>>a;
if (a>9 && a<90){
	cout<<"A";
}
else if (a>80){
	cout<<"B";
}
else if (a>70){
	cout<<"C";
}
else if (a>60){
	cout<<"D";
}
else {
	cout<<"nilai tidak valid";
}
}
