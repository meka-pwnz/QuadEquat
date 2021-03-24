#pragma once
#include <iostream>
#include <cmath>


//Прототипы функций

double quad_equat(double x, double i, double j, double k); //Уравнение
double pol_del_method(double a, double b, double eps, double i, double j, double k); //Метод половинного деления
double hord_method(double a, double b, double eps, double i, double j, double k); //Метод хорд с итерационной формулой