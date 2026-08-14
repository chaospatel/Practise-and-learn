public class Vehicle {
    String brand;
    int speed;
    public void displayVehicle(){
        System.out.println("Main Class displayVehicle");
    }
    public void startEngine(){
        System.out.println("Main Class startVehicle");
    }
    public static void main(String[] args) {
        Vehicle a=new Vehicle();
        car c=new car();
        a.displayVehicle();
        a.startEngine();
        c.displayCar();
        c.horn();
    }
}
class car extends Vehicle{
    String model;
    int price;
        public void displayCar(){
            System.out.println("Sub-Main Class displayCar");
        }
        public void horn(){
            System.out.println("Sub-Main Class horn");
        }
    }