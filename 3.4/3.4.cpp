#include <iostream>
#include <cmath>

int main() {
    double x, y, R;

    std::cout << "������ �������� x: ";
    std::cin >> x;

    std::cout << "������ �������� y: ";
    std::cin >> y;

    std::cout << "������ �������� R: ";
    std::cin >> R;

    // ����� A
    bool A = (pow(x + R, 2) + pow(y - R, 2) < R * R);

    // ����� B
    bool B = (y <= 0) && (y >= -R) && (x >= 0) && (x <= 2 * R);

    
    if (A || B) {
        std::cout << "Yes" << std::endl;
    }
    else {
        std::cout << "No" << std::endl;
    }

    
    system("pause");

    return 0;
}
