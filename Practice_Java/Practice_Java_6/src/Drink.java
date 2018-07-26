
class Drink extends Product{
    boolean isDrinkDiet;
    int drinkSize;

    public Drink(int id, String name, float price, String made){
        super(id, name, price, made);
    }

    public void drink(boolean diet, int size) {
        this.isDrinkDiet = diet;
        this.drinkSize = size;

        if (isDrinkDiet == true) {
            System.out.println("Diet : YES");
        } else {
            System.out.println("Diet : NO");
        }

        System.out.println("Size : " + drinkSize);
        System.out.println("===========================");
    }
}
