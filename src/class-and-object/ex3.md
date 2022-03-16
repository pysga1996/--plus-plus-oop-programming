### Bài tập

Sử dụng phương pháp lập trình hướng đối tượng để giải quyết bài tập sau:

Bạn hãy viết chương trình nhập từ bàn phím chiều dài và chiều rộng của một hình chữ nhật và hiển thị ra màn hình:

```
Area = {P1}
Perimeter = {P2}
```

Với `{P1}` và `{P2}` lần lượt là diện tích và chu vi của hình chữ nhật đó.

Ví dụ nếu bạn nhập:

```
4.5
5.5
```

Thì màn hình sẽ hiển thị ra:

```
Area: 24.75
Perimeter: 20
```

### Hướng dẫn

Như bài trước bạn đã biết, phương pháp lập trình hướng đối tượng là phương pháp giải quyết các bài toán lập trình thông qua các đối tượng, do đó bài này bạn cần tạo ra một đối tượng thuộc lớp `Rectangle` (hình chữ nhật) giống như sau:

![](https://codelearn.io/Media/Default/Users/TuanLQ7/Cpp_OOP/Main.png)

Trong đó:

-   `length` và `width` là hai thuộc tính chỉ chiều dài và chiều rộng của hình chữ nhật.
-   `getInformation()` là phương thức nhập dữ liệu cho thuộc tính `length` và `width` từ bàn phím.
-   `display()` là phương thức dùng để hiển thị thông tin về chu vi và diện tích của hình chữ nhật ra màn hình.
-   `getArea()` và `getPerimeter()` là hai phương thức trả về diện tích và chu vi của hình chữ nhật, hai phương thức này được dùng trong phương thức `display()`.

Code mẫu:

```
#include <iostream>

using namespace std;

class Rectangle {
public:
    double width;
    double length;

    void getInformation() {
        cin >> width;
        cin >> length;
    }

    double getArea() {
        return width * length;
    }

    double getPerimeter() {
        return (width + length) * 2;
    }

    void display() {
        cout << "Area: " << getArea() << endl;
        cout << "Perimeter: " << getPerimeter() << endl;
    }
};

int main() {
    Rectangle r1;
    r1.getInformation();
    r1.display();
    return 0;
}
```

Có thể nhận thấy trong phương thức `display()` bạn có thể không sử dụng phương thức `getArea()` và `getPerimeter()` và thay vào đó là gọi thẳng tới công thức tính diện tích và chu vi. Nhưng đây là cách làm không tốt, bạn vẫn nên tạo và sử dụng 2 phương thức này để sau này có thể tái sử dụng lại code.