// CalcLcm.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <stdlib.h>
#include <math.h>


int main()
{
    int iNum1, iNum2;
    int iVal1, iVal2;
    std::cout << "Input the first integer number\r\n";
    std::cin >> iNum1;
    std::cout << "Input the second integer number\r\n";
    std::cin >> iNum2;
    iVal1 = abs(iNum1);
    iVal2 = abs(iNum2);
    if (iVal1 > 0 && iVal2 > 0)
    {
        int iVal3 = iVal1;
        int iVal4 = iVal2;
        while (iVal1 != iVal2)
        {
            if (iVal1 > iVal2)
            {
                iVal1 -= iVal2;
                iVal3 += iVal4;
            }
            else
            {
                iVal2 -= iVal1;
                iVal4 += iVal3;
            }
        }
        int nLcm = (iVal3 + iVal4) / 2;
        std::cout << "The Lcm of the numbers " << iNum1 << " and " << iNum2
            << " is " << nLcm << "\r\n";
    }
    else
    {
        std::cout << "The numbers should not be equal 0\r\n";
    }
    std::cin.ignore();
    std::cin.get();
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
