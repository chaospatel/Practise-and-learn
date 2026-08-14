public class Vehicle {
    public void display(){
        System.out.println("Vehicle Class-I am a basse class");
    }
    public static void main(String[] args) {
        Vehicle a=new Vehicle();
        car c=new car();
        a.display();
        c.show();  
    }
}
class car extends Vehicle{
        public void show(){
            System.out.println("Car class-I am a sub class");
        }
    }