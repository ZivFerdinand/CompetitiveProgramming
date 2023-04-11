import javax.swing.JFrame;
import javax.swing.JLabel;

public class newSession extends JFrame {
    private JLabel label = new JLabel("0");
    private String[] btn = new String[]{
        "AC"
    };
    public newSession(){
        setSize(200, 400);
        setDefaultCloseOperation(EXIT_ON_CLOSE);
        setVisible(true);
    }
    public static void main(String[] args)
    {
        new newSession();
    }
}