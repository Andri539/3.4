#include <iostream>
#include <cmath>

int main() {
    double x, y, R;

    std::cout << "¬вед≥ть значенн€ x: ";
    std::cin >> x;

    std::cout << "¬вед≥ть значенн€ y: ";
    std::cin >> y;

    std::cout << "¬вед≥ть значенн€ R: ";
    std::cin >> R;

    // ”мова A
    bool A = (pow(x + R, 2) + pow(y - R, 2) < R * R);

    // ”мова B
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
