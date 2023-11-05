// oop calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
using namespace std;
class Calculator
{
    public:
	float a, b;

	void ADD(float a, float b)
	{
			float res = 0;
			res = a + b;
			cout << a << "+" << b << "=" << res << endl;
	}
	void SUBTRACT(float a, float b)
	{  
			float res = 0;
			res = a - b;
			cout << a << "-" << b << "=" << res << endl;
	}
	void MULTIPLY(float a, float b)
	{
			float res = 0;
			res = a * b;
			cout << a << "*" << b << "=" << res << endl;
	}
	void  DIVISION(float a, float b)
	{
			float res = 0;
			res = a / b;
			cout << a << "/" << b << "=" << res << endl;
	}
	void PERCENTAGE(float a, float b)
	{
			float res = 0;
			res = a / b * 100;
			cout << "Percentage =" << res <<"%"<< endl;
	}

};
		int main()
		{
			Calculator c;
			cout << "Welcome to Calculator" << endl;
			char e = '0';
			cout << "do you want to perform any operation then press y if no then press n" << endl;
			cin >> e;
			if (e == 'y')
			{
				while (e != 'n')
				{
					float a, b = 0;
					char oper = '0';
					cout << "Enter first number" << endl;
					cin >> a;
					cout << "Enter second number" << endl;
					cin >> b;
					cout << "Enter operator" << endl;
					cin >> oper;
					if (oper == '+')
					{
						c.ADD(a, b);
					}
					else if (oper == '-')
					{
						c.SUBTRACT(a, b);
					}
					else if (oper == '*')
					{
						c.MULTIPLY(a, b);
					}
					else if (oper == '/')
					{
						c.DIVISION(a, b);
					}
					else if (oper == '%')
					{
						c.PERCENTAGE(a, b);
					}
					char ar = '0';
					cout << "do you want to quit" << endl;
					cin >> ar;
					if (ar == 'y')
					{   
						cout << "Thanks for using!" << endl;
						break;
					}
					else (ar == 'n');
					{
						continue;
					}
				}
			}
			else
			cout << "Thanks for using!" << endl;
			system("pause");
			return 0;
		}