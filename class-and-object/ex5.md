### Bài tập

Bạn hãy cho biết kết quả khi chạy chương trình sau:

```
#include <iostream>

using namespace std;

class Student {
private:
    string name;
    int age;
public:
    Student() {
        name = "Khanh";
        age = 18;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age:" << age << endl;
    }
};

int main() {
    Student s;
    s.display();
    return 0;
}
```

### Lý thuyết

Bạn có thể quan sát thấy trong chương trình trên có đoạn code "lạ" mà ở các bài trước bạn chưa được học:

```
Student() {
    name = "Khanh";
    age = 18;
}
```

Nếu bạn chưa biết đoạn code này là gì thì đây chính là đoạn code của constructor (phương thức khởi tạo).

Constructor (phương thức khởi tạo)

Trong C++, constructor có thể được hiểu là một phương thức đặc biệt, phương thức này sẽ tự động được gọi khi bạn khởi tạo một đối tượng (với các phương thức thông thường thì bạn cần dùng toán tử `"."` để gọi tới). Constructor có đặc điểm là không được định nghĩa kiểu trả về và có tên trùng với tên lớp. Xem ví dụ sau để hiểu rõ hơn:

```
#include <iostream>

using namespace std;

class Student {
public:
    Student() {
        cout << "Constructor Called";
    }
};

int main() {
    Student s;
    return 0;
}
```

Kết quả khi chạy chương trình:

```
Constructor Called
```

Có thể thấy constructor đã tự động được gọi tới khi bạn tạo ra đối tượng lớp `Student`.

Nếu một lớp không được khai báo constructor thì chương trình sẽ tự động tạo ra một constructor mặc định. Ví dụ nếu bạn khai báo lớp `Student` giống như sau:

```
class Student {
};
```

Thì chương trình sẽ tự động thêm vào một constructor mặc định (constructor rỗng) với phạm vi truy cập `public` vào bên trong lớp `Student`:

```
class Student {
public:
    Student() {}
};
```

Lưu ý: Nếu bạn dùng từ khóa `private` hoặc `protected` để khai báo constructor thì bạn sẽ không thể khởi tạo được đối tượng của lớp này. Ví dụ chương trình sau sẽ báo lỗi do lớp `Student` có constructor là `private`:

![](https://codelearn.io/Media/Default/Users/TuanLQ7/Cpp_OOP/Cpp_OOP_Class5.png)