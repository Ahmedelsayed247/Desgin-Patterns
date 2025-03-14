public class Main {
    public static void main(String[] args) {
        // Using Builder pattern to create a Student object
        Student student = new Student.StudentBuilder("Ahmed", "El Sayed")
                .setAge(23)
                .setDepartment("Computer Science")
                .setGpa(3.15)
                .build();

        student.display();
    }
}