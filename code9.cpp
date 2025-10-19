#include <iostream>
using namespace std;

int main() {
    int toplamSaniye;
    int saat, deqiqe, saniye;

    cout << "Zehmet olmasa saniye daxil edin: ";
    cin >> toplamSaniye;

   
    saat = toplamSaniye / 3600;

    
    deqiqe = (toplamSaniye % 3600) / 60;

   
    saniye = toplamSaniye % 60;

    cout << "Netice: " << saat << " saat, " << deqiqe << " deqiqe, " << saniye << " saniye." << endl;

    return 0;
}
