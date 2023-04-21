import javax.swing.JFrame;
import javax.swing.JPanel;

import java.awt.Color;
import java.awt.Font;
import java.awt.event.*;

public class Calculator implements ActionListener{

    Calculator() {
        JFrame frame = new JFrame();
        frame.setBounds(100,100,500,500);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
        
        JPanel panel = new JPanel();
        panel.setLayout(null);
        panel.setBackground(Color.blue);

        JLabel title = new JLabel("Click Counter!");
        title.setBounds(100,100,200,50);
        panel.add(title);

        Font font = new font("Times New Roman", font.BOLD, 24);

        frame.add(panel);
        frame.setVisible(true);
    }

    public void actionPerformed(){

    }

    public static void main(String[] args) {

    }
    
}
