#include <iostream>
#include <string>

int main() {
    std::string str;
    std::cout << "문자열 입력>>"; std::cin >> str;

    auto len = str.length();
    while (len--) {
        for (auto i = 0; i < str.length() - len; i++)
            std::cout << str[i];
        std::cout << std::endl;
    }
    return 0;
}
