
class Sample {
    void saySample(){
        Say ins1 = new Say() {
            @Override
            public void hello() {
                System.out.println("This is anonymous class");
            }
        };

        ins1.hello();
    }

}
