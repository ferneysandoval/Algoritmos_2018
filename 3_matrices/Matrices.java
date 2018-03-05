public class Matrices {
    public static void main(String[] args) {
        double steps = 0;
        int n = 40;
        int[][]a= new int[n][n];
        int[][]b= new int[n][n];
        int[][]answer= new int[n][n];
        double time_start;

       for(int i=0 ; i < n ; i++){
            for(int j=0 ; j < n ; j++){
                    a[i][j]=1;
                    b[i][j]=2;
            }
       }
       //--------------------------------------------------
        //numero de pasos
        steps = 2*n + 2*n*n + 3*n*n*n+ 1;		//2N+2N^2+3n^3+1
        //--------------------------------------------------
        time_start=System.currentTimeMillis();
        for (int fila=0;fila < n ; fila++){
            for(int columna=0;columna<n;columna++){
                    for(int k=0;k<n;k++){
                        answer[fila][columna] += a[fila][k] * b[k][columna];	
                    }
            }
        }
        System.out.println("n: "+n);
        System.out.printf("time for step: %.20f",((System.currentTimeMillis()-time_start)/1000)/steps);
    }     
}
