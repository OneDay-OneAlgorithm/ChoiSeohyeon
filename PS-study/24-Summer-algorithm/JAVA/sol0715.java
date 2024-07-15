public class sol0715 {
	public String solution(String my_string, int num1, int num2) {
        // String은 불변 객체이므로 StringBuilder를 사용하여 문자열을 변경
        StringBuilder sb = new StringBuilder(my_string);
        
        char tmp = sb.charAt(num1);
        sb.setCharAt(num1, sb.charAt(num2));
        sb.setCharAt(num2, tmp);
        
        return sb.toString();
    }
}
