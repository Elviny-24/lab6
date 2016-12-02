//Класс  множество Set. Дополнительно перегрузить
//следующие операции: ()  конструктор множества (в стиле
//конструктора для множественного типа); +  объединение
//множеств; <=  сравнение множеств; int() мощность
//множества; [] - доступ к элементу в заданной позиции.
#include "stdafx.h"
#include <iostream>
#include "conio.h"
using namespace std;


#pragma once
class Set
{
 int item;
 int *number;
static int size;
 int n2;
 static int *result;
public:
	int operator() (int a)
	{ for(int i=0;i<=a;i++){
	number[i]=rand()%50-20;
	cout<<number[i]<<endl;
	}	
	item=a;
	return item;
	};

	/*int size(Set&m1, Set&m2){
	result = new int[];
	}*/

	friend Set& operator+ (const Set&, const Set&);

	Set(Set &a);

	void getArray(){
	for(int i=0;i<=item;i++)
	cout<<number[i];
	}

	Set(void){
	number=new int[];
	};
	~Set(void){};
};

Set& operator+(const Set &m1,const Set &m2)
	{
		Set s;
		int size=0;
		int i =0;	
			int j=0;
		while(m1.number[i])
		{
		i++;
		}
	while (m2.number[j])
	{
		j++;
	}
	size=i+j;
	int *result=new int[];
	for(int i=0;i<=size;i++)
	{while (m1.number)
	{
	result[i]=m1.number[i];
	i++;
	}
		while(m2.number)
		{
		result[i]=m2.number[i];
		i++;
	}}
	
	return s;
	}


int _tmain(int argc, _TCHAR* argv[])
{

	Set b;
	cout<<b(10)<<endl;
	b.getArray();
	
	system("pause");


	Set prime;
	cout<<prime(4)<<endl;
		system("pause");
	Set odd;
	cout<<odd(3)<<endl;
		system("pause");
		Set result;

 result=prime+odd;

	//b.setNumb();
	//b.getNumb;
	return 0;
}

