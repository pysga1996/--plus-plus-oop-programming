#### Bài tập

Bạn hãy cho biết kết quả khi chạy chương trình sau:

```
#include <iostream>

using namespace std;

class Student {
public:
    string name;
private:
    void display() {
        cout << "Name: " << name;
    }
};

int main() {
    Student s;
    s.name = "Codelearn";
    s.display();
    return 0;
}
```

### Lý thuyết

Nhìn vào đoạn code khai báo phương thức `display()` bạn sẽ thấy có từ khóa `private`. Với các bài trước bạn đã quen với việc khai báo một phương thức bằng từ khóa `public`, vậy sự khác nhau giữa `public` và `private` là gì? Bài này bạn sẽ giúp bạn hiểu rõ.

Phạm vi truy cập

Phạm vi truy cập là khái niệm để xác định xem một biến hay một phương thức có được truy xuất từ bên ngoài hay không. Trong C++ có 3 loại phạm vi truy cập là `private, protected, public`. Xem bảng minh họa dưới đây để có cái nhìn tổng quan về phạm vi truy cập:

| Phạm vi truy cập | Truy cập bên trong class? | Truy cập bên trong lớp con? | Truy cập bên ngoài class? |
| private | Y | N  | N  |
| protected | Y | Y | N |
| public | Y | Y | Y |

Phạm vi truy cập private

Đây là phạm vi truy cập hạn chế nhất, tất cả các thuộc tính và phương thức sẽ chỉ được truy xuất từ bên trong lớp đó. Ví dụ nếu bạn truy xuất một thuộc tính hoặc phương thức được khai báo với từ khóa `private` từ bên ngoài thì chương trình sẽ báo lỗi giống như sau:

![](https://codelearn.io/Media/Default/Users/TuanLQ7/tuanlq7/Cpp_OOP_Class4-1.png)

Để chương trình trên có thể chạy được bạn cần thay đổi phạm vi truy cập của phương thức `display()` trong lớp `Student` từ `private` sang `public`.

Phạm vi truy cập protected

Đây là phạm vi truy cập ít hạn chế hơn phạm vi truy cập `private` ở chỗ các thuộc tính và phương thức có phạm vi truy cập này có thể được truy xuất từ một lớp con (bạn sẽ hiểu khái niệm lớp con ở các bài về tính kế thừa).

Phạm vi truy cập public

Đây là phạm vi truy cập rộng nhất, các thuộc tính và phương thức có phạm vi truy cập này có thể được truy xuất từ bất cứ đâu.

Có thể bạn đang thắc mắc là tại sao lại sinh ra khái niệm phạm vi truy cập? tại sao không để hết là public? nếu bạn có thắc mắc trên thì học tới chương về tính đóng gói sẽ giúp bạn hiểu rõ.

Quay lại phần bài tập, phương thức `display()` trong lớp `Student` được khai báo với từ khóa `private` nên không thể được truy xuất từ hàm `main()`. Do đó đáp án của bài này là `"Compile Time Error"` (lỗi biên dịch).

Để chương trình hiển thị được ra màn hình `"Name: Codelearn"` thì bạn cần khai báo phương thức `display()` với phạm vi truy cập là `public`.

Lưu ý: trong một lớp, bạn có thể kết hợp `private, protected, public` để khai báo các thành viên:

```
#include <iostream>

using namespace std;

class Student {
private:
    string name = "Default";
    int age = 0;
public:
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student s;
    s.display();
    return 0;
}
```

Kết quả khi chạy chương trình:

```
Name: Default
Age: 0
```