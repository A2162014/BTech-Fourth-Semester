import java.awt.*;
import javax.swing.*;
import java.awt.event.*;

public class ActionListenerExample {
    public static void main(String[] args) {
        JFrame f = new JFrame("ActionListener Example");
        JLabel l = new JLabel("ACTION LISTENER");
        l.setBounds(10, 10, 105,    50);
        JTextField tf = new JTextField();
        tf.setBounds(50, 50, 150, 20);
        JButton b = new JButton("Click Here");
        b.setBounds(50, 100, 95, 50);

        b.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                tf.setText("Welcome to Home.");
            }
        });
        f.add(b);
        f.add(tf);
        f.add(l);
        f.setSize(400, 400);
        f.setLayout(null);
        f.setVisible(true);
    }
}
