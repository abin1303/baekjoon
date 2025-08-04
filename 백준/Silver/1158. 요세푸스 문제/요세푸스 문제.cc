#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
	unsigned int N, K;
	cin >> N >> K;
	if (!(1 <= K && K <= N && N <= 5000))
		return 1;
	
	queue<int> Q;
	vector<int> result;

	for (int i = 0; i < N; i++)
	{
		Q.push(i + 1);
	}

	int i = 1;
	while(!Q.empty())
	{
		int f = Q.front();
		Q.pop();
		if (i % K != 0)
		{
			Q.push(f);
		}
		else if (i % K == 0)
		{
			result.push_back(f);
		}
		i++;
		if (Q.size() == 1)
		{
			result.push_back(Q.front());
			break;
		}
	}

	cout << "<";
	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i];
		if (i != result.size() - 1)
			cout << ", ";
	}
	cout << ">" << endl;

	return 0;
}