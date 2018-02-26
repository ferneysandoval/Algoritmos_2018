public class Main {

    public static void main(String[] args) {

    //byte,Byte     //overflow >= 89  with  n = 11
    //int,Integer	//overflow >= 2147483647  with  n = 46
    //short,Short 	//overflow >= 32767 with n = 24
    //long,Long   	//overflow >= 7540113804746346429 with n= 92 ,long have size of 8 bytes 

         long x = 1;
         long anterior = 0;
         long temporal;
         int n=0;
        while(true){
            n++;
            System.out.println(x);
            temporal = x;
            x = x + anterior;
            anterior = temporal;
            if(n>100) break;   
        }
       // System.out.println(Long.MAX_VALUE);
    }
}
