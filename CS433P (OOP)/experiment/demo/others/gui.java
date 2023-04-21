import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
//should work
public class gui extends JFrame implements ActionListener{
    JFrame f = new JFrame();
        JPanel p = new JPanel();
        JButton b = new JButton();
        JTextField va = new JTextField("Enter temp in float");
        JTextField vb = new JTextField("Enter temp in float");
    public gui(){

        f.setBounds(100, 100, 500, 500);

        va.setBounds(25, 50, 100, 20);

        vb.setBounds(25, 100, 100, 20);

        b.setBounds(25, 150, 50, 30);
        f.add(va);
        f.add(vb);
        f.add(b);
        // p.add(b);
        f.add(p);
        b.addActionListener(this);

        f.setVisible(true);
    }

    public void actionPerformed(ActionEvent e){
        double temp = Double.parseDouble(va.getText());
        if(e.getSource()==b){
            vb.setText(String.valueOf(temp-32*5/9));
        }
    }
    public static void main(String args[]){
        new gui();
    }
}