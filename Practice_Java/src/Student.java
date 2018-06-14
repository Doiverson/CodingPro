public class Student {
    String firstname;
    String lastname;
    String stID;
    float gpa;

    public Student(){
        firstname = "Shosuke";
        lastname = "Doi";
        stID = "116150";
        gpa = 100;
    }

    public void course(){
        System.out.println(firstname);
        System.out.println(lastname);
        System.out.println(stID);
        System.out.println(gpa);
        return;
    }

}


