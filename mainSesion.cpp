#include <iostream>
#include<cstring>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int salario,cc,bono;
	string password;
	cout <<"Digite su contraseña :";
	cin >>password;
	if (password=="Yeimy01"){
	cout <<"Digite su salario :";
	cin >>salario;
	cout <<"Digite su #CC :";
	cin >>cc;
	bono=salario+((salario*20)/100);
	cout <<"Su bono es " <<bono;
	}else {
	cout <<"Error **** ";
	}
	
	
	return 0;
}
