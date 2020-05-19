# CPP-OOP-Learning-at-SWEA
SW Expert Academy에서 C++ Object Oriented Programming 학습



## 1. 클래스

### 1. 클래스와 객체

#### 1) 객체지향 프로그램

- 객체지향 프로그램 개념 

  - 객체들을 모아 하나의 프로그램을 완성하는 것

  - 프로그램 작성을 위해 가장 먼저 설계도(Class) 정의

  - 객체 단위 프로그램의 장점 : 모듈간 독립성, 코드 재사용, 클래스 수정

  - 소스파일과 헤더파일

    - 헤더파일(.h)
      - 함수의 선언
      - 클래스 구현 함수
      - 클래스 선언
      - 사용자가 생성한 헤더파일(#include ""), 컴파일러가 제공하는 헤더파일(#include <>)
    - 소스파일(.cpp)
      - 함수 정의
      - 함수 호출 및 제어
      - 클래스 구현 함수

    ```
    SampleHeader.h
    
    // (임의 지정)다음 매크로가 정의되어 있지 않으면
    #ifndef _SAMPLE_H
    // (위와 동일한 이름)매크로를 정의한다
    #define _SAMPLE_H
    // 이로써 헤더 중복 정의 컴파일 에러 방지
    
    namespace sampleHeader {
    	struct TYPE {
    		int x;
    		int y;
    	};
    }
    
    #endif
    
    ```

    ```
    HeaderTest.cpp
    
    #include <iostream>
    #include "SampleHeader.h"
    
    using namespace std;
    
    int main(void)
    {
    	sampleHeader::TYPE var;
    	var.x = 10;
    	var.y = 20;
    
    	cout << var.x << ", " << var.y << endl;
     
    	return 0;
    }
    ```

#### 2) 클래스

- 클래스 선언

  - 클래스란 객체를 표현하기 위해 필요로 하는 속성들을 파악한 후 불필요한 요소들을 제거하고 모델링하여 만든 일종의 **설계도**

  - 클래스의 구성요소

    - 멤버변수 : 정보(데이터), 객체의 상태

    - 멤버함수 : 연산, 처리 등의 동작

    - 접근 지정자를 사용하여 멤버함수(public)를 통해서만 멤버변수(private, protected)에 접근해야함, 기본값은 private

      | 접근 지정자 |                             의미                             |
      | :---------: | :----------------------------------------------------------: |
      |   public    |                클래스 내외 모두에게 접근 가능                |
      |  protected  | 클래스 내부나 이 클래스로부터 파생한 클래스 내부에서만 접근 가능 |
      |   private   |      클래스 내부에서만 접근 가능, 외부에서 접근 불가능       |

  - 일반적으로 **클래스의 선언은 헤더파일에 작성**하고 소스파일에서 헤더파일을 포함시키는 방식으로 작성

- 멤버함수 정의

  - 멤버변수의 참조나 변경 등을 처리하는 함수로 **'메서드'**라고도 함
    - 멤버함수의 정의는 일반적으로 소스파일에 작성
    - 멤버함수를 정의하는 소스파일 : **클래스의 구현 파일**
    - **각 클래스마다 헤더파일과 소스파일이 한 세트씩 존재**

  ```
  Point.h
  
  #ifndef POINT_H
  #define POINT_H
  
  class Point {
  private:
  	int x;
  	int y;
  public:
  	void Print();
  	int GetX();
  	int GetY();
  	void SetX(int);
  	void SetY(int);
  };
  #endif
  ```

  ```
  Point.cpp
  
  #include "point.h"
  #include <iostream>
  using namespace std;
  
  void Point::Print()
  {
  	cout << "x = " << x << ", y = " << y << endl;
  }
  
  int Point::GetX()
  {
  	return x;
  }
  
  int Point::GetY()
  {
  	return y;
  }
  
  void Point::SetX(int xpos)
  {
  	x = xpos;
  }
  
  void Point::SetY(int ypos)
  {
  	y = ypos;
  }
  
  int main(void) {
  	
  	Point* p = new Point();
  	p->SetX(5);
  	p->SetY(10);
  	cout << "x  = " << p->GetX() << ", y = " << p->GetY() << endl;
  	delete p;
  
  	return 0;
  }
  ```

#### 3) 객체

- 객체의 선언

- 멤버 사용

  ````
  #include "Point.h"
  #include <iostream>
  using namespace std;
  
  int main(void)
  {
  	Point obj;
  
  	obj.SetX(5);
  	obj.SetY(10);
  
  	obj.Print();
  
  	return 0;
  }
  ````

  - 객체를 초기화 하는 방법
    - {}를 이용하여 직접 대입 (단, 클래스의 멤버변수가 public 영역에 선언되어 있을 때만 가능)
      ``Point obj = {10, 100};``
    - 생성자를 이용하여 초기화

### 2. 생성자와 소멸자

#### 1) 생성자 함수

- 디폴트 생성자
- 인자 있는 생성자
- 복사 생성자

#### 2) 소멸자 함수

- 예시 코드

  ```
  Point.h
  
  #ifndef POINT_H
  #define POINT_H
  
  class Point {
  // private
  public:
  	int x;
  	int y;
  public:
  	// 디폴트 생성자
  	Point();
  	// 인자가 있는 생성자
  	Point(int xpos, int ypos);
  	// Point(int xpos = 0, int ypos = 0);
  	// 소멸자
  	~Point();
  	void Print();
  	int GetX();
  	int GetY();
  	void SetX(int);
  	void SetY(int);
  };
  #endif
  ```

  ```
  Point.cpp
  
  #include "point.h"
  #include <iostream>
  using namespace std;
  
  Point::Point()
  {
  	x = 0;
  	y = 0;
  	cout << "디폴트 생성자" << endl;
  }
  
  Point::Point(int xpos, int ypos)
  {
  	x = xpos;
  	y = ypos;
  	cout << "인자 있는 생성자" << endl;
  }
  
  void Point::Print()
  {
  	cout << "x = " << x << ", y = " << y << endl;
  }
  /*
  Point::Point(int xpos, int ypos)
  	: x(xpos), y(ypos)
  {
  	cout << "초기화 리스트 생성자" << endl;
  }
  */
  
  Point::~Point()
  {
  	cout << "소멸자" << endl;
  }
  
  int Point::GetX()
  {
  	return x;
  }
  
  int Point::GetY()
  {
  	return y;
  }
  
  void Point::SetX(int xpos)
  {
  	x = xpos;
  }
  
  void Point::SetY(int ypos)
  {
  	y = ypos;
  }
  ```
  
  ```
  main.cpp
  
  #include "Point.h"
  #include <iostream>
  using namespace std;
  
  int main(void)
  {
  	// 디폴트 생성자 호출
  	Point obj1;
  	cout << "obj1:";
  	obj1.Print();
  	
  	// 인자 있는 생성자 호출
  	Point obj2(5, 10);
  	cout << "obj2";
  	obj2.Print();
  
  	obj1 = obj2;
  	cout << "obj1 = obj2 이후, obj1 : ";
  	obj1.Print();
  
  	cout << "종료" << endl;
  
  	return 0;
  }
  ```

### 3. 멤버와 클래스의 활용

#### 1) 정적멤버

- 정적멤버 변수의 선언 및 정의 
  - 클래스 내 오직 하나만 존재하기 때문에 모든 객체가 공동으로 사용
  - 선언 : ``static 자료형 멤버변수명;``
  - 정의 : ``자료형 클래스명::멤버변수명[=초기값];``
- 정적멤버 함수
  - 선언 : ``static 리턴자료형 함수명(매개변수목록, ... );``

#### 2) const 객체와 const 함수

- const 객체
  - 선언 : ``const 클래스명 객체명;``
  - 객체의 값은 변경할 수 없으며, 객체의 멤버함수도 호출할 수 없다. (단, const 함수는 가능)
- const 함수
  - 멤버변수의 값을 변경하지 않는 함수로 const를 붙여줌으로써 멤버 함수의 잘못된 접근이 일어나지 않도록 해줌
  - 선언 : ``리턴형 함수명(매개변수 목록) const;``
  - 정의 : ``리턴형 함수명(매개변수 목록) const {...}``

#### 3) 객체 배열과 동적 객체

- 객체 배열
- 동적 객체
  - 포인터 변수로 선언하여 **new 연산자**를 통해 할당함
  - 객체포인터를 통해 멤버에 접근 할 때는 **-> 연산자** 이용
  - **delete 연산자**로 반드시 해제해야 함
- 동적 객체 배열
  - **new 연산자**를 이용하여 동적 객체 배열 생성
  - **[]** 이용하여 접근
  - **delete[]** 연산자로 해제
  - **동적 객체 배열은 항상 디폴트 생성자로 초기화**(디폴트 생성자를 제공하지 않으면 생성할 수 없음)



### 4. this 포인터 변수와 복사 생성자

#### 1) this 포인터 변수

- 모든 멤버함수에서 이용 가능(단, 정적멤버 함수에서는 사용 불가능)

#### 2) 복사 생성자 (const ClassName& name)

- 클래스 내 포인터 멤버변수가 동적 메모리를 가리킬 때는 개발자가 복사 생성자를 정의 (같은 클래스로 만든 서로 다른 객체가 같은 메모리를 점유할 수 있기 때문)

- 대입연산자, 소멸자 등도 직접 정의

- 예시 코드

  ```
  #ifndef PERSON_H
  #define	PERSON_H
  
  class Person
  {
  private:
  	char* name;
  	int age;
  
  public:
  	Person();
  	Person(const char* name, int age);
  	Person(const Person& arg);
  	~Person();
  	void Show() const;
  	
  };
  #endif
  ```

  ```
  #define _CRT_SECURE_NO_WARNINGS
  
  #include "Person.h"
  #include <iostream>
  #include <cstring>
  
  using namespace std;
  
  Person::Person()
  {
  	name = new char[20];
  	strcpy(name, "");
  	age = 0;
  	cout << "디폴트 생성자" << endl;
  }
  
  Person::Person(const char* name, int age)
  {
  	this->name = new char[20];
  	strcpy(this->name, name);
  	this->age = age;
  	cout << "인자 있는 생성자" << endl;
  }
  
  Person::Person(const Person& arg)
  {
  	name = new char[20];
  	strcpy(name, arg.name);
  	age = arg.age;
  	cout << "복사 생성자" << endl;
  }
  
  Person::~Person()
  {
  	delete[] name;
  	cout << "소멸자" << endl;
  }
  
  void Person::Show() const
  {
  	cout << "name : " << name << ", age : " << age << endl;
  }
  ```

  ```
  #include <iostream>
  #include "Person.h"
  using namespace std;
  
  int main()
  {
  	Person p1("홍길동", 24);
  	Person p2(p1);
  	p2.Show();
  	
  	Person* ptr1 = new Person("허균", 59);
  	Person* ptr2 = new Person(*ptr1);
  	ptr2->Show();
  
  	delete ptr2;
  	delete ptr1;
  
  	return 0;
  }
  ```

  

### 5. string 클래스



