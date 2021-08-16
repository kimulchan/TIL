# IoC AoP

- ### IoC(Inversion of Control)

  - 제어의 역행 
  - 여기서 제어는 객체 제어를 말한다 이전의 객체는 사용자가 만들고 처리하는 개념이였다 하지만 이런 객체 관리를 Spring 이 처리하는 것이다 사용자는 객체를 정의하기만 하면 된다 

- ### bean 

  - 이때 Bean 이란 개념이 나온다 Bean 이란 Spring이 생명주기를 관리하는 객체이다 이때 bean의 scope를 지정할 수 있고 Singleton과 Proptotype으로 지정할 수 있다 proptotype은 객체 호출시에 매번 새롭게 생성하게 된다.

- ### bean Factory

  - 이런 Bean 을 사용할 때 사용하는 것이 Bean Factory다 Bean Factory를 통해 등록, 생성, 조회, 제거가 가능하다 

- ### DI(Defendency Injection)

  - 의존성 주입
  - 여기서 의존성이란 Bean 과 Bean 사이의 관계를 의미한다 클래스 내부에서 Bean을 사용하게 된다면 new를 통해 객체를 생성할 필요가 없다 객체 관리를  String에 위임했기 때문이다 

- ### AOP

  - 위에서 말한 IoC는 객체관리에서 스프링이 기반을 제공해준다면 AoP는 코드 효율성을 위해 기반을 제공해 준다 AOP를 통해 제공해주는 편의성은 반복되는 부분을 따로 정의하고 필요한 상황에서 Spring이 자동으로 맵핑을 해주게 된다