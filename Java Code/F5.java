import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.Timer;
import java.awt.Graphics;
import java.awt.Color;
import java.awt.Rectangle;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;
           
public class F5 extends JPanel implements ActionListener {
    private JFrame frame;
    private Timer t;
    private int x, velx, x2, velx2;
    private Rectangle r1;
    private Rectangle r2;

    F5() {
        t = new Timer(5, this);
        x = 100;
        x2 = 400;
        r1 = new Rectangle(x, 10, 50, 30);
        r2 = new Rectangle(x2, 10, 50, 30);
        velx = 2;
        velx2 = 2;
        frame = new JFrame();
        frame.setSize(500, 400);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.add(this);
        frame.setVisible(true);
        t.start();
    }

    public void paintComponent(Graphics g) {
        super.paintComponent(g);

        r1 = new Rectangle(x, 10, 50, 30);
        r2 = new Rectangle(x2, 10, 50, 30);

        g.setColor(Color.BLUE);
        g.fillRect(x, 10, 50, 30);

        g.setColor(Color.RED);
        g.fillRect(x2, 10, 50, 30);
    }

    public void actionPerformed(ActionEvent e) {
        if (x < 0 || x > 450 || r1.intersects(r2)) {
            velx = -velx;
            System.out.println("TAI");
        }
        if (x2 < 0 || x2 > 450 || r1.intersects(r2)) {
            velx2 = -velx2;
        }

        x -= velx;
        x2 += velx2;

        repaint();
    }

    public static void main(String args[]) {
        new F5();
    }
}