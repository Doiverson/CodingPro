
import java.io.File;
import java.util.Scanner;


class Courses {
    public void run(){
        Scanner scan = new Scanner(new File("the\\dir\\myFile.extension"));
        Scanner keyboard = new Scanner (System.in);
        String user = scan.nextLine();
        String pass = scan.nextLine();

        String inpUser = keyboard.nextLine();
        String inpPass = keyboard.nextLine();

        if(inpUser.equals(user) && inpPass.equals(pass)){
            System.out.print("your login message");
        } else {
            System.out.print("your error message");
        }
    }
}


