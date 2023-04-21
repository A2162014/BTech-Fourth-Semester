// // Example - 1
// import javax.swing.*;

// public class OptionPaneExample {
//     JFrame f;

//     OptionPaneExample() {
//         f = new JFrame();
//         JOptionPane.showMessageDialog(f, "Hello, Welcome.");
//     }

//     public static void main(String[] args) {
//         new OptionPaneExample();
//     }
// }

// // Example - 2
// import javax.swing.*;

// public class OptionPaneExample {
//     JFrame f;

//     OptionPaneExample() {
//         f = new JFrame();
//         JOptionPane.showMessageDialog(f, "Hello, Welcome.");
//     }

//     public static void main(String[] args) {
//         new OptionPaneExample();
//     }
// }

// Example - 3
import javax.swing.*;

public class OptionPaneExample {
    JFrame f;

    OptionPaneExample() {
        f = new JFrame();
        String name = JOptionPane.showInputDialog(f, "Enter Name");
        JOptionPane.showMessageDialog(f, name);
    }

    public static void main(String[] args) {
        new OptionPaneExample();
    }
}