
public class Main {
    public static void main(String[] args){
        // OuterClass.java
        OuterClass oc = new OuterClass();
        OuterClass.InnerClass ic = oc.new InnerClass();
        ic.innerSample();

        // OuterClass2.java
        OuterClass2.InnerClass ic2 = new OuterClass2.InnerClass();
        ic2.innerSample();

        // Sample.java
        Sample show = new Sample();
        show.saySample();
    }
}
