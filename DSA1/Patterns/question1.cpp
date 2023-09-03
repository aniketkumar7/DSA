// Q1. What will happen if we use cin inside the if as a condition?

#include <iostream>
using namespace std;

int main()
{
    int n;
    
    if(cin >> n){
        cout << "Ani" << endl;
    }
}

// This will always print "Ani" for all the values because cin will always return true.