#include <string>
#include <vector>

using namespace std;

vector<int> numbers;
int target;
int answer;

void f(int x, int level) { // x는 현재 노드의 값 (int)
    if(level == numbers.size()) {
        if (x == target) answer++;
        
        return;
    }
    f(x+numbers[level], level+1);
    f(x-numbers[level], level+1);
}

int solution(vector<int> a, int b) {
    numbers=a;
    target=b;
    f(0, 0);
    return answer;
}