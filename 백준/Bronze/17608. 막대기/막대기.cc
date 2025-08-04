#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
    if(!(2 <= N && N <= 100000))
        return 1;
	stack<int> S;

	while (N--)
	{
		int h;
		cin >> h;
        if(!(1 <= h && h <= 100000))
            return 2;

        S.push(h);
	}

	int ret = 1;
	int t = S.top();

	while (!S.empty())
	{
        if(S.top() > t) {
            ret++;
            t = S.top();
        }
		S.pop();
	}

	cout << ret << endl;

	return 0;
}