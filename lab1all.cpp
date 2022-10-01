/*My github labs:
https://github.com/infusednoway/labmospolytech
*/

#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    int a, b;
    double x;
   
    setlocale(LC_ALL, "Rus");
    
//1 задание

    cout << "Хайраков Далер Химатджонович, 211-352" << endl;

//2 задание
    
//sizeof(int) - вывод размера типов данных
//min int - минимальное 
//max int - максимальное 

    cout << "Int \t " << sizeof(int) << "\t"
        << "min int \t" << INT_MIN << "\t"
        << "max int \t" << INT_MAX << endl;

    cout << "Int \t " << sizeof(int) << "\t"
        << "min unsigned int \t" << unsigned int(0b100000000000000000000000000000000) << "\t"
        << "max usigned int \t" << UINT_MAX << endl;

    cout << "Int \t " << sizeof(short) << "\t"
        << "min short \t" << SHRT_MIN << "\t"
        << "max short \t" << SHRT_MAX << endl;

    cout << "Int \t " << sizeof(int) << "\t"
        << "min unsigned short \t" << unsigned short int(0b10000000000000000000000000000000) << "\t"
        << "max usigned short \t" << USHRT_MAX << endl;

    cout << "Int \t " << sizeof(int) << "\t"
        << "min long \t" << LONG_MIN << "\t"
        << "max long \t" << LONG_MAX << endl;

    cout << "Int \t " << sizeof(int) << "\t"
        << "min long long \t" << LLONG_MIN << "\t"
        << "max long long \t" << LLONG_MAX << endl;

    cout << "Int \t " << sizeof(int) << "\t"
        << "min double \t" << DBL_MIN << "\t"
        << "max double \t" << DBL_MAX << endl;

    cout << "Int \t " << sizeof(char) << "\t"
        << "min char \t" << CHAR_MIN << "\t"
        << "max char \t" << CHAR_MAX << endl;

    cout << "Int \t " << sizeof(bool) << "\t"
        << "min bool \t" << bool(0b1) << "\t"
        << "max bool \t" << bool(0b0) << endl;

    //3 задание

    cout << "Введите цифру:" << endl;
    cin >> a;
    cout << "\nВ бинарном виде:\t" << bitset<16>(a) << endl;
    cout << "\nВ шестнадцатеричном виде:\t" << hex << a << endl;
    cout << "\nbool:\t" << bool(a) << endl;
    cout << "\nchar:\t" << char(a) << endl;

    //4 задание

    cout << "\nЗадайте a и b:\n";
    cin >> a >> b;
    x = (b * 1.0) / (a * 1.0);
    cout << "x value: " << x << '\n';

    //5 задание

    cout << "\nЗадайте значения a и b отрезка:\t";
    cin >> a >> b;
    x = (a + b) / 2; //Формула
    cout << "Середина отрезка:" << x; //Ответ
    return 0;
}