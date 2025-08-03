#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int n;
	cin >> n;
	stack<int> S;

	while (n--)
	{
		string c;
		cin >> c;
		if (c == "push")
		{
			int x;
			cin >> x;
			S.push(x);
			//cout << S.top() << endl;
		}
		if (c == "pop")
		{
			if (S.empty())
				cout << "-1" << endl;
			else
			{
				cout << S.top() << endl;
				S.pop();
			}
		}
		if (c == "size")
		{
			cout << S.size() << endl;
		}
		if (c == "empty")
		{
			if (S.empty())
				cout << 1 << endl;
			else
				cout << 0 << endl;
		}
		if (c == "top")
		{
			if(S.empty())
				cout << -1 << endl;
			else
				cout << S.top() << endl;
		}
	}
}