import java.io.File;
import java.util.Scanner;

class Courses {
    public void run(){
        Scanner scan = new Scanner(new File("the\\dir\\myFile.extension"));
        Scanner keyboard = new Scanner (System.in);
        String user = scan.nextLine();
        String pass = scan.nextLine();

        String inpUser = keyboard.nextLine();
        
    }
}
