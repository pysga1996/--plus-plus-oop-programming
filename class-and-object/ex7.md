### Bài tập

Bạn hãy cho biết kết quả khi chạy chương trình sau:

```
#include <iostream>

using namespace std;

class Customer {
public:
    string name;
    Customer(string name) {
        this->name = name;
    }
};

int main() {
    Customer s;
    cout << "Welcome to Codelearn.io!";
    return 0;
}
```

### Lý thuyết

Nếu một lớp đã được khai báo constructor thì chương trình sẽ không tự sinh ra constructor mặc định nữa (constructor mặc định là constructor không tham số).

Có thể thấy lớp `Customer` đã được khai báo constructor và đây lại là constructor có tham số nên trong hàm `main()` bạn không thể khởi tạo được đối tượng thuộc lớp `customer` (do trong hàm `main()` bạn gọi tới constructor không tham số nhưng trong lớp `Customer` lại không có constructor này). Với đoạn code trên chương trình sẽ báo lỗi như sau:

![](https://codelearn.io/Media/Default/Users/TuanLQ7/Cpp_OOP/Cpp_OOP_Class7.png)

Để chương trình trên hiển thị được ra màn hình dòng chữ `"Welcome to Codelearn.io!"` bạn phải tự thêm vào constructor không tham số giống như sau:

```
#include <iostream>

using namespace std;

class Customer {
public:
    string name;

    Customer() {

    }

    Customer(string name) {
        this->name = name;
    }
};

int main() {
    Customer s;
    cout << "Welcome to Codelearn.io!";
    return 0;
}
```

Kết quả khi chạy chương trình:

```
Welcome to Codelearn!

```

Vậy đáp án của bài này là Compile Time Error (lỗi biên dịch).