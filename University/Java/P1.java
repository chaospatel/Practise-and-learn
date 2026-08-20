import java.util.*;
public class P1 {
    int sid,sem;
    double cgpa;
    String sname,dept,spec,rt;
    public void Student(int sid,String sname,String dept,double sem){
        this.sid=sid;
        this.sname=sname;
        this.dept=dept;
    }
    public void displayStudent(){
        System.out.println("ID = "+sid+", Name = "+sname+", Dept = "+dept);
    }
    public void UGS(){
        displayStudent();
        System.out.print(sem);
        System.out.print(cgpa);
    }
    public void PGS(){
        displayStudent();
        System.out.println(spec);
        System.out.println(rt);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        P1 a=new P1();
        String in = sc.next();
        a.sid=sc.nextInt();
        a.sname=sc.next();
        a.dept=sc.next();
        if(in.equals("1")){
            a.sem=sc.nextInt();
            a.cgpa=sc.nextDouble();
            a.UGS();
        }
    }
}
