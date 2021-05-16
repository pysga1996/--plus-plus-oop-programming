Đây là bài đầu tiên trong series học lập trình hướng đối tượng trong C++, trước khi tới với khóa học này bạn cần có một số kiến thức cơ bản như biến, câu điều kiện, vòng lặp, phương thức, con trỏ. Nếu bạn là người mới bắt đầu học lập trình thì hãy tham khảo khóa học C++ cơ bản trên hệ thống trước ([C++ cho người mới bắt đầu](https://codelearn.io/learning/cpp-cho-nguoi-moi-bat-dau), [khóa học C++ nâng cao](https://codelearn.io/learning/cpp-nang-cao)).

Để có được cái nhìn tổng quan nhất về lập trình hướng đối tượng thì bạn có thể tham khảo bài viết tổng hợp nhanh các khác niệm trong lập trình hướng đối tượng [tại đây](https://codelearn.io/sharing/hieu-ro-ve-lap-trinh-huong-doi-tuong).

### Bài tập

Bạn hãy cho biết lập trình hướng đối tượng là gì?

### Lý thuyết

Chắc bạn cũng đã ít nhiều nghe tới lập trình hướng đối tượng nhưng qua một thời gian học vẫn không biết lập trình hướng đối tượng là gì? Code như thế nào? Khóa học này sẽ giúp bạn hiểu rõ.

Lập trình hướng đối tượng được hiểu đơn giản là một phương pháp để giải quyết bài toán lập trình mà khi áp dụng code sẽ trở nên dễ phát triển và dễ bảo trì hơn. Đây là một phương pháp tiên tiến, phù hợp để phát triển hầu hết các ứng dụng hiện nay. Phương pháp này sẽ giải quyết bài toán bằng cách chia chương trình thành các đối tượng, với mỗi đối tượng sẽ có các thuộc tính (dữ liệu) và hành vi riêng (phương thức).

Để có cái nhìn trực quan về lập trình hướng đối tượng, bạn hãy xem chương trình sau:

```
#include<iostream>

using namespace std;

class Student {
public:
	string name;
	int age;

	void display() {
		cout << "Name: " << name << endl;
		cout << "Age: " << age;
	}
};

int main() {
	Student s;
	s.name = "Linh";
	s.age = 17;
	s.display();

	return 0;
}

```

Kết quả khi chạy chương trình:

```
Name: Linh
Age: 17
```

Chương trình trên tạo ra một đối tượng học sinh, sau đó thực hiện gán tên và tuổi cho đối tượng này và hiển thị thông tin của đối tượng ra màn hình. 

Ví dụ này chỉ để bạn có cái nhìn qua và cảm nhận được về phương pháp lập trình hướng đối tượng nên đừng lo nếu bạn không hiểu được các đoạn code. Có thể thấy lập trình hướng đối tượng là phương pháp mà giải quyết các bài toán thông qua các đối tượng. Trước khi đi sâu hơn, bạn cần biết một số khái niệm cơ bản trong lập trình hướng đối tượng sau:

1.  Lớp (class) là nơi định nghĩa thông tin về các đối tượng, bạn cũng có thể hiểu lớp là một kiểu dữ liệu mà biến của kiểu dữ liệu này được coi như một đối tượng. Như trong ví dụ trên thì `Student` là lớp dùng để mô tả thông tin về các đối tượng học sinh.\
    Ví dụ về lớp: Học sinh, giáo viên, xe ô tô, ...
2.  Đối tượng (object) là một thể hiện của lớp, bạn có thể hiểu đối tượng là một biến. Như trong ví dụ trên thì biến `s` là một đối tượng đại diện cho thông tin của một học sinh.
3.  Thuộc tính (attribute): là các đặc điểm của đối tượng, như trong ví dụ trên thì `name` và `age` là hai thuộc tính của đối tượng học sinh.\
    Ví dụ về thuộc tính: tên, tuổi, chiều cao, cân nặng, năm sinh, ...
4.  Phương thức (method): là hành vi (hành động) của đối tượng, như ví dụ trên thì `display()` là một phương thức dùng để giới thiệu bản thân của học sinh.\
    Ví dụ về phương thức: giới thiệu bản thân, học bài, chạy, ...

Đọc tới đây bạn đã hiểu được phần nào về lập trình hướng đối tượng, ở các bài tiếp theo bạn sẽ học được cách tạo và sử dụng các đối tượng.