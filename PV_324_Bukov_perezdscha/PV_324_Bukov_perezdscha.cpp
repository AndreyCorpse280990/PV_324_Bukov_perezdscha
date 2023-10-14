#include <iostream>
#include <cmath>

class Point 
{
public:
    double x, y;

    // Метод для вычисления расстояния до указанной точки
    double distanceTo(const Point& other) const 
    {
        double dx = x - other.x;
        double dy = y - other.y;
        return sqrt(dx * dx + dy * dy);
    }
};

int main() 
{
    setlocale(LC_ALL, "rus");
    Point p1{ 1.0, 2.0 };
    Point p2{ 4.0, 6.0 };

    double dist = p1.distanceTo(p2);
    std::cout << "Расстояние между точкой 1 и точкой 2: " << dist << std::endl;

    return 0;
}
