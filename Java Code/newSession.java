import java.io.IOException;
import java.util.Scanner;
import java.util.regex.*;

public class newSession {
    Scanner scanner;
    String name;
    public static void main(String[] args)
    {
        
        String x = "Zf20041106******";
        if((x.compareTo("Zf20041106******")) == 0)
        {
            System.out.println("asu");
        }
    }
    
    newSession()
    {
        scanner = new Scanner(System.in);
    }
    private void asu()
    {

    }
    private void setName()
    {
        String tmpName = scanner.nextLine();
        // scanner.nextLine();
        System.out.println(tmpName);
        if(!Pattern.matches("[A-Z][a-z]{2,}", tmpName)){
            setName();
            return;
        }

        this.name = tmpName;
        System.out.println("MNTP");
    }
}