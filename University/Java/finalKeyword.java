public class finalKeyword {
        final int add(int x,int y){
            return x+y;
        }
        final int add(int x,int y,int z){
            return x+y+z;
        }
    
    public static void main(String[] args) {
        finalKeyword a = new finalKeyword();
        a.add(50,60);
        a.add(10,20,30);
    }
}
