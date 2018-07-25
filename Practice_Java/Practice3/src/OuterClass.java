
class OuterClass {
    private String str = "OuterClassの変数";

    class InnerClass {
        public void innerSample() {
            System.out.println(str);
        }
    }
}
