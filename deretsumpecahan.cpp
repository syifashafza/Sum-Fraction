#include <iostream>
using namespace std;

double sum(int n) {
    if (n == 1) {
        return 1;
       
    } else if (n % 2 == 0) {
        return -(1.0 / n) + sum(n-1);
        
    } else {
        return 1.0 / n + sum(n-1);
    }
    
}

int main() {
    int n;
    cout<<"masukkan n: ";
    cin>>n;
    double hasil = sum(n);
   	cout <<"hasilnya  : "<< hasil << endl;
    return 0;
}

