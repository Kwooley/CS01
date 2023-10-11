#include    <iostream>
using namespace std;

class Sum
{
    private:
        int num1;
        int num2;
        int sum;
    public:
        void    setSum(int, int);
        int     getSum() const; 
};
void Sum::setSum(int n1, int n2)
{
    num1 = n1;
    num2 = n2;
    sum = num1 + num2;
}
int  Sum::getSum() const
{
    return sum;
}

int     main()
{
    Sum s1;
    s1.setSum(10,20);

    cout << "Sum: " << s1.getSum() << "\n";
    return 0;
}