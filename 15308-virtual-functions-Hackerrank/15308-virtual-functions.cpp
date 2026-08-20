
#include <string>

// Base class Person
class Person {
protected:
    string name;
    int age;

public:
    virtual void getdata() = 0;
    virtual void putdata() = 0;
    virtual ~Person() {} 
};

// Derived class Professor
class Professor : public Person {
private:
    int publications;
    int cur_id;
    static int id_counter;

public:
    Professor() {
        id_counter++;
        cur_id = id_counter;
    }

    void getdata() override {
        cin >> name >> age >> publications;
    }

    void putdata() override {
        cout << name << " " << age << " " << publications << " " << cur_id << "\n";
    }
};

int Professor::id_counter = 0;

// Derived class Student
class Student : public Person {
private:
    int marks[6];
    int cur_id;
    static int id_counter;

public:
    Student() {
        id_counter++;
        cur_id = id_counter;
    }

    void getdata() override {
        cin >> name >> age;
        for (int i = 0; i < 6; ++i) {
            cin >> marks[i];
        }
    }

    void putdata() override {
        int sum = 0;
        for (int i = 0; i < 6; ++i) {
            sum += marks[i];
        }
        cout << name << " " << age << " " << sum << " " << cur_id << "\n";
    }
};

int Student::id_counter = 0;



// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna