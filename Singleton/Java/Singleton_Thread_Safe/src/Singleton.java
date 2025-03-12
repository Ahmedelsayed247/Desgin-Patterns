class Singleton {
    // Static instance of the class
    private static Singleton instance;
    private static final Object mutex = new Object();

    private Singleton() {
        System.out.println("Singleton instance Created :)");
    }

    public static Singleton getInstance() {
        if (instance == null) {
            synchronized(mutex){
                if(instance == null){
                    instance = new Singleton();

                }
            }
        }
        return instance;
    }

    public void message() {
        System.out.println("Singleton Instance Method Called by thread: " + Thread.currentThread().getId());
    }
}
