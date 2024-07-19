public class sol0719 {
	public int solution(int hp) {
		int ant = 0;
	   
	   ant += (hp / 5);
	   hp %= 5;
	   
	   ant += (hp / 3);
	   hp %= 3;
	   
	   ant += (hp / 1);
	   
	   return ant;
   }
}
