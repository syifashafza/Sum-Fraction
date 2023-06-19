#include <iostream>
using namespace std;

double sum(int n) {
    if (n == 1) {
        cout << "1";
        return 1;
    } else if (n % 2 == 0) {
        double jumlah = -(1.0 / n) + sum(n-1);
        cout << " - " << "1/" << n ;
        return jumlah;
    } else {
        double jumlah = 1.0 / n + sum(n-1);
        cout << " + " << "1/" << n ;
        return jumlah;
    }
}

int main() {
    int n;
    cout << "Masukkan n: ";
    cin >> n;
    double hasil = sum(n);
    cout << " adalah " << hasil << endl;
    return 0;
}

