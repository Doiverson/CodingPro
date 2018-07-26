
class Product {
    int productID;
    String productName;
    float productPrice;
    String productMadeInCountry;

    public Product(int id, String name, float price, String made  ){
        this.productID = id;
        this.productName = name;
        this.productPrice = price;
        this.productMadeInCountry = made;

        System.out.println("ID : " + productID);
        System.out.println("Name : " + productName);
        System.out.println("Price : " + productPrice);
        System.out.println("Made : " + productMadeInCountry);

    }

    public void test(){

        System.out.println("===========================");
//        System.out.println("This is TEST");
    }
}
