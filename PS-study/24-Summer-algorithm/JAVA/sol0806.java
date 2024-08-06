import java.util.Scanner;

// 객체지향적 프로그래밍
// 필요한 역할: 카드 입력, 카드 역배치, 카드 출력
// 필요한 책임: 카드 입력(카드입력), 카드 역배치(카드역배치), 카드 출력(카드출력)
// 필요한 협력: 카드 입력 -> 카드 역배치 -> 카드 출력

public class sol0806 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int[] arr = new int[21];

        // 1~20까지의 수 배열에 저장
        for (int i = 1; i <= 20; i++) {
            arr[i] = i;
        }

        // 10번의 연산을 수행
        // int를 입력 받을 때는 nextInt 메서드를 이용
        for (int i = 0; i < 10; i++) {
            int start = sc.nextInt();
            int end = sc.nextInt();
            // start부터 end까지의 수를 역순으로 저장
            // 카드 역배치 함수 호출
            reverse(arr, start, end);
        }

        // 배열 출력
        for (int i = 1; i <= 20; i++) {
            System.out.print(arr[i] + " ");
        }
    }

    // 카드 역배치 함수
    private static void reverse(int[] arr, int start, int end) {
        while (start < end) {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }
}

// 고민!
// 카드 역배치 함수는 뺐는데, 나머지를 어떻게 역할, 책임, 협력으로 나눌 수 있을지 고민!