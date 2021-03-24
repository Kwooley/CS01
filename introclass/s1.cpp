#include    <iostream>
using namespace std;

class DayofYear
{
    private:
        int     month;
        int     day;
    public:
        DayofYear(int month, int day): month(month), day(day) { }
        void set(int month, int day);
        void set(int month);
        int getDay();
        int getMonth();
};

void DayofYear::set(int m)
{
    month = m;
}
void DayofYear::set(int m, int d)
{
    month = m;
    day = d;
}
int DayofYear::getDay()
{
    return day;
}
int DayofYear::getMonth()
{
    return month;
}
int main()
{
    DayofYear d1(10,20);
    d1.set(10,13);
    cout << d1.getDay() << "\n";
    return 0;
}