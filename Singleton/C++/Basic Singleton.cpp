#include <iostream>

using namespace std;
class Singlton
{

private :
    static  Singlton* instance ;
    Singlton()
    {
        cout << "Singleton instance Created :) \n" ;
    }
public :
    static Singlton* getInstance ()
    {
        if (instance == nullptr)
        {
            instance = new Singlton() ;
        }
        return instance ;
    }
    void message ()
    {
        cout << "Singleton instance method called \n" ;
    }

};
Singlton * Singlton::instance = nullptr ;
int main()
{
Singlton* s1 = Singlton::getInstance() ;
s1->message() ;
Singlton* s2 = Singlton::getInstance();
s2->message() ;

cout << "Are s1 and s2 the same instance ? " << (s1 == s2 ? "Yes" : "No") << endl ;

}
