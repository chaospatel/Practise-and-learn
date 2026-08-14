public class animal {
    public void display(){
        System.out.println("Animal Class-I am a basse class");
    }
    public static void main(String[] args) {
        cat c=new cat();
        animal a=new animal();
        c.show();
        a.display();
        System.out.println("Hello World");  
    }
}
class cat extends animal{
        public void show(){
            System.out.println("cat class-I am a sub class");
        }
    }
    
    
