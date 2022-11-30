import java.util.Scanner;

public class Index {
    public static void main(String[] args) {

      Scanner input = new Scanner(System.in);
      int n = input.nextInt();
      int result  = 0;

    for(int i=0; i< n; i++){
      int number1 = input.nextInt();
      int number2 = input.nextInt();
      int number3 = input.nextInt();
      int sum = number1 + number2 + number3;
        if(sum >= 2){
           result++;
        }
     }

     System.out.println(result);
  }
}