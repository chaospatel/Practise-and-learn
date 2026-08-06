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

        father.age=50;
        father.name="Robert";
        father.bloodgroup="A+";

        mother.age=48;
        mother.name="Mary";
        mother.bloodgroup="B+";

        brother.age=18;
        brother.name="David";
        brother.bloodgroup="AB+";

    }
}