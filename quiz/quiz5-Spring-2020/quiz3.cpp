
#include    <iostream>
using namespace std;

int     countword(string, string);
int main()
{
    int     cnt;
    string txt( "The Python 2 language was officially discontinued in 2020  \
          first planned for 2015 \
          and Python 2.7.18 is the last Python 2.7 release  \
          and therefore the last Python 2 release. \
          No more security patches or other improvements will be released for it. \
          With Python 2s end-of-life, only Python 3.5.x and later are supported.");
          
    cnt = countword("Python", txt);
    cout << "The count of word " << cnt << endl;
}
int countword(string keyword, string txt)
{
    int found, start, count=0;
    start = 0;
    while( ((found = txt.find(keyword, start)) != string::npos))
    {
            count += 1;
            cout << "found " << found << " " <<  txt.substr(found, 6) << endl;
            start =found + 1;
    }
    return count;
}

