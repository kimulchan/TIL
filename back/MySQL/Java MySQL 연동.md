# Java MySQL 연동

### JDBC

- JDBC: 자바에서 데이터베이스를 사용하기 위한 절차에 대한 규약 
- DBMS에 따라 DB를 다루는 방식이 다르다면, 사용자는 알아야 할 것이 매우 많을 것이다 그래서 JDBC를 통해 추상화된 인터페이스를 제공하기만 하면 각 벤더들 (ORACLE,MYSQL 등)은 각자의 DBMS에 맞게 구현을 해놓은 상태이다
- 사용자는 특정DBMS를 사용하기 위해, 각 벤더에서 개발해놓은 드라이버를 설치하면 된다 그리고 DB에 접근하기 위한 인터페이스는 JDBC에서 제공하는 API를 사용하면 된다

### intellij에서 JDBC등록

1. 먼저 MySQL홈페이지에서 드라이버를 설치
2. 설치가 완료되면 mysql-connector-java-버전 이라는 압축 폴더가 생성되었을 것이다 이 압축 폴더를 압축 풀기로 해제한다
3. intellj에 자신이 적용시킬 프로젝트에 들어간다
4. jar 파일은 넣어놓을 폴더를 하나 만들고 압축 해제한 폴더 안에 있는 mysql-connector-java-버전.jar 파일을 넣는다
5. file ->project structure -> modules에 들어간다
6. name아래에 있는 source, paths,dependencies중 dependencies를 누른다
7. export위에 있는 +모양의 버튼을 누르고 jars-or-directories를 눌러 폴더 안 jar파일을 누르고 apply버튼을 누른다
8. 등록 완료!!

### JDBC기본적인 사용

- JDBC에서 인터페이스를 제공하기 때문에, 어떤 DB를 사용하든 개발자가 JDBC를 사용하는 방법은 변하지 않는다 이것이 인터페이스의 가장 큰 장점
- JDBC를 사용하는 방법은 다음과 같다
  1. import java.sql.*
  2. 드라이버를 **load**
  3. mysql연결을 위한 **connection**객체 생성
  4. **Statemen**객체를 생성하여 질의 수행
  5. 질의 결과가 있다면 **ResultSet**객체를 생성하여 결과 저장
  6. 추가 로직 실행 후,JDBC 연결 과정에서 필요했던 객체들을 **close**

### Class.forname

- 드라이버 로드에 필요
- Class.forname(String className)
- MySQL의 className 은 com.mysql.jdbc.Driver이다

### Conection

- 드라이버 매니저에게 connection 객체를 달라 요청함
- 사용법: Connection connection_name = DriverManager.getConnection('url',userName,userPassword) 
- MySQL의 url은 "jdbc:mysql://localhost:3306/사용할DatabaseName" 이다
- MySQL workbench 에서 확인 할 수 있음

### statement

- 쿼리 수행을 위한 객체
- 동적 할당이 없을때 
  - 사용법:Statement statement_name = connection_name.createStatement();
- 동적 할당이 있을 때
  - 사용법 PreparedStatement preparedStatement_name = connection_name.prepareStatement(sql)

### SQL 쿼리 생성

- 주의사항
  1. JDBC 에서 쿼리를 작성할 때는 세미콜론을 빼고 작성한다
  2. SELECT 할 때 * 으로 모든 칼럼을 가져오는것보다 가져와야 할 칼럼을 직접 명시해주는 것이 좋다
  3. 원하는 결과는 쿼리로써 마무리 짓고 ,java코드로 후작업 하는 것은 권하지 않음
  4. 쿼리를 한 줄로 쓰기 어려운 경우 들여쓰기를 사용해도 되지만 띄어쓰기에 유의

### SQL 쿼리 준비

- 추가하려는 데이터의 값은 전달된 인자를 통해 동적으로 할당되는 값이다 , 즉 어떤 값이 전달될지 모르므로

  Select 할 때와 달리 statement_name = connection_name.createStatement();를 작성하지 않고

   PreparedStatement preparedStatement_name = connection_name.prepareStatement(sql쿼리)로 작성하여 데이터를 추가할 것을 알린다 

  ex)"insert into pet values (?,?,?,?,?,?)

### 쿼리 실행

- 동적할당이 없을 경우
  - 사용법 : ResultSet resultset_name = statement_name.executeQuery(sqlQuery);
- 동적할당이 있을 경우
  - 동적 할당의 경우 반환되는 데이터들이 없으므로 ResultSet 객체가 필요 없고 바로update하면 된다 
  - return으로 몇개의row가 영향을 미쳤는지 반환합니다
  - 사용법 : int countRow = pstmt.executeUpdate();

### 실행 결과 출력

- 레코드의 칼럼은 배열과 달리 0부터 시작하지 않고 1부터 시작한다 
- 데이터베이스에서 가져오는 데이터의 타입에 맞게 getString또는 getInt등을 호출한다 
- getString과 getInt 뒤에 인자로 숫자가 들어오면 칼럼의 배열이고 문자열이 들어오면 칼럼의 이름이다
- 결과를 조회하기 위한 방법으로 while을 사용할 수 있지만 일반적으로 VO 객체를 사용하는 편
- VO 객체란 테이블의 칼럼들을 멤버 변수로 갖는 객체를 의미함

### 마지막

- 마지막으로 썼던 connection 과 preparestatement 를 닫아줍니다 
- .close()