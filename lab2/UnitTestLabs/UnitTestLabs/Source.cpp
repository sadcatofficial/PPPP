#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;
string toString(int a)
{
	stringstream mynewstream;
	mynewstream << a;
	return mynewstream.str();
}
string prg(double a, double b, double c, double d, double e, double f)
{
	string ans;
	//double a, b, c, d, e, f;

	//cin >> a >> b >> c >> d >> e >> f;

	if ((a == 0) && (b == 0) && (c == 0) && (d == 0) && (e == 0) && (f == 0))

	{

		cout << '5';
		ans = "5\0";
		return(ans);

	}

	else if ((a * d - c * b != 0) && ((e * d - b * f != 0) || (a * f - c * e != 0)))

	{

		double y = (a * f - c * e) / (a * d - c * b);

		double x = (d * e - b * f) / (d * a - b * c);

		cout << "2 " << x << ' ' << y;
		ans = "2 " + toString(x) +  " " + toString(y)+"\0";
		return(ans);
	}

	else if (((a * d - c * b == 0) && ((e * d - b * f != 0) || (a * f - c * e != 0))) ||

		(a == 0 && c == 0 && e / b != f / d) ||

		(b == 0 && d == 0 && e / a != f / c) ||

		(a == 0 && b == 0 && c == 0 && d == 0 && (e / f > 0)))

	{

		if (((a == 0 && b == 0 && e == 0 && d != 0 && c == 0) ||

			(c == 0 && d == 0 && f == 0 && b != 0 && a == 0)))

		{

			double y;

			if (b == 0)

				y = f / d;

			else if (d == 0)

				y = e / b;

			else if (e == 0 || f == 0)

				y = 0;

			cout << '4' << ' ' << y;
			ans = "4 " + toString(y) + "\0";
			return(ans);
		}

		else if (((a == 0 && b == 0 && e == 0 && c != 0 && d == 0) ||

			(c == 0 && d == 0 && f == 0 && a != 0 && b == 0)))

		{

			double x;

			if (a == 0)

				x = f / c;

			else if (c == 0)

				x = e / a;

			else if (e == 0 || f == 0)

				x = 0;

			cout << '3' << ' ' << x;
			ans = "3 " + toString(x) + "\0";
			return(ans);
		}

		else

			cout << '0';
			ans = "0\0";
		return(ans);
	}

	else if (a == 0 && c == 0)

	{

		double y;

		if (e == 0)

			y = f / d;

		else if (f == 0)

			y = e / b;

		else

			y = e / b;

		cout << '4' << ' ' << y;
		ans = "4 " + toString(y) +"\0";
		return(ans);
	}

	else if (b == 0 && d == 0)

	{

		double x;

		if (e == 0)

			x = f / c;

		else if (f == 0)

			x = e / a;

		else

			x = e / a;

		cout << '3' << ' ' << x;
		ans = "3 " + toString(x)+"\0" ;
		return(ans);
	}

	else if (b == 0 && e == 0)

	{

		double k, n;

		k = -c / d;

		n = f / d;

		//cout << '1' << ' ' << k << ' ' << n;
		ans = "1 " + toString(k) + " " + toString(n)+"\0";
		return(ans);
	}

	else if (d == 0 && f == 0)

	{

		double k, n;

		k = -a / b;

		n = e / b;

		//cout << '1' << ' ' << k << ' ' << n;
		ans = "1 " + toString(k) + " " + toString(n)+"\0";
		return(ans);
	}

	else if (a == 0 && e == 0)

	{

		double k, n;

		k = -d / c;

		n = f / c;

		//cout << '1' << ' ' << k << ' ' << n;
		ans = "1 " + toString(k) + " " + toString(n)+'\0';
		return(ans);
	}

	else if (c == 0 && f == 0)

	{

		double k, n;

		k = -b / a;

		n = e / a;

		//cout << '1' << ' ' << k << ' ' << n;
		ans = "1 " + toString(k) + " " + toString(n)+"\0";
		return(ans);
	}

	else if ((a / b == c / d))

	{

		double k, n;

		k = -c / d;

		n = f / d;

		//cout << '1' << ' ' << k << ' ' << n;
		ans = "1 " + toString(k) + " " + toString(n) + "\0";


		return(ans);
	}

	else

	{

		cout << "Are you kidding me?";

	}



}


int main()
{
	int a;
	string actual = prg(5, -4, 5, 0, 1, 5);

	cin >> a ;
	return 0;
}
