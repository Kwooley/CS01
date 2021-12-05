#include    <iostream>
using namespace std;


class Insect {
    public:
        int     categoryID;
        string  categoryName;
};

class Grasshopper : public Insect {  //* Inherited from Base Class Insect
    public:
        int     ghID;
        int     numberofwings;
};

int main()
{
    Grasshopper  gh; 

    //* Member Variables in Derived Class
    gh.ghID = 100;
    gh.numberofwings = 2;

    //* Member Variables in Base Class
    gh.categoryID = 0;
    gh.categoryName = "Orthoptera";

    // 
    Insect insect;
    //* class instance insect can acess only its own member data.
    insect.categoryID = 0;
    insect.categoryName = "NULL";
}