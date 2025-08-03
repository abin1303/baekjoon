#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	queue<int> Q;

	while (N--)
	{
		string c;
		cin >> c;

		if (c == "push")
		{
			int x;
			cin >> x;
			Q.push(x);
		}
		else if (c == "pop")
		{
			if (Q.empty())
				cout << -1 << endl;
			else
			{
				cout << Q.front() << endl;
				Q.pop();
			}
		}
		else if (c == "size")
		{
			cout << Q.size() << endl;
		}
		else if (c == "empty")
		{
			if (Q.empty())
				cout << 1 << endl;
			else
				cout << 0 << endl;
		}
		else if (c == "front")
		{
			if (Q.empty())
				cout << -1 << endl;
			else
				cout << Q.front() << endl;
		}
		else if (c == "back")
		{
			if (Q.empty())
				cout << -1 << endl;
			else
				cout << Q.back() << endl;
		}
	}
	return 0;
}