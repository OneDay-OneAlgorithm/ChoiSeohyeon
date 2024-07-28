public class sol0728 {
		public int solution(int n, int t) {
			int answer = n*2;
			for(int i=1; i<t; i++){
				answer *=2;
			}
			return answer;
		}
}
