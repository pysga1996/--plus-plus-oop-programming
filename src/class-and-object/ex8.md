#### Câu hỏi

Phương thức hủy (destructor) của một đối tượng được gọi tới khi nào?

#### Lý thuyết

Giống với constructor, destructor hay phương thức hủy (còn có thể gọi là hàm hủy) cũng là một phương thức đặc biệt và được chương trình tự động gọi tới. Destructor thường được sử dụng để giải phóng bộ nhớ khi không dùng tới. Để hiểu rõ tác dụng của destructor thì trước hết bạn hãy xem ví dụ sau:

```
class Array {
public:
	int* arr;
	int n;
};
```

`Array` chính là lớp lưu thông tin về mảng các số nguyên được cấp phát động, vậy bất cứ khi nào bạn sử dụng đối tượng thuộc lớp này thì bạn đều cần phải giải phóng bộ nhớ khi không dùng tới nữa (nếu bạn chưa hiểu về cấp phát động và chưa rõ tại sao cần giải phóng bộ nhớ thì có thể học ở khóa [C++ nâng cao](https://codelearn.io/learning/cpp-nang-cao)). Thử tưởng tượng nếu bạn dùng đối tượng thuộc lớp Array ở 100 nơi thì bạn cần gọi tới toán tử delete 100 lần. Ví dụ:

```
#include<iostream>

using namespace std;

class Array {
public:
	int* arr;
	int n;
};

void someFunc1() {
	Array a;
	a.n = 3;
	a.arr = new int[a.n];
	// Some code
	delete[] a.arr;
}

void someFunc2() {
	Array a;
	a.n = 3;
	a.arr = new int[a.n];
	// Some code
	delete[] a.arr;
}

int main() {
	someFunc1();
	someFunc2();
	return 0;
}

```

Có thể nhận thấy đoạn code `delete[] a.arr;` sẽ bị lặp lại ở mỗi lần sử dụng lớp `Array`. Để giải quyết vấn đề này bạn có thể sử dụng phương thức hủy (destructor):

```
#include<iostream>

using namespace std;

class Array {
public:
	int* arr;
	int n;
	// Khai báo phương thức hủy cho lớp Array
	~Array() {
		cout << "Destructor called" << endl;
		delete[] arr;
	}
};

void someFunc1() {
	Array a;
	a.n = 3;
	a.arr = new int[a.n];
	// Some code	
}

void someFunc2() {
	Array a;
	a.n = 3;
	a.arr = new int[a.n];
	// Some code
}

int main() {
	someFunc1();
	someFunc2();
	return 0;
}
```

Kết quả khi chạy chương trình:

```
Destructor called
Destructor called
```

Có thể thấy phương thức `~Array()` đã được gọi, đồng nghĩa với việc bộ nhớ được cấp phát động đã được tự động giải phóng. Phương thức hủy của một đối tượng được gọi tới khi chương trình thoát khỏi phạm vi của nó, cụ thể hơn là 4 trường hợp dưới đây:

1.  Khi kết thúc hàm chứa đối tượng đó:

    ```
    void someFunc1() {
    	Array a;
    	// Some code	
    }​
    ```

    Khi ra khỏi hàm `someFunc1()` thì phương thức hủy của đối tượng `a` sẽ được gọi.
2.  Khi kết thúc chương trình:
3.  Khi gọi tới toán tử delete.
4.  Khi thoát khỏi block code chứa đối tượng đó:

    ```
    #include<iostream>

    using namespace std;

    class Array {
    public:
    	int* arr;
    	int n;
    	~Array() {
    		cout << "Destructor called" << endl;
    		delete[] arr;
    	}
    };

    int main() {
    	cout << "before block" << endl;
    	{
    		Array a;
    	}
    	cout << "after block" << endl;
    	return 0;
    }​
    ```

    Kết quả khi chạy chương trình:

    ```
    before block
    Destructor called
    after block​
    ```

Lưu ý: phương thức hủy phải có phạm vi truy cập `public` và một lớp chỉ có thể có 1 phương thức hủy.