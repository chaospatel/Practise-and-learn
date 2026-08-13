class BankAccount{
    String name;
    long number;
    String actype;
    double balance;
    BankAccount(String name,long number,String type,double balance){
        this.name=name;
        this.number=number;
        actype=type;
        this.balance=balance;
    }
    public static void main(String[]args){
        BankAccount cus1=new BankAccount("ABC",546789,"Saving",10000);
        System.out.println(cus1.name);
        System.out.println(cus1.number);
        System.out.println(cus1.actype);
        System.out.println(cus1.balance);
        BankAccount cus2=new BankAccount("DEF",32154768,"Current",158100);
        System.out.println(cus2.name);
        System.out.println(cus2.number);
        System.out.println(cus2.actype);
        System.out.println(cus2.balance);
    }
}