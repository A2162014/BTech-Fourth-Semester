import java.awt.*;
import javax.swing.*;

public class components {
    public static void main(String[] args) {
        JFrame f = new JFrame("HELLO");
        JButton b = new JButton();
        b.setBounds(50, 100, 95, 30);
        b.setText("HEY");
        b.setBackground(Color.black);
        b.setForeground(Color.blue);
        f.add(b);
        f.setSize(400, 400);
        f.setLayout(null);
        f.setVisible(true);
        f.set(false);
    }
}
