
 class Main {
    public static void main(String[] args) {
        Singlton s1 = Singlton.getInstance();
        Singlton s2 = Singlton.getInstance();

        s1.message();
        s2.message();

        System.out.println("Are s1 and s2 the same instance ?  " + (s1 == s2 ?"Yes" : "false"));
    }
}