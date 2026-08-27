
import java.util.*;

public class Practicum {

    String sname, dept, spec, rt;
    int sid, sem;
    double cgpa;

    Practicum(String sname, String dept, String spec, String rt, int sid, int sem, double cgpa) {
        this.sname = sname;
        this.dept = dept;
        this.sid = sid;
        this.sem = sem;
        this.cgpa = cgpa;
        this.spec = spec;
        this.rt = rt;
    }

    // No-arg constructor to allow default instantiation
    Practicum() {
        this.sname = "";
        this.dept = "";
        this.spec = "";
        this.rt = "";
        this.sid = 0;
        this.sem = 0;
        this.cgpa = 0.0;
    }

    public void disCom() {
        System.out.println("ID = " + sid
                + " , Name = " + sname
                + " , Dept = " + dept);
    }

    public void disUG() {
        System.out.print("Semester = " + sem
                + " , CGPA = " + cgpa);
    }

    public void disPG() {
        System.out.print(" , Specialization = " + spec
                + " , ResearchTopic = " + rt);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Practicum a = new Practicum();
        int input = sc.nextInt();
        if (input == 1) {
            a.sid = sc.nextInt();
            a.sname = sc.next();
            a.dept = sc.next();
            a.sem = sc.nextInt();
            a.cgpa = sc.nextDouble();
            a.disCom();
            a.disUG();
        } else if (input == 2) {
            a.sid = sc.nextInt();
            a.sname = sc.next();
            a.dept = sc.next();
            a.spec = sc.next();
            a.rt = sc.next();
            a.disCom();
            a.disPG();
        } else if (input == 3) {
            a.sid = sc.nextInt();
            a.sname = sc.next();
            a.dept = sc.next();
            a.disCom();
        }

    }
}
