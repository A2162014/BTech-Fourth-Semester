import java.awt.*;
import javax.swing.*;

public class ComboBox {
    public static void main(String[] args) {
        JFrame f;
        f = new JFrame("ComboBox Example");
        String country[] = { "India", "Aus", "U.S.A", "England", "Newzealand" };
        JComboBox cb = new JComboBox(country);
        cb.addItem("Hello");
        cb.setEditable(true);
        cb.setBounds(50, 50, 90, 20);
        f.add(cb);
        f.setLayout(null);
        f.setSize(400, 500);
        f.setVisible(true);
    }
}