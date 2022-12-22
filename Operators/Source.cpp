#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

//#define ARITHMETICAL_OPERATORS // 1) Арифметический оператор
//#define ASSIGNMENT_OPERATOR    // 2) Оператор присваивания = 
//#define INCREMENT_DECREMENT   // 3) Increment/Decrement(++/--)
//#define COMPOUND_ASSIGNMENTS  // 4) Составные присваивания
//#define COMPARISON_OPERATORS  // 5) Операторы сравнения

void main()
{
	setlocale(LC_ALL, "Rus");
#ifdef ARITHMETICAL_OPERATORS 
	cout << "Hello Operators" << endl;
	3;
	-3; // Unary minus
	8 - 3; //Binary minus
	8 * 3; //Binary asterisk
	//*3; //Have no sense!!!
	cout << 5 / 17 << endl;
	cout << 5. / 17 << endl;
	cout << 5 % 17 << endl;
	cout << 17. / 5 << endl;
	cout << 17 % 5 << endl;
#endif // ARITHMETICAL_OPERATOR
#ifdef ASSIGNMENT_OPERATOR
	int a, b, c;
	a = b = c = 0;
	cout << a << "\t" << b << "\t" << c << endl;
#endif // ASSIGNMENT_OPERATOR

#ifdef INCREMENT_DECREMENT
	int i = 0;
	++i; //Prefix increment
	i++; //Postfix increment
	--i; //Prefix decrement
	i--; //Postfix (Suffix) decrement
	int j = ++i;
	cout << i << endl;
	cout << j << endl;
#endif
#ifdef COMPOUND_ASSIGNMENTS

	int a = 2;
	int b = 3;

	//a = a + b;   a += b;
	//a = a - b;   a -= b;
	//a = a * b;   a *= b;
	//a = a % b;   a %= b;

	a + b; // Oператор + просто возвращает сумму
	a += b; //Оператор += возвращает сумму и сохраняет ее в операнд слева
	a + b; //Оператор "сложить"
	a += b; //Оператор "прибавить"
	a - b; //Оператор "вычесть"
	a -= b; //Оператор "отнять"
#endif // COMPOUND_ASSIGNMENT

	cout << (!true == false) << endl;


}