import java.util.Scanner;

public class Remove {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String str= sc.nextLine();

        String result="";

        for(int i=0;i<str.length();i++){
            char c=str.charAt(i);
            if(c!=' '){
                result=result+c;
            }

        }

        System.out.println(result);
        sc.close();
    }
}