class Family{
    int age;
    String name;
    String bloodgroup;

    public void display(){
        System.out.println(age);
        System.out.println(name);
        System.out.println(bloodgroup);
    }
    public static void main(String[] args){
        Family father=new Family();
        Family mother=new Family();
        Family myself=new Family();
        Family brother=new Family();

        myself.age=20;
        myself.name="John"; 
        myself.bloodgroup="O+";
        System.out.println("---My Details---");
        myself.display();

        father.age=50;
        father.name="Robert";
        father.bloodgroup="A+";
        System.out.println("---Father's Details---");
        father.display();


        mother.age=48;
        mother.name="Mary";
        mother.bloodgroup="B+";
        System.out.println("---Mother's Details---");
        mother.display();

        brother.age=18;
        brother.name="David";
        brother.bloodgroup="AB+";
        System.out.println("---Brother's Details---");
        brother.display();
    }
}