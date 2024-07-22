import java.util.Collections;
import java.util.LinkedList;
import java.util.PriorityQueue;
import java.util.Queue;

public class sol0722 {
	public int solution(int[] priorities, int location) {
    int answer = 0;
    Queue<int[]> queue = new LinkedList<>();
    PriorityQueue<Integer> pq = new PriorityQueue<>(Collections.reverseOrder());

    // Queue와 PriorityQueue 초기화
    for (int i = 0; i < priorities.length; i++) {
        queue.add(new int[]{priorities[i], i});
        pq.add(priorities[i]);
    }

    // 인쇄 순서 결정
    while (!queue.isEmpty()) {
        int[] current = queue.poll();
        
        // 현재 문서가 가장 높은 우선순위인 경우
        if (current[0] == pq.peek()) {
            pq.poll();
            answer++;
            if (current[1] == location) {
                return answer;
            }
        } else {
            // 우선순위가 높은 문서가 뒤에 있으므로 현재 문서를 큐의 뒤로 이동
            queue.add(current);
        }
    }

    return answer;
}
}
