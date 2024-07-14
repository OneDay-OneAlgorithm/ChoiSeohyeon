import java.util.Arrays;

public class sol0714 {
	 public int solution(int[] array) {
        int answer = 0;
        int index=0;
        Arrays.sort(array);
        
        index = array.length/2;
        answer = array[index];
        return answer;
    }
}
