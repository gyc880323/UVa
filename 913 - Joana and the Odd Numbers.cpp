// ----------
// UVa 913 - Joana and the Odd Numbers
// https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=854
// https://www.udebug.com/UVa/913
// ----------

#include <cstdio>

using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.in", "r", stdin);
	#endif

	long long int input;

	while(scanf("%lld", &input) != EOF)
	{
		long long int count=1, total=1;

		count = (1 + input) * (1 + input) / 4; // 利用等差公式推導整理後得出
		total = 6 * count - 9;

		printf("%lld\n", total);
	}

	return 0;
}
