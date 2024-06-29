// 덱이란, 양쪽에서 삽입과 삭제가 가능한 구조이며 스택과 큐의 연산을 모두 지원
// https://nahwasa.com/entry/%EC%9E%90%EB%B0%94-%EB%B0%B1%EC%A4%80-1835-%EC%B9%B4%EB%93%9C-boj-java

#include <bits/stdc++.h>
using namespace std;

deque<int> dq;

int main()
{

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		dq.push_back(i);
	}

	while (!dq.empty())
	{
		
	}
	

	return 0;
}