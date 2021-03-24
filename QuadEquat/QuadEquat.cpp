#include "QuadEquatHeader.h"

int main()
{
    //double i, j, k, eps, a, b; //Коэффициенты квадратного уравнения i, j, k; Точность eps; Интервал (a ; b);

    double i = -2, j = 3, k = 1, eps = 0.00001, a = -2, b = 2; //Коэффициенты квадратного уравнения i, j, k; Точность eps; Интервал (a ; b);
    std::cout << hord_method(a, b, eps, i, j, k); //Результат метода ходр

    std::cout << pol_del_method(a, b, eps, i, j, k); //Результат метода половинного деления
}