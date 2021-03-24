#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    const int N=100;
    int cnt=0, num[N], sum=0;
    ifstream ifs;

    ifs.open("file1.txt");
    if (!ifs){
        cout << "Open Error\n";
        exit(0);
    }
    while(ifs>>num[cnt]){
        sum += num[cnt];
        cnt++;
    }
    cout << "cnt" << cnt << endl;
    for(int i=0;i<cnt;i++){
        cout << num[i] << endl;
    }
}