import java.awt.*;
import javax.swing.*;
import java.awt.event.*;

public class ActionMouse extends JFrame implements MouseListener {
    JLabel l;

    ActionMouse() {
        addMouseListener(this);
        l = new JLabel();
        l.setBounds(115, 115, 100, 20);
        add(l);
        setSize(300, 300);
        setLayout(null);
        setVisible(true);
    }

    public void mouseClicked(MouseEvent e) {
        l.setText("Mouse Clicked");
    }

    public void mouseEntered(MouseEvent e) {
        l.setText("Mouse Entered");
    }

    public void mouseExited(MouseEvent e) {
        l.setText("Mouse Exited");
    }

    public void mousePressed(MouseEvent e) {
        l.setText("Mouse Pressed");
    }

    public void mouseReleased(MouseEvent e) {
        l.setText("Mouse Released");
    }

    public static void main(String[] args) {
        new ActionMouse();
    }
}