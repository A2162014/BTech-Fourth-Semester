import java.awt.*;
import javax.swing.*;

public class fontimage {
    public static void main(String[] args) {

        JFrame f = new JFrame();
        JPanel panel = new JPanel();// component panel inside frame
        JLabel label = new JLabel("Hello world");
        label.setIcon(new ImageIcon("C:\\Users\\Sathish\\Downloads\\Nature.jpg"));// setting images
        Font myFont1 = new Font(Font.SERIF, Font.BOLD, 35);// setting font
        label.setForeground(Color.green);// setting label color
        panel.setBackground(Color.BLACK);// setting panel color
        label.setFont(myFont1);
        panel.add(label);
        f.add(panel);
        f.setSize(200, 200);
        f.setVisible(true);

    }

}
