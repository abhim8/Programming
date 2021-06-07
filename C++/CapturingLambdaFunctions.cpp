#include <bits/stdc++.h>
using namespace std;
int var = 10;

auto lambda1 =[=]() // runtime
{
	return 2 *var;
};

auto lambda2 =[var2 =var]() //compile time
{
	return 2 *var2;
};

int main()
{
	var = 20;
	cout << lambda1() << '\n' << lambda2() << '\n';
	return 0;
}