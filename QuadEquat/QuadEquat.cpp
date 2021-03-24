#include <iostream>
#include <cmath>

//Уравнение
double quad_equat(double x, double i, double j, double k) {
    return i * pow(x, 2) + j * x + k;
}

//Метод хорд с итерационной формулой
double hord_method(double a, double b, double eps, double i, double j, double k) {
    while (fabs(b - a) > eps) {
        b = a - (quad_equat(a, i, j, k) * (a - b)) / (quad_equat(a, i, j, k) - quad_equat(b, i, j, k));
        std::cout << "b: " << b << std::endl;
        a = b - (quad_equat(b, i, j, k) * (b - a)) / (quad_equat(b, i, j, k) - quad_equat(a, i, j, k));
        std::cout << "a: " << a << std::endl;
    }
    return a;
}

int main()
{
    //double a, b, c, eps, x1, x2;
    double i = -2, j = 3, k = 1, eps = 0.00001, a = 0, b = 2; //Коэффициенты квадратного уравнения i, j, k; Точность eps; Интервал (a ; b);
    std::cout << hord_method(a, b, eps, i, j, k); //Результат метода Ходр
}
