import java.util.Scanner;

public class Stones {
    public static void main(String[] args) {
      Scanner n = new Scanner(System.in);
      int input = n.nextInt();

      char[] shos = new char[input];

      for (int i = 0; i < input; i++)
      {
        shos[i] = n.next().charAt(0);
      }

      int continer=0;
      for(int i=0;i<input-1;i++){
        if(shos[i]==shos[i+1])continue;
        else
          continer++;
      }

      
      System.out.println((input-1)-continer);
  }
}