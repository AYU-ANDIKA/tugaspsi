#include <iostream>
using namespace std;
int main() {
	//penggunaaan do while
    int x = 1;
    do {
        int y = 1;
        do 
        {cout << y * 10 << " ";
            y++;} 
            while (y <= x);
        cout << endl;
        x++;
    } while (x <= 5);
  x = 5;
    do 
    {int y = 1;
        do 
        {cout << y * 10 << " ";
            y++;}
         while (y <= x);
        cout << endl;
        x--;}
        while (x >= 1);

    return 0;
}
