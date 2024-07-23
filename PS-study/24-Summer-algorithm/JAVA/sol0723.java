import java.util.*;

public class sol0723 {
	public int[] solution(int[] numbers) {
        int[] answer = {0,};
        int sum = 0;
        ArrayList<Integer> aList = new ArrayList<Integer>();
        for(int i=0; i<numbers.length; i++) {
            for(int j=i+1; j<numbers.length; j++) {
                sum = numbers[i]+numbers[j];
                if(aList.indexOf(sum)<0) { 
                    aList.add(sum);
                }
            }
        }
        answer = new int[aList.size()];
        for(int i=0; i<aList.size(); i++) {
            answer[i]+=aList.get(i);
        }
        Arrays.sort(answer);
        return answer;
    }
}
