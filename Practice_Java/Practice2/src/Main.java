
// ArrayList, Map, Iterator
import java.util.*;

public class Main {

    public static void main(String[] args) {
        List<String> list = new ArrayList<String>();
        Map<String, Integer> weekdays = new HashMap<>();
        ClassSample<String> cs1 = new ClassSample<String>("Dude");

        String str_second = cs1.getT();
        System.out.println(str_second);

        System.out.println("=================================");

        list.add("Hello");
        list.add("world");
        list.add("I am Sho");
        weekdays.put("Monday", 100);
        weekdays.put("Tuesday", 200);
        weekdays.put("Wednesday", 300);


        for (String s: list){
            System.out.println(s);
        }

        System.out.println("=================================");

        Iterator<String> key_itr = weekdays.keySet().iterator();
        while(key_itr.hasNext()){
            String str = (String)key_itr.next();
            System.out.println(str);
        }

        System.out.println("=================================");

        Iterator<Integer> val_itr = weekdays.values().iterator();
        while(val_itr.hasNext()){
            Integer i = (Integer)val_itr.next();
            System.out.println(i);
        }

        System.out.println("=================================");


    }
}
