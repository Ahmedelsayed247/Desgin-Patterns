public class Singlton {
    private static Singlton instance = null ;

    private Singlton () {
        System.out.println("Singlton instance Created! ");
    }

    public static Singlton getInstance (){
        if(instance == null) {
            instance = new Singlton() ;
        }
        return instance ;
    }
    public void message () {
        System.out.println("Singleton instance is Called ");
    }

}
