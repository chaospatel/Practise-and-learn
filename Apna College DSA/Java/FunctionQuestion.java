import java.util.*;
public class FunctionQuestion {
    static Scanner sc =new Scanner(System.in);
    public static void q1(int a,int b,int c){
        int av=a+b+c;
        System.out.println(av/3);
    }
    public static void q2(int n){
        int a=0;
        for(int i=1;i>=n;i++){
            System.out.println(i);
            if (i/2!=0){
                a++;
            }
        }
        System.out.println(a);
    }
    public static void q3(int a,int b){
        if(a>b){
            System.out.println(a);
        }
        else{
            System.out.println(b);
        }
    }
    public static void q4(int r){
        System.out.println((2*3.14*r));
    }
    public static void q5(int age){
        if(age>18){
            System.out.println("You are eligible");
        }
    }
    public static void q6(){
        do{
            System.out.println("Hi");
    }while(true);
    }
    public static void q7(int a) {
        for(int i=0;i>=a;i++){
            int e=0,f=0,g=0;
            System.out.println("Enter a Number : ");
            int d=sc.nextInt();
            if(d>0){e++;}
            else if(d<0){f++;}
            else{g++;}
            System.out.println("Positive Number Count : "+e);
            System.out.println("Negative Number Count : "+f);
            System.out.println("Zero Count : "+g);
        }
    }
    public static void q8(int n,int x){
        System.out.println(Math.pow(x,n));
    }
    public static void q9(int n1,int n2){
        while(n1 != n2) { 
           if(n1>n2) {
               n1 = n1 - n2;
           } else {
               n2 = n2 - n1;
           }
       }
       System.out.println("GCD is : "+ n2);
   }
   public static void q10(int n){
     int a = 0, b = 1;
       System.out.print(a+" ");
       if(n > 1) {
           //find nth term
           for(int i=2; i<=n; i++) {
               System.out.print(b+" ");
               //the concept below is called swapping
               int temp = b;
               b = a + b;
               a = temp;
           }
           System.out.println();
       }
   }
    public static void main(String[] args) {
        
    }
    
}
