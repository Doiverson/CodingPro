
class OuterClass2 {
    private static String str = "OuterClass2の変数";

    static class InnerClass {
        public void innerSample() {
            System.out.println(str);
        }
    }
}
