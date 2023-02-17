/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author 2162014
 */
import java.awt.Color;
import java.awt.Font;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JRadioButton;
import javax.swing.JTextField;

class Calculator implements ActionListener {
    // Create a JFrame to hold the calculator components
    JFrame frame = new JFrame("Calculator");

    // Create labels for input and output fields
    JLabel input1Label = new JLabel("Num 1:");
    JLabel input2Label = new JLabel("Num 2:");
    JLabel resultLabel = new JLabel("Result:");

    // Create input and output fields
    JTextField input1Field = new JTextField();
    JTextField input2Field = new JTextField();
    JTextField resultField = new JTextField();

    // Create buttons
    JButton addButton = new JButton("Add");

    // Create panel to hold the components
    JPanel panel = new JPanel();

    // Create radio buttons for background color
    JRadioButton yellowButton = new JRadioButton("Yellow");
    JRadioButton greenButton = new JRadioButton("Green");

    // Create fonts for labels, input and output fields, and buttons
    Font sansSerif = new Font("SansSerif", Font.BOLD, 20);
    Font serif = new Font("Serif", Font.BOLD, 20);
    Font bgFont = new Font("SansSerif", Font.BOLD, 14);

    Calculator() {
        // Set the layout for the panel
        panel.setLayout(null);

        // Set the size of the JFrame
        frame.setSize(400, 450);

        // Make the JFrame exit on close
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        // Make the JFrame visible
        frame.setVisible(true);

        // Set the position of the labels and input and output fields
        input1Label.setBounds(50, 50, 150, 30);
        input2Label.setBounds(50, 100, 150, 30);
        resultLabel.setBounds(50, 150, 150, 30);
        input1Field.setBounds(200, 50, 150, 30);
        input2Field.setBounds(200, 100, 150, 30);
        resultField.setBounds(200, 150, 150, 30);

        // Set the position of the buttons
        addButton.setBounds(150, 250, 80, 30);

        // Set the position of the radio buttons
        yellowButton.setBounds(50, 350, 80, 30);
        greenButton.setBounds(250, 350, 80, 30);

        // Set the font of the labels, input and output fields, and buttons
        input1Label.setFont(sansSerif);
        input2Label.setFont(sansSerif);
        resultLabel.setFont(sansSerif);
        input1Field.setFont(serif);
        input2Field.setFont(serif);
        resultField.setFont(serif);
        addButton.setFont(sansSerif);
        yellowButton.setFont(bgFont);
        greenButton.setFont(bgFont);

        // Add components to the panel
        panel.add(input1Label);
        panel.add(input2Label);
        panel.add(resultLabel);
        panel.add(input1Field);
        panel.add(input2Field);
        panel.add(resultField);
        panel.add(addButton);
        panel.add(yellowButton);
        panel.add(greenButton);

        // Add the panel to the JFrame
        frame.add(panel);

        // Register listeners for buttons and radio buttons
        addButton.addActionListener(this);
        yellowButton.addActionListener(this);
        greenButton.addActionListener(this);
    }

    // Handle button clicks
    @Override
    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == addButton) {
            int x = Integer.parseInt(input1Field.getText());
            int y = Integer.parseInt(input2Field.getText());
            int sum = x + y;
            resultField.setText(Integer.toString(sum));
        } else if (e.getSource() == yellowButton) {
            panel.setBackground(Color.yellow);
            greenButton.setSelected(false);
        } else if (e.getSource() == greenButton) {
            panel.setBackground(Color.green);
            yellowButton.setSelected(false);
        }
    }
}

public class UI_demo {
    public static void main(String[] args) {
        new Calculator();
    }
}
