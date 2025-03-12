
#include<bits/stdc++.h>
using namespace std;
class Singlton
{

private :
    static  shared_ptr<Singlton> instance;
    static mutex mutx;  // Mutex for thread safety
    Singlton()
    {
        cout << "Singleton instance Created:)\n" ;
    }
public :
    static shared_ptr<Singlton> getInstance ()
    {
        lock_guard<mutex> lock(mutx);
        if (instance == nullptr)
        {
            instance = shared_ptr<Singlton>(new Singlton()) ;
        }
        return instance ;
    }
    void showMessage()
    {
       cout << "Singleton Instance Method Called by thread: "
                  << this_thread::get_id() << "\n";
    }


};
void runThread ()
{
    shared_ptr<Singlton> s = Singlton::getInstance() ;
    s->showMessage();

}
shared_ptr<Singlton> Singlton::instance = nullptr ;
mutex Singlton::mutx ;
int main()
{
    thread t1 (runThread);
    thread t2 (runThread) ;
    thread t3 (runThread) ;

    t1.join();
    t2.join();
    t3.join();


}
