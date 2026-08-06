class AmazonProduct {
    int productId;
    String productName;
    double price;

    public void setProductDetails(){
        productId=101;
        productName="Wireless Mouse";
        price=899.50;
    }
    public void display(){
        System.out.println("Amazon Product Details");
        System.out.println("Product ID: " + productId);
        System.out.println("Product Name: " + productName);
        System.out.println("Price: " + price);
    }
    public static void main(String[] args){
    AmazonProduct product1=new AmazonProduct();
    product1.setProductDetails();
    product1.display();
    }
}
