import java.awt.FlowLayout;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.JTextField;

public class LayoutDemo {
    public static void main(String[] args) {
        // Create a JFrame to hold the components
        JFrame frame = new JFrame("Layout Demo");

        // Create input and output fields
        JTextField inputField = new JTextField(10);
        JTextField outputField = new JTextField(10);

        // Create buttons
        JButton addButton = new JButton("Add");
        JButton subtractButton = new JButton("Subtract");

        // Create panel to hold the components
        JPanel panel = new JPanel();

        // Set the layout for the panel
        panel.setLayout(new FlowLayout());

        // Add components to the panel
        panel.add(inputField);
        panel.add(addButton);
        panel.add(subtractButton);
        panel.add(outputField);

        // Add the panel to the JFrame
        frame.add(panel);

        // Set the size of the JFrame
        frame.setSize(400, 100);

        // Make the JFrame exit on close
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        // Make the JFrame visible
        frame.setVisible(true);
    }
}
