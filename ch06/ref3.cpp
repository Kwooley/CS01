#include<iostream> 
using namespace std; 

int &retaddr() 
{ 
	static int x = 10; 
	return x; 
} 
int main() 
{ 
	retaddr() = 30; 
	cout << retaddr() << endl; 
	return 0; 
} 

