#include <iostream>
#include <bitset>
using namespace std;

#define MASK 0x00000000ffffffff

int main()
{
    {
		unsigned long int a = 15;
		std::string binaryNum = std::bitset<16>(a).to_string();
		std::cout << binaryNum << "\n";

		unsigned long b = std::bitset<16>(binaryNum).to_ulong();
		std::cout << b << "\n\n";
    }

    {
		int a = -5;
		int b = -7;
		signed long long c = a;
        std::bitset<64> c0(c);
        cout << "C0: " << c0 << "\n\n";

        c = c & (MASK);

        std::bitset<32> a1(a);
        std::bitset<32> b1(b);
		std::cout << "A: " << a1 << "\n";
		std::cout << "B: " << b1 << "\n\n";

        cout << "C1: " << c << endl;
        std::bitset<64> c1(c);
        cout << "C1: " << c1 << "\n\n";

		c <<= (sizeof(int) * 8);
		//c <<= 1;
        cout << "C2: " << c << endl;
        std::bitset<64> c2(c);
        cout << "C2: " << c2 << "\n\n";

		c ^= (b & MASK);
        cout << "C3: " << c << endl;
        std::bitset<64> c3(c);
        cout << "C3: " << c3 << "\n\n";
    }

    std::cout << std::endl;
    return 0;
}
