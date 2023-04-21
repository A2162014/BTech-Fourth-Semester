public class Student extends Person implements studentBahaviours{
    String collegeName = "No College";

    Student(String n, String p) {
        super(n, p);
    }

    Student(String n, String p, String c){
        super(n, p);
        this.collegeName = c;
    }

    public void study(){
        
    }

    public void sleep(){

    }
    
    public void write (){

    }
}