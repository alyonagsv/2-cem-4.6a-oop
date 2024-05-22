//Для задания 4.4 реализовать перегрузку операций ввода - выводы двумя способами:
//как метод класса, как независимую внешнюю функцию.
//Продемонстрировать выполнение этих операций над объектами типа «вектор».
#include"Vector.h"
#include <iostream>
using namespace std;
// оператор  >> для ввода
istream& operator >> (istream& str, Vector& v)
{
	cout << "method of function" << endl;
	for (int i = 0; i < v.GetSize(); i++)
	{
		int element;
		str >> element;
		v.Set(i, element);
	}
	return str;
}
// оператор  << для вывода
const ostream& operator << ( ostream& str, Vector& v )
{
	cout << "method of function " << endl;
	for (int i = 0; i < v.GetSize(); i++)
		str << v.GetV(i) << setw(5);
	str << endl;
	return str;
}
int main()
{
    setlocale(LC_ALL, "rus");
    Vector v;
    int size;
    cout << "Введите размер вектора " << endl;
    cin >> size;
    v.SetSize(size);
    cout << "перегрузка операции ввода(как метод): ввод"<<endl;
    v>>v;
    cout << "вывод вектора (как метод): " << endl;
    v<<v;

    Vector x;
    int size_x;
    cout << "Введите размер вектора" << endl;
    cin >> size_x;
    x.SetSize(size_x);
    cout << "перегрузка операции ввода(как внешнюю функцию): ввод" << endl;
   // operator>>(cin,x);
    cin >> x;
    cout << "вывод вектора (как внешнюю функцию): " << endl;
   // operator<<(cout,x);
    cout << x;
    return 0;
}
