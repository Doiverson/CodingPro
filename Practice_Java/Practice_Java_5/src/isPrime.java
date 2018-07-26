import java.util.Scanner;

class isPrime {
    public static void main(String[] srgs){
        Scanner sc = new Scanner(System.in);
        System.out.println("Check if the number is prime number");
        System.out.println("Enter the number");

        int n = sc.nextInt();

        for(int i=2; i<n; i++){
            if(n%i == 0){
             System.out.println(n + " is not prime number");
             return;
            }
        }
        System.out.println(n + " is prime number");
    }
}
