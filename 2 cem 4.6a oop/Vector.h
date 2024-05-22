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

	Vector(); // ����������� ��� ����������
	Vector(int new_v, int new_size);  // �������� ������ const char*, not char*
	Vector(const Vector& change);  // �����������
	Vector(Vector&& change);   // ����������� 

	~Vector() {};

	void fill();  // ���������� � ����������
	void print(); //const;  // ����� �� ����� 
	void Size(int b);//������� ����������� �������
	int GetIndex(int i);//��������� �������� ������� �� ��������� �������, � ��������� ������ �� ������� ����������� �������
	void SetIndex(int i);//��������� �������� �������� ������� �� ��������� �������, � ��������� ������ �� ������� ����������� �������
	void Set(int i, int x);// ���� �������� ��������� � �������� i 
	void SetSize(int c);
	int GetV(int i);
	int GetSize();
};
