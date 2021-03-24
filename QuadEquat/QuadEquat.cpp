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
        //std::cout << "b: " << b << std::endl;
        a = b - (quad_equat(b, i, j, k) * (b - a)) / (quad_equat(b, i, j, k) - quad_equat(a, i, j, k));
        //std::cout << "a: " << a << std::endl;
    }
    return a;
}

//Метод половинного деления
double pol_del_method(double a, double b, double eps, double i, double j, double k) {
    double result;
    while (fabs(b - a) > eps) {
        double c = (a + b) / 2;
        if (quad_equat(c, i, j, k) * quad_equat(a, i, j, k) < 0) {
            b = c;
            result = b;
        }
        else {
            a = c;
            result = b;
        }
    }
    return result;
}


int main()
{
    //double a, b, c, eps, x1, x2;
    double i = -2, j = 3, k = 1, eps = 0.00001, a = -2, b = 2; //Коэффициенты квадратного уравнения i, j, k; Точность eps; Интервал (a ; b);
    std::cout << hord_method(a, b, eps, i, j, k); //Результат метода ходр

    std::cout << pol_del_method(a, b, eps, i, j, k); //Результат метода половинного деления
}
