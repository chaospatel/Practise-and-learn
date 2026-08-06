class Family{
    int age;
    String name;
    String bloodgroup;
    public static void main(String[] args){
        Family father=new Family();
        Family mother=new Family();
        Family myself=new Family();
        Family brother=new Family();

        myself.age=20;
        myself.name="John"; 
        myself.bloodgroup="O+";
        System.out.println("My Details");
        System.out.println(myself.age);
        System.out.println(myself.name);
        System.out.println(myself.bloodgroup);

        father.age=50;
        father.name="Robert";
        father.bloodgroup="A+";
        System.out.println("Father's Details");
        System.out.println(father.age);
        System.out.println(father.name);
        System.out.println(father.bloodgroup);


        mother.age=48;
        mother.name="Mary";
        mother.bloodgroup="B+";
        System.out.println("Mother's Details");
        System.out.println(mother.age);
        System.out.println(mother.name);
        System.out.println(mother.bloodgroup);

        brother.age=18;
        brother.name="David";
        brother.bloodgroup="AB+";
        System.out.println("Brother's Details");
        System.out.println(brother.age);
        System.out.println(brother.name);
        System.out.println(brother.bloodgroup);
    }
}