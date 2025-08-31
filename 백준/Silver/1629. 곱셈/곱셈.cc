#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// ( a ^ b ) % c 를 계산

ll func(ll a, ll b, ll c)
{
    if(b == 1) return a % c;    // b가 1이면 a^1 = a 반환
    //if(b == 0) return 1;      // b가 0이면 a^0 = 1 반환

    ll val = func(a, b/2, c);   // 거듭제곱 수를 절반으로해서 함수 호출
    val = val * val % c;        // 절반의 결과를 제곱
    if(b % 2 == 0) return val;  // 1. b가 짝수일 때 : 그대로 -> a^b = ( a ^(b/2) )^2
    return val * a % c;         // 2. b가 홀수일 때 : 남은 a를 한번 더 곱함 -> a^b = ( a ^(b/2) )^2 * a
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll a, b, c;
    cin >> a >> b >> c;

    cout << func(a, b, c);

    return 0;
}