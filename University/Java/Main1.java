interface printable{
    void print();
}
interface showable{
    void show();
}
class demo implements printable,showable{
    public void print(){
        System.out.println("printable");
    }
    public void show(){
        System.out.println("showing");
    }
}
public class Main1{
    public static void main(String[] args) {
        demo a = new demo();
        a.print();
        a.show();
    }
    
}