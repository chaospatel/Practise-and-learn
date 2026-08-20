import java.util.*;
public class main{
    public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    String MissionType=sc.next();
    sc.nextLine();
    String MissionName=sc.next();
    int year=sc.nextInt();
    String destination=sc.next();
    int rover=sc.nextInt();
    main a=new main();
    if (MissionType.equals("Mars")){
        a.Mars();  
    }
    else {
        a.Moon();
    }
    }
    
    public void Mars(){
        
        System.out.println("Mission Name: " + this.MissionName);
        System.out.println("Launch Year: " + year);
        System.out.println("Destination: " + destination);
        System.out.println("Mission Type: Mars Exploration");
        System.out.println("Number of Rovers: " + rover);
    }
    public void Moon(){
        System.out.println("Mission Name: " + MissionName);
        System.out.println("Launch Year: " + year);
        System.out.println("Destination: " + destination);
        System.out.println("Mission Type: Lunar Exploration");
        System.out.println("Number of Rovers: " + rover);
    }
    
    }       

