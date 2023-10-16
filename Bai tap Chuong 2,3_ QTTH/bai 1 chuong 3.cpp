#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout << "Nhap vao so n: ";
    cin >> n;

    int count = 0;
    for (int i = 1; i <= n; i += 2) {
        cout << i << " ";
        count++;
        if (count == 15) {
            cout << endl;
            count = 0;
        }
    }

    return 0;
}
