import java.util.Scanner;

public class Employee {
    static String cname="ABC Company";
    String name;
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Employee e1 = new Employee();
        Employee e2 = new Employee();
        e1.name = "Ravi";
        e2.name = "Priya";
        System.out.println(e1.name);
        System.out.println(e2.name);
        System.out.println(Employee.cname);
        Employee.cname = sc.nextLine();
        System.out.println("Employee 1 Company Name: " + Employee.cname);
        System.out.println("Employee 2 Company Name: " + Employee.cname);
        System.out.println("New Company Name: " + Employee.cname);
    }
    
    
}
