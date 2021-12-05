#include    <iostream>
using namespace std;

class A {
    private:
        int     APV;
    protected:
    public:
        int getAPV(void) const {
            return APV;
        }
};

class B : public A {
    private:
        int     BPV;
    protected:
        int     BPT;
    public:
        int getBPV(void) const {
            return BPV;
        }
};

class C : public B {
    private:
        int     CPV;
    public:
        int getCPV(void) const {
            return CPV;
        }
};

int main()
{
    C cinstance;

    cout << cinstance.getAPV() << cinstance.getBPV() << cinstance.getCPV();

}