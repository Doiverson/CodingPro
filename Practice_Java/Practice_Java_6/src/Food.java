import java.lang.reflect.Array;

class Food extends Product{
    int foodCalorie;
    int foodSize;
    String foodIngredients;

    public Food(int id, String name, float price, String made){
        super(id, name, price, made);
    }

    public void food(int calorie, int foodsize, String ing[]) {
        this.foodCalorie = calorie;
        this.foodSize = foodsize;

        System.out.println("Calorie : " + foodCalorie);
        System.out.println("Size of food : " + foodSize);

        for(int i=0; i<ing.length; i++) {
            this.foodIngredients = ing[i];
            System.out.println("Ingredients : " + foodIngredients);
        }


    }
}
