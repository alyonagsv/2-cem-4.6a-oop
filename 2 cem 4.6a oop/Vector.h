#pragma once
#include <iostream>
#include <iomanip>
using namespace std;
class Vector
{
	int v[50];
	int size;
public:

	istream& operator >>( Vector& v);
	ostream& operator << (Vector& v)const;

	Vector(); // конструктор без параметров
	Vector(int new_v, int new_size);  // заданным словом const char*, not char*
	Vector(const Vector& change);  // копирования
	Vector(Vector&& change);   // перемещения 

	~Vector() {};

	void fill();  // заполнения с клавиатуры
	void print(); //const;  // вывод на экран 
	void Size(int b);//задания размерности вектора
	int GetIndex(int i);//получения элемента вектора по заданному индексу, с контролем выхода за пределы размерности вектора
	void SetIndex(int i);//занесения значения элемента вектора по заданному индексу, с контролем выхода за пределы размерности вектора
	void Set(int i, int x);// ввод значения элементов с индексом i 
	void SetSize(int c);
	int GetV(int i);
	int GetSize();
};
