public class ASAC{
    static int a=30;
    int b=45;
    public static void main(String[] args){
        System.out.println(ASAC.a);
        ASAC ob=new ASAC();
        ASAC m=new ASAC();
        System.out.println(ob.b);
        m.a=500;
        System.out.println(m.a);
        System.out.println(ASAC.a);
        System.out.println(ob.a);
    }
}
