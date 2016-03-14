#include <iostream>

using namespace std;

class Fraction
{
private: 
	int Num;
	int Denom;

public:
	void setNumDenom(int x, int y)
	{
				Num = x;
				Denom = y;
	}
	
	int getNum()
	{
		return Num; 
	}
	
	int getDenom()
	{
		return Denom;
	}
	
	Fraction add(Fraction f)
	{
		int LCD = Denom * f.getDenom();
		int new_num = Num * f.getDenom() + f.getNum() * Denom;
		Fraction ans;
		ans.setNumDenom(new_num, LCD);
		//cout << "add" << ans << endl;
		return ans;
	}

	Fraction sub(Fraction f)
	{
		int LCD = Denom * f.getDenom();
		int new_num = Num * f.getDenom() - f.getNum() * Denom;
		Fraction ans;
		ans.setNumDenom(new_num, LCD);
		//cout << "sub" << ans << endl;
		return ans;
	}

	Fraction mul(Fraction f)
	{
		int CN = Num * f.getNum();
		int CD = Denom * f.getDenom();
		Fraction ans;
		ans.setNumDenom(CN, CD);
		//cout << "mul" << ans << endl;
		return ans;
	}

	Fraction div(Fraction f)
	{
		int dn = Num * f.getDenom();
		int dd = Denom * f.getNum();
		Fraction ans;
		ans.setNumDenom(dn, dd);
		//cout << "div" << ans << endl;
		return ans;
	}

	void display()
	{
		if (Num < Denom)
		{
			cout << Num << "/" << Denom << endl;
					}
		else
		{
			int p;
			int a;
			p = Num / Denom;
			a = Num % Denom;
			cout << p << " " << a << "/" << Denom << endl;
		}

	}
};
int main()
{
	int x;
	int y;
	int w;
	int z;

	cout << "Numertor of number 1" << endl;
	cin >> x;
	cout << "Denominator of number 1" << endl;
	cin >> y;

	cout << "Numertor of number 2" << endl;
	cin >> w;
	cout << "Denominator of number 2" << endl;
	cin >> z;

	Fraction f1;
	Fraction f2;
	Fraction f3;
	
	f1.setNumDenom(x, y);
	f2.setNumDenom(w, z);


	f3 = f1.add(f2);
	cout << "addition is: ";
	f3.display();

	f3 = f1.sub(f2);
	cout << "subtraction is: ";
	f3.display();

	f3 = f1.mul(f2);
	cout << "multiplication is: ";
	f3.display();

	f3 = f1.div(f2);
	cout << "division is: ";
	f3.display();

	system("pause");
	return 0;
}