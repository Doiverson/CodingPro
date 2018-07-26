class ApplicationDriver {
    public static void main(String[] args){
    Object ob = new Object(110, "Diet", 2, "USA");
//    ob.test();

    Drink dr = new Drink(412, "Pepsi", 2, "USA");
    dr.drink(false,150);

    Drink dr2 = new Drink(183, "Ginger Zero", 3, "Canada");
    dr2.drink(true,200);

    Food fd = new Food(100, "Chicken", 8, "Canada");
    String ing[]= {"Chicken", "Oil", "Cheese" };
    fd.food(350, 4,  ing);
    }
}