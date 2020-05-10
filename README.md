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

### 3. 멤버와 클래스의 활용

#### 4. this 포인터 변수와 복사 생성자

### 5. string 클래스



