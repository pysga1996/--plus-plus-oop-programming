### Bài tập

Bạn hãy cho biết kết quả khi chạy chương trình sau:

```
#include<iostream>

using namespace std;

class Student {
private:
	string name;
	int age;
public:
	static int numberOfStudents;
	Student(string name, int age) {
		this->name = name;
		this->age = age;
		numberOfStudents++;
	}
};

int Student::numberOfStudents = 0;

int main() {
	Student s1("Manh", 19);
	Student s2("Trung", 19);
	Student s3("Kien", 19);
	cout << s1.numberOfStudents;
	return 0;
}
```

### Lý thuyết

Trong bài này bạn sẽ được học về khái niệm biến static (biến tĩnh) và phương thức static (phương thức tĩnh) trong C++.

Biến tĩnh

Biến tĩnh là biến được khai báo với từ khóa `static` và có đặc điểm là giá trị của nó được chia sẻ bởi tất cả các đối tượng trong chương trình. Xem ví dụ về biến `static` và biến `non-static` (thuộc tính) dưới đây để hiểu rõ hơn:

Biến `non-static`:

```
#include<iostream>

using namespace std;

class Student {
private:
	string name;
	int age;
public:
	int numberOfStudents = 0;
	Student(string name, int age) {
		this->name = name;
		this->age = age;
	}
};

int main() {
	Student s1("Manh", 19);
	Student s2("Trung", 19);
	s1.numberOfStudents = 2;
	s2.numberOfStudents = 3;
	cout << s1.numberOfStudents << " " << s2.numberOfStudents;
	return 0;
}
```

Kết quả khi chạy chương trình:

```
2 3
```

Bạn có thể nhận thấy giá trị của biến `numberOfStudents` ở 2 đối tượng `s1` và `s2` là khác nhau do đây là thuộc tính riêng của các đối tượng. Trong trường hợp trên nếu biến `numberOfStudents` là biến `static` giống như sau:

```
#include<iostream>

using namespace std;

class Student {
private:
	string name;
	int age;
public:
	static int numberOfStudents;
	Student(string name, int age) {
		this->name = name;
		this->age = age;
	}
};

int Student::numberOfStudents = 0;

int main() {
	Student s1("Manh", 19);
	Student s2("Trung", 19);
	s1.numberOfStudents = 2;
	s2.numberOfStudents = 3;
	cout << s1.numberOfStudents << " " << s2.numberOfStudents;
	return 0;
}
```

Kết quả khi chạy chương trình:

```
3 3
```

Có thể thấy giá trị của biến `numberOfStudents` ở hai đối tượng `s1` và `s2` là như nhau.

Do biến static có đặc điểm là biến dùng chung và không thuộc một đối tượng nào trong chương trình nên bạn không thể khởi tạo giá trị cho nó bên trong constructor của một lớp, thay vào đó bạn cần khởi tạo từ bên ngoài giống trong ví dụ trên (`int Student::numberOfStudents = 0;`)

Ngoài ra, bạn còn có thể truy xuất tới biến static trực tiếp từ lớp khai báo nó bằng toán tử `::` giống như sau:

```
cout << Student::numberOfStudents;
```

Các biến `static` thường được dùng để lưu các giá trị chung của các đối tượng hoặc các hằng số trong chương trình.

Lưu ý: các biến static không được coi là thuộc tính của một lớp.

Phương thức tĩnh

Giống với biến tĩnh, phương thức tĩnh cũng được khai báo với từ khóa `static` và được sử dụng mà không cần phải khởi tạo đối tượng. Xem ví dụ về phương thức `max()` và `min()` trong lớp `Math` dưới đây để hiểu rõ hơn:

```
#include<iostream>

using namespace std;

class Math {
public:
	static int max(int a, int b) {
		return a > b ? a : b;
	}
	static int min(int a, int b) {
		return a < b ? a : b;
	}
};

int main() {
	cout << Math::max(2, 3) << endl;
	cout << Math::min(2, 3) << endl;
	return 0;
}
```

Kết quả khi chạy chương trình:

```
3
2
```

Một số đặc điểm của phương thức tĩnh:

-   Phương thức tĩnh có thể được gọi mà không cần phải khởi tạo đối tượng.
-   Do không thuộc một đối tượng nào nên trong cùng một lớp, phương thức tĩnh chỉ có thể gọi tới phương thức tĩnh khác, không thể gọi tới phương thức không phải là static.
-   Trong cùng một lớp, phương thức tĩnh không thể gọi tới các biến không phải là biến tĩnh.