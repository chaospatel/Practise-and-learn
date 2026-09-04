abstract class Vehicle {
     String vehicleNumber;
     String brand;

    Vehicle(String vehicleNumber, String brand) {

        if (vehicleNumber == null || vehicleNumber.trim().isEmpty()) {
            throw new IllegalArgumentException("Invalid vehicle number");
        }

        if (brand == null || brand.trim().isEmpty()) {
            throw new IllegalArgumentException("Brand name cannot be empty");
        }

        this.vehicleNumber = vehicleNumber;
        this.brand = brand;
    }

    // Abstract method
    abstract void startEngine();

    // Final method
    final void showVehicleIdentity() {
        System.out.println("Vehicle Number : " + vehicleNumber);
        System.out.println("Brand          : " + brand);
    }
}


// Car subclass
class Car extends Vehicle {

    // Constructor
    Car(String vehicleNumber, String brand) {
        super(vehicleNumber, brand);
    }

    // Implementation of abstract method
    @Override
    void startEngine() {
        System.out.println("Car engine started using the ignition system.");
    }
}


// Bike subclass
class Bike extends Vehicle {

    // Constructor
    Bike(String vehicleNumber, String brand) {
        super(vehicleNumber, brand);
    }

    // Implementation of abstract method
    @Override
    void startEngine() {
        System.out.println("Bike engine started using the self-start/kick mechanism.");
    }
}


// Main class
public class Main {

    public static void main(String[] args) {

        // Creating Car object
        Car car = new Car("KA01AB1234", "Toyota");

        System.out.println("----- CAR DETAILS -----");
        car.showVehicleIdentity();
        car.startEngine();

        System.out.println();

        // Creating Bike object
        Bike bike = new Bike("KA05XY5678", "Honda");

        System.out.println("----- BIKE DETAILS -----");
        bike.showVehicleIdentity();
        bike.startEngine();

        System.out.println();

        // Constructor initialization test
        Vehicle vehicle = new Car("KA09CD9876", "Hyundai");

        System.out.println("----- CONSTRUCTOR TEST -----");
        vehicle.showVehicleIdentity();
        vehicle.startEngine();
    }
}