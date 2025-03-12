public class SingletonRunnable implements Runnable{
    @Override
    public void run() {
        Singleton s = Singleton.getInstance() ;
        s.message();
    }
}
