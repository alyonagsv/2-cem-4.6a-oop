#include<iostream>
#include<iomanip>
#include<fstream>
#include"Vector.h"
using namespace std;

istream& Vector:: operator >>( Vector& v)
{
	cout << "overload as a method of class" << endl;
	//v.fill();
	istream& str = cin;
	for (int i = 0; i < v.GetSize(); i++)
	{
		int element;
		str >> element;
		v.Set(i, element);
	}
	return str;
}
ostream& Vector:: operator << (Vector& v)const
{
	cout << "overload as a method of class" << endl;
	// v.print();
	ostream& str = cout;
	for (int i = 0; i < v.GetSize(); i++)
		str << v.GetV(i) << setw(5);
	str << endl;
	return str;
}

void Vector::Set(int i,int x)
{
	v[i] = x;
}
void Vector::SetSize(int g)
{
	size = g;
}
int  Vector::GetV(int i)
{
	return v[i];
}
int  Vector::GetSize()
{
	return size;
}


Vector::Vector()   // конструктор без параметров
{
	size = 50;
	v[size] = 0;
}

Vector::Vector(int new_v, int new_size)  // заданными 
{
	this->size = new_size;
	for (int i = 0; i < size; i++)
	{
		this->v[i] = new_v;;

	}
}

Vector::Vector(const Vector& change)  // копировани€
{
	this->size = change.size;
	for (int i = 0; i < size; i++)
	{
		this->v[i] = change.v[i];
	}
}

Vector::Vector(Vector&& change) // перемещени€ 
{
	this->size = change.size;
	for (int i = 0; i < size; i++)
	{
		this->v[i] = change.v[i];
	}
	for (int i = 0; i < size; i++)
	{
		change.v[i] = NULL;
	}

	change.v[size] = NULL;
	change.size = NULL;
}

void Vector::fill() // заполнение с клавиатуры 
{
	cout << "–азмер: ";
	cin >> this->size;
	cin.ignore();

	for (int i = 0; i < size; i++)
	{
		cout << "«начени€: ";
		cin >> this->v[i];
	}
	cout << endl;
}

void  Vector::print() //const // вывод на экран слова
{
	for (int i = 0; i < size; i++)
		cout << this->v[i] << setw(5);
	cout << endl;
}

void Vector::Size(int b)
{
	size = b;
}

int Vector::GetIndex(int i)
{
	//cout << "get through index v[i] " << this->v[i] << endl;
	return this->v[i];
}

void Vector::SetIndex(int i)
{
	if (i < size && i >= 0)
	{
		cin >> v[i];         //ввод определенного элемента вектора с данным индексом
	}
}


