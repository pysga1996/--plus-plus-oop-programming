### Bài tập

Bạn hãy điền code vào dấu `...` để chương trình hiển thị ra màn hình thông tin sau:

```
Name: Long
Age: 24
Name: Kien
Age: 29

```

### Lý thuyết

Constructor (phương thức khởi tạo) trong C++ được chia làm 2 loại là constructor không tham số (như bài trước bạn đã học) và constructor có tham số.

Một constructor mà có tham số truyền vào được gọi là constructor có tham số, xem ví dụ sau để hiểu rõ hơn:

```
#include <iostream>

using namespace std;

class Student {
private:
    string name;
public:
    Student(string name) {
        cout << "My name is " << name;
    }
};

int main() {
    Student s("Viet");
    return 0;
}
```

Kết quả khi chạy chương trình:

```
My name is Viet
```

Có thể thấy xâu `"Viet"` đã được truyền vào constructor của lớp `Student`.

Bạn cũng có thể gán giá trị cho các thuộc tính thông qua phương thức khởi tạo giống như chương trình sau:

```
#include <iostream>

using namespace std;

class Student {
private:
    string name;
    int age;
public:
    Student(string n, int a) {
        name = n;
        age = a;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student s("Codelearn", 2);
    s.display();
    return 0;
}
```

Kết quả khi chạy chương trình:

```
Name: Codelearn
Age: 2
```

Lưu ý: nếu tên tham số đầu vào trùng với tên thuộc tính của lớp thì bạn có thể truy xuất tới thuộc tính của lớp bằng từ khóa `this` và toán tử `"->"` giống như ví dụ sau:

```
#include <iostream>

using namespace std;

class Student {
private:
    string name;
    int age;
public:
    Student(string name, int age) {
        this->name = name;
        this->age = age;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student s("Codelearn", 2);
    s.display();
    return 0;
}
```

Kết quả khi chạy chương trình:

```
Name: Codelearn
Age: 2

```

Đọc tới đây bạn đã biết cách sử dụng consturctor có tham số, hãy quay lại phần bài tập và làm thử.

Nếu bạn vẫn chưa quen cách sử dụng constructor có tham số thì có thể xem hướng dẫn ở bên dưới.

### Hướng dẫn

Code mẫu:

```
#include <iostream>

using namespace std;

class Student {
private:
    string name;
    int age;
public:
    Student(string name, int age) {
        this->name = name;
        this->age = age;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student s1("Long", 24);
    Student s2("Kien", 29);
    s1.display();
    s2.display();
    return 0;
}
```