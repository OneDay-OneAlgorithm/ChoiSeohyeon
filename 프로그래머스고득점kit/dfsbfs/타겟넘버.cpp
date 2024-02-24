#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int target) {
    int answer = 0;
    int now = 1;
    vector<int> v1 = {0}, v2;
    
    for(int i = 0; i < numbers.size(); ++i) {
        int it = numbers[i];
        if(now == 1) {
            for(int it2 = 0; it2 < v1.size(); ++it2) {
                v2.push_back(v1[it2] + it);
                v2.push_back(v1[it2] - it);
            }
            v1.clear();
        } else {
            for(int it2 = 0; it2 < v2.size(); ++it2) {
                v1.push_back(v2[it2] + it);
                v1.push_back(v2[it2] - it);
            }
            v2.clear();
        }
        now = !now;
    }
    if(now == 1) {
        for(int i = 0; i < v1.size(); ++i) {
            if(v1[i] == target) answer++;
        }
    } else {
        for(int i = 0; i < v2.size(); ++i) {
            if(v2[i] == target) answer++;
        }
    }
    return answer;
}
