public class sol0726 {
	public int solution(int n) {
        int answer = 0;
        if(n<=7){
            answer = 1;
        }
        else if(n%7==0){
            answer = n/7;
        }
        else answer = n/7+1;
        return answer;
    }
}


// 이렇게 똑똑하게 풀자..!
// class Solution {
//     public int solution(int n) {
//         return (n + 6) / 7;
//     }
// }


