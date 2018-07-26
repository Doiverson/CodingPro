
class Factorial {
    public static void main(String[] args){
        int n = 4;
        if(n<0){
            System.out.println("The number must be more than 0");
        } else {
            System.out.println(n + "! = " + factorial(n));
        }
    }

    static int factorial(int n ){
        int fact =1;
        if(n==0){
            return fact;
        } else {
            for(int i=n; i>0; i--)
                fact *= i;
                return fact;


        }
    }
}
