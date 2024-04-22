#include <iostream>
using namespace std;

class bangunDatar {
private:
	float panjang, Lebar;
public:
	float Luas;

	void input() {
		cout << "Masukkan Panjang = ";
		cin >> panjang;
		cout << "Masukkan Lebarnya = ";
		cin >> Lebar;
	}
	float hitungLuas() {
		return panjang * Lebar;
	}
};
int main()
{
    
}

