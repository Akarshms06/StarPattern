#include <iostream>
using namespace std;

int main() {
    int n = 5; 

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {

            if (i==n-2 && j==5)
                cout << " ";
            else if(j==1 || i==n-2 || i==1|| i==n)
                cout << "*";
        else 
             cout<<" ";
        }
        cout << endl; 
    }

    return 0;
}
