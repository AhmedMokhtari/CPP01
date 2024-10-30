#include <iostream>

using namespace std;

class alo{
    private :
    public :
        static int a;

        static void printl(int a)
        {
            cout << "value of a is " << alo::a << endl;
        }
};
int alo::a = 1;
int main()
{
    alo::printl(55);
    cout << alo::a << endl;
    return 0;
}