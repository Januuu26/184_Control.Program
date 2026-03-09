#include <iostream>
using namespace std;

int main() {
    int x = 10;

    srand(time(0));
    x = rand() % 10;

    if (x==5) {
        x = x+1;
        cout<<"nilai x dikoreksi menjadi "<<x<<endl;
    }


}