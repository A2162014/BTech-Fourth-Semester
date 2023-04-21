// Write a Java Program to find the frequency of a given character in a string
public class Frequency {
    public static void main(String[] args) {
        String str = "java programming";
        int[] freq = new int[str.length()];
        int i, j;
        // Converts given string into character array
        char string[] = str.toCharArray();
        for (i = 0; i < str.length(); i++) {
            freq[i] = 1;
            for (j = i + 1; j < str.length(); j++) {
                if (string[i] == string[j]) {
                    freq[i]++;
                    string[j] = '0'; // Set string[j] to 0 to avoid printing visited character
                }
            }
        }
        // Displays the each character and their corresponding frequency
        System.out.println("Characters and their corresponding frequencies");
        for (i = 0; i < freq.length; i++) {
            if (string[i] != ' ' && string[i] != '0')
                System.out.println(string[i] + "-" + freq[i]);
        }
    }
}