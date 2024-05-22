#include <iostream>
#include <bitset>
#include <string>

int main(int argc, char *argv[]) {
    if(argc != 3 || std::string(argv[1]).substr(0, 2) != "--") {
        std::cout << "false" << std::endl;
        return 1;
    }

    std::string binary = argv[2];
    if(binary.empty() || binary.size() % 8 != 0) {
        std::cout << "false" << std::endl;
        return 1;
    }

    for (size_t i = 0; i < binary.size(); i += 8) {
        std::bitset<8> bits(binary.substr(i, 8));
        std::cout << static_cast<char>(bits.to_ulong());
    }
    std::cout << std::endl;

    return 0;
}