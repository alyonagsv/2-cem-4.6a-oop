//��� ������� 4.4 ����������� ���������� �������� ����� - ������ ����� ���������:
//��� ����� ������, ��� ����������� ������� �������.
//������������������ ���������� ���� �������� ��� ��������� ���� �������.
#include"Vector.h"
#include <iostream>
using namespace std;
// ��������  >> ��� �����
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
// ��������  << ��� ������
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
    cout << "������� ������ ������� " << endl;
    cin >> size;
    v.SetSize(size);
    cout << "���������� �������� �����(��� �����): ����"<<endl;
    v>>v;
    cout << "����� ������� (��� �����): " << endl;
    v<<v;

    Vector x;
    int size_x;
    cout << "������� ������ �������" << endl;
    cin >> size_x;
    x.SetSize(size_x);
    cout << "���������� �������� �����(��� ������� �������): ����" << endl;
   // operator>>(cin,x);
    cin >> x;
    cout << "����� ������� (��� ������� �������): " << endl;
   // operator<<(cout,x);
    cout << x;
    return 0;
}
