class Student {
    private String firstName;
    private String lastName;
    private int age;
    private String department;
    private double gpa;

    private Student(String firstName, String lastName, int age, String department, double gpa) {
        this.firstName = firstName;
        this.lastName = lastName;
        this.age = age;
        this.department = department;
        this.gpa = gpa;
    }

    public Student(StudentBuilder studentBuilder) {
    this.age = studentBuilder.age;
    this.firstName = studentBuilder.firstName ;
    this.lastName = studentBuilder.lastName ;
    this.gpa = studentBuilder.gpa ;
    this.department = studentBuilder.department ;
    }


    public String getFirstName() { return firstName; }
    public String getLastName() { return lastName; }
    public int getAge() { return age; }
    public String getDepartment() { return department; }
    public double getGpa() { return gpa; }

    public void display() {
        System.out.println("Student: " + firstName + " " + lastName);
        System.out.println("Age: " + age);
        System.out.println("Department: " + department);
        System.out.println("GPA: " + gpa);
    }

    public static class StudentBuilder {
        private String firstName;
        private String lastName;
        private int age = 0;
        private String department = "Unknown";
        private double gpa = 0.0;

        public StudentBuilder(String firstName, String lastName) {
            this.firstName = firstName;
            this.lastName = lastName;
        }

        public StudentBuilder setAge(int age) {
            this.age = age;
            return this;
        }

        public StudentBuilder setDepartment(String department) {
            this.department = department;
            return this;
        }

        public StudentBuilder setGpa(double gpa) {
            this.gpa = gpa;
            return this;
        }

        // Build method returns a new Student object
        public Student build() {
            return new Student(this);
        }
    }
}