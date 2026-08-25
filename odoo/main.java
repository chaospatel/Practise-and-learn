import java.util.*;
class main{
    Scanner sc = new Scanner(System.in);
    String usname, pass;
    String email,cname,name;      //for sign-up
    int pnum;                   //for sign-up
    String url = "jdbc:mysql://localhost:3306/your_database_name";
    String user = "root";       // Your MySQL username
    String password = "password";
    public void login(Scanner sc, String usname,String pass){
        this.usname=usname;
        this.pass=pass;
        System.out.println("------------------------------");
        System.out.println("             LOGIN            ");
        System.out.println("------------------------------");
        System.out.println("Enter your usernsme : ");
        usname=sc.next();
        System.out.println("-------------------------------");
        System.out.println("Enter your password : ");
        pass=sc.next();
    }
    public void singup(Scanner sc, String usname,String pass,String email,String cname,String name,int pnum){
        this.usname=usname;
        this.pass=pass;
        this.email=email;
        this.cname=cname;
        this.name=name;
        this.pnum=pnum;
        System.out.println("------------------------------");
        System.out.println("             SIGN UP          ");
        System.out.println("------------------------------");
        System.out.println("Enter Company Name : ");
        cname=sc.next();
        System.out.println("Enter your name : ");
        name=sc.next();
        System.out.println("Enter your usernsme : ");
        usname=sc.next();
        System.out.println("Enter your phone number : ");
        pnum=sc.nextInt();
        System.out.println("Enter your email : ");
        email=sc.next();
        System.out.println("");
        System.out.println("Enter your password : ");
        pass=sc.next();
    }


}