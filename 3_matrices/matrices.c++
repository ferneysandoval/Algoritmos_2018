#include <iostream>
#include <math.h> 	//para pow
#include <time.h>	//para clock
#include <iomanip>	//para std::cout

using namespace std;

int main() {
long int steps =0;
double time;
int n=400;	// tamaño matriz
int answer[n][n];
int unos[n][n];
int dos[n][n];

for(int i=0 ; i < n ; i++){
	for(int j=0 ; j < n ; j++){
		unos[i][j]=1;
		dos[i][j]=2;
	} 	
}
//--------------------------------------------------
//numero de pasos
steps = 2*n + 2*pow(n,2) + 3*pow(n,3) + 1;		//2N+2N^2+3n^3+1
//--------------------------------------------------
// multiplicacion de matrices
clock_t start=clock();       // inicio

for (int fila=0;fila < n ; fila++){										//N + 1
	for(int columna=0;columna<n;columna++){								//(N + 1)* N
		for(int k=0;k<n;k++){											//(N + 1)* N * N
			answer[fila][columna] += unos[fila][k] * dos[k][columna];	//2(N * N * N)
		}	
	}
}
///-------------------------------------------------

cout<<"n: "<<n<<endl;
std::cout << std::fixed;
std::cout << std::setprecision(20);
std::cout << "time for step: "<<(((double)clock()-start)/CLOCKS_PER_SEC)/(double)steps<<endl;
system("pause");
}