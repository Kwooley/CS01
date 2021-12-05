
#include		<iostream>
#include        <cstdlib>
#include        <ctime>
#include        <vector>
#include        <numeric>
using namespace	std;
void    makevector(vector<int> &);
void    printvector(vector<int>);
void    find5(vector<int>);
void    split(vector<int>);
int 	main()
{
        vector<int>   number;
        makevector(number);
        printvector(number);
        find5(number);
        split(number);

}
void    makevector(vector<int> &vec)
{
        int size;
        srand(time(0));
        do{
            size = rand() % 20;
        } while(size < 10);
        for(int i=0;i<size;i++){
            vec.push_back(rand()%100+1);
        }
}
void    find5(vector<int> vec){
        vector<int>::iterator it;
        it = find(vec.begin(), vec.end(), 5);
        if ( it != vec.end()){
            cout << "Found at poistion index " << it-vec.begin() << endl;
        }
        else
            cout << "Not found: This vector does not have the value 5\n";
}
void    split(vector<int> vec)
{
        vector<int>::iterator it;
        vector<int> split1;
        vector<int> split2;
        int avg = accumulate(vec.begin(), vec.end(), 0) / vec.size();
        sort(vec.begin(), vec.end());
        for(it=vec.begin(); it != vec.end(); it++){
            if ( avg > *it)
                split1.push_back(*it);
            else
                split2.push_back(*it);

        }
        cout << "Average value " << avg << endl;
        cout << "Sorted vector : " ;
        printvector(vec);
        cout << "Split vector 1: " ;
        printvector(split1);
        cout << "Split vector 2: " ;
        printvector(split2);
}
void    printvector(vector<int> vec)
{
        cout << "Vector Size : :" << vec.size() << endl;
        for(int v: vec)
            cout << v << "\t";
        cout << endl;
}
