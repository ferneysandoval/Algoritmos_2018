#include <stdlib.h>
#include <iostream>

using namespace std;

int main(){

//int			//overflow >= 2147483647  with  n = 46
//short int		//overflow >= 32767 with n = 24
//unsigned int	//overflow >= 4294967295 with n= 46
//long int 		//overflow >= 2147483647 with n = 46
unsigned long int x = 1;   //overflow >= 4807526976 with n= 47

unsigned long int anterior = 0;
unsigned long int temporal;
unsigned long int i=0;
while( true ){
	temporal = x;
	x = x + anterior;
	anterior = temporal;
	cout<<x<<","<<anterior<<","<<temporal<<endl;
	if(x >= 2147483647) break;
}
system("pause");  
}
