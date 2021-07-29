# MySQL

### MySQL 소개

- MySQL 은 가장 널리 사용되고 있는 관계형 데이터베이스 관리 시스템(RDBMS: Relational DBMS)
- MySQL은 오픈 소스이며, 다중 사용자와 다중 스레드를 지원
- c언어,c++,Java,PHP등 여러 프로그래밍 언어를 위한 다양한 API를 제공
- MySQL은 유닉스, 리눅스, 윈도우 등 다양한 운영체제에서 사용할 수 있으며,특히 PHP와 함께 웹 개발에 자주 사용
- MySQL은 오픈 소스 라이센스를 따르기는 하지만 상업적으로 사용할 때에는 상업용 라이센스 구입이 필요하다



## MySQL 기본

- DML(Data Manipulation Language)
  - 데이터 조작 언어
  - 데이터를 조작(선택,삽입,수정,삭제)하는 데 사용되는 언어
  - DML 구문이 사용되는 데상은 테이블의 행
  - DML 사용하기 위해서는 꼭 그 이전에 테이블이 정의되어 있어야 함
  - SQL문 중 SELECT, INSERT, UPDATE,DELETE 가 이 구문에 해당
  - 트랜잭션(Transaction)이 발생사는 SQL도 DML에 속함
    - 테이블의 데이터를 변경(입력/수정/삭제)할 때 실제 테이블에 와전히 적용하지 않고, 임시로 적용 시키는것
    - 취소 가능
- DDL(Data Definition)
  - 데이터 정의 언어
  - 데이터베이스, 테이블, 뷰,인덱스 등의 데이터 베이스 개체를 생성/삭제/변경하는 역할
  - CREATE,DROP,ALTER구문
  - DDL은 트랜잭션 발생시키지 않음
  - ROLLBACK이나 COMMIT 사용 불가
  - DDL문은 즉시MySQL에 적용
- DCL(Data Control Language)
  - 데이터 제어 언어
  - 사용자에게 어떤 권한을 부여하거나 빼앗을 때 주로 사용하는 구문
  - GRANT/REVOKE

### SHOW DATABASES

- 현재 서버에 어떤 DB가 있는지 보기

### USE

- 사용할 데이터베이스 지정
- 지정해 놓은 후 특별히 다시 USE문 사용하거나 다른 DB를 사용하겠다고 명시하지 않는이상 모든 SQL문은 지정 DB에서 수행
- USE database_name
- WorkBench 에서 직접 선택해 사용 가능
  - [Navigator]-> [SCHRMAS]->데이터베이스 선택

### SHOW TABLE

- 지정한 데이터베이스의 테이블 이름보기

### SHOW TABLE STATUS

- 지정한 데이터베이스 테이블 정보 조회

### DESCRIBE(DESC)

- 특정 테이블에 무슨 열이 있는지 확인
  - DESCRIBE table_name
  - DESC table_name

### SELECT

- <SELECT...FROM>

- 요구하는 데이터를 가져오는 구문

- 일반적으로 가장 많이 사용되는 구문

- 데이터베이스 내 테이블에서 원하는 정보를 추출

- SELECT 열 이름 from table_name

  - 테이블에서 필요로 하는 열만 가져오기 가능
  - 여러개의 열을 가져오고 싶을 때는 콤마로 구문
  - 열 이름의 순서는 출력하고 싶은 순서대로 배열 가능

- SELECT FROM WHERE

  - 기본적인 WHERE절 

    - 조회하는 결과에 특정한 조건으로 원하는 데이터만 보고 싶을 때 사용
    - SELECT 필드이름 FROM 테이블이름 WHERE 조건식
    - 조건이 없을 경우 테이블의 크기가 클수록 찾는 시간과 노력이 증가

  - 관계 연산자의 사용

    - OR연산자
    - AND연산자
    - 조건 연산자(=,<,>,<=,>=,<>,!=등)
    - 관계 연산자(NOT,AND,OR등)
    - 연산자의 조합으로 데이터를 효육적으로 추출

  - 데이터가 숫자로 구성되어 있어 연속적인 값은 BETWEEN ...AND 사용가능 

  - IN

    - 이산적인(DIscrete) 값의 조건에서는 IN()사용 가능

  - LIKE

    

    - 한글자와 매치하기 위해서는 '_' 사용

  - SubQuery

    - 서브 쿼리(SubQuery)
    - 쿼리문 안에 또 쿼리문이 들어 있는 것
    - 서브 쿼리의 결과가 둘 이상이 되면 에러발생

  - ANY

    - 서브쿼리의 여러 개의 결과 중 한 가지만 만족해도 가능
    - SOME은 ANY와 동일한 의미로 사용
    - =ANY구문은 IN과 동일한 의미

  - ALL

    - 서브 쿼리의 여러 개의 결과를 모두 만족 시켜야 함	

  - ORDER BY

    - 결과가 출력되는 순서를 조절하는 구문
    - 기본적으로 오름차순(ASCENDING) 정렬
    - 내림차순(DESCENDING)으로 정렬
      - 열 이름 뒤에 DESC적어 줄 것
    - ASC(오름차순)는  default이므로 생략 가능

  - DISTINCT

    - 중복된 것은 1개씩만 보여주면서 출력
    - 테이블의 크기가 클수록 효율적

  - LIMIT

    - 출력 개수를 제한
    - 상위의 N개만 출력하는 'LIMIT N '구문
    - 서버의 처리량을 많이 사용해 서버의 전반적인 성능을 나쁘게 하는 악성쿼리문 개선할 때 사용

  - GROUP BY

    - 그룹으로 묶어주는 역할
    - 집계함수(Aggregate Function)를 함께 사용
      - AVG:평균
      - MIN():최솟값
      - MAX():최대값
      - COUNT():행의 개수
      - COUNT(DISTINCT):중복이 제외된 행의 개수
      - STDEV():표준 편자
      - VARIANCE():분산
    - 효율적인 데이터 그룹화(Grouping)
    - 읽기 좋게 하기 위해 별칭 (Alias) 사용

  - HAVING

    - WHERE과 비슷한 개념으로 조건 제한
    - 집계 함수에 대해서 조건 제한하는 편리한 개념
    - HAVING절은 반드시 GROUP BY절 다음에 나와야 함

  - ROLLUP

    - 총합 또는 중간합계가 필요할 경우 사용
    - GROUP BY 절과 함께 WITH ROLLUP문 사용

  - JOIN

    - JOIN은 데이터 베이스 내의 여러 테이블에서 가져온 레코드를 조합하여 하나의 테이블이나 결과 집합으로 표현

### MySQL 내장함수

- 사용자의 편의를 위해 다양한 기능의 내장함수를 미리 정의하여 제공
- 대표적인 내장 함수의 종류
  - 문자열 함수
  - 수학 함수
  - 날짜와 시간 함수
- LENGTH()
  - 전달받은 문자열의 길이를 반환
- CONCAT()
  - 전달받은 문자열을 모두 결합하여 하나의 문자열로 반환
  - 전달받은 문자열 중 하나라도 NULL 이 존재하면 NULL을 반환
- LOCATE()
  - 문자열 내에서 찾는 문자열이 처음으로 나타나는 위치를 찾아서 해당 위치를 반환
  - 찾는 문자열이 문자열 내에 존재하지 않으면 0을 반환
  - MySQL에서는 문자열의 시작 인덱스를 1부터 계산
- LEFT(),RIGHT()
  - LEFT():문자열의 왼쪽부터 지정한 개수만큼의 문자를 반환
  - RIGHT():문자열의 오른쪽부터 지정한 개수만큼의 문자를 반환
- LOWER(),UPPER()
  - LOWER():문자열의 문자를 모두 소문자로 변경
  - UPPER():문자열의 문자를 모두 대문자로 변경
- REPLACE()
  - 문자열에서 특정 문자열을 대체 문자열로 교체 
- TRIM()
  - 문자열 앞이나 뒤, 또는 양쪽 모두에 있는 특정 문자를 제거
  - TRIM()함수에서 사용할 수 있는 지정자
    - BOTH:전달 받은 문자열의 양 끝에 존재하는 특정 문자를 제거(기본 설정)
    - LEADING:전달받은 문자열 앞에 존재하는 특정 문자를 제거
    - TRAILING:전달받은 문자열 뒤에 존재하는 특정 문자를 제거
  - 만약 지정자로 명시하지 않으면, 자동을 BOTH로 설정
  - 제거할 문자를 명시하지 않으면 ,자동으로 공백을 제거
- FORMAT()
  - 숫자 타입의 데이터를 세 자리마다 쉼표(,)를 사용하는 "#,###,###.##"형식으로 변환
  - 반환되는 데이터의 형식은 문자열 타입
  - 두번째 인수는 반올림할 소수 부분의 자릿수
-  FLOOR(),CEIL(),ROUNT()
  - FLOOR():내림
  - CEIL():올림
  - ROUNT():반올림
- SQRT(),POW(),EXP(),LOG()
  - SQRT():양의 제곱근
  - POW():첫 번째 인수로는 밑수를 전달하고, 두 번째 인수로는 지수를 전달하여 거듭제곱 계산
  - EXP():인수로 지수를 전달받아, e의 거듭제곱을 계산
  - LOG():자연로그 값을 계산
- SIN(),COS(),TAN()
  - SIN():사인값 반환
  - COS():코사인값 반환
  - TAN():탄젠트값 반환
- ABS(),RAND()
  - ABS(X):절대값을 반환
  - RAND():0.0보다 크거나 같고 1.0보다 작은 하나의 실수를 무작위로 생성
- NOW(),CURDATE(),CURTIME()
  - NOW():현재 날짜와 시간을 반환, 반환되는 값은'YYY-MM-DD HH:MM:SS'또는 YYYYMMDDHHMMSS형태로 반환
  - CURDATE():현재 날짜를 반환, 이때 반환 되는 값은 'YYY-MM-DD'또는 YYYYMMDD 형태로 반환
  - CURTIME():현재 시각을 반환 , 이때 반환 되는 값은 'HH:MM:SS'또는 HHMMSS형태로 반환
- DATE(),MONTH(),DAY(),HOUR(),MINUTE(),SECOND()
- MONTHNAME,DAYNAME
- DAYOFWEEK(),DAYOFMONTH(),DAYOFYEAR
  - 일자가 해당 주,월,연도에서 몇번째 날인지를 반환
- Date_FORMAT()
  - 전달받은 형식에 맞춰 날짜와 시간 정보를 문자열로 반환

## SQL고급

- CREATE TABLE AS SELECT
  - 테이블과 똑같은 테이블을 생성
- CREATE DATABASE
  - CREATE DATABASE 문은 새로운 데이터베이스를 생성
  - USE문으로 새 데이터베이스를 사용
- CREAE TABLE table_name(Field Type Null Key Default Extra)
  - 새 테이블을 생성할 수 있음
- ARTER TABLE
  - ARTER TABLE 문과 함께 ADD문을 사용하면,테이블에 컬럼을 추가할 수 있음
  - ARTER TABLE 문과 함께 MODIFY문을 사용하면, 테이블의 컬럼 타입을 변경할 수 있음
  - ARTER TABLE 문과 함께 DROP문을 사용하면,테이블에 컬럼을 삭제할 수 있음

### INDEX

- 인덱스(Index)
  - 테이블에서 원하는 데이터를 빠르게 찾기 위해 사용
  - 일반적으로 데이터를 검색할 때 순서대로 테이블 전체를 검색하므로 데이터가 많으면 많을수록 탐색하는 시간이 늘어남
  - 검색의 질의를 할 때 테이블 전체를 읽지 않기 때문에 빠름
  - 설정된 컬럼 값을 포함한 데이터의 삽입, 삭제 ,수정 작업이 원본 테이블에서 이루어질 경우 인덱스도 함께 수정되어야 함
  - 인덱스가 있는 테이블은 처리 속도가 느려질 수 있으므로 수정보다는 검색이 자주 사용되는 테이블에서 사용하는 것이 좋음
- CREATE UNIQUE INDEX
  - 중복 값을 허용하지 않는 인덱스
- FULLTEXT INDEX
  - FULLTEXT INDEX는 일반적인 인덱스와는 달리 매우 빠르게 테이블의 모든 텍스트 컬럼을 검색
- INDEX 삭제(DROP INDEX)
  - DROP문을 사용하여 해당 테이블에서 명시된 인덱스를 삭제
  - DROP문은 내부적으로 ALTER으로 자동 변환되어 명시된 이름의 인덱스를 삭제

### VIEW

- 뷰(VIEW)는 데이터베이스에 존재하는 일종의 가상 테이블
- 실제 테이블처럼 행과 열을 가지고 있지만 실제로 데이터를 저장하진 않음
- MySQL에서 뷰는 다른 테이블이나 다른 뷰에 저장되어 있는 데이터를 보여주는 역할만 수행
- 뷰를 사용하면 여러 테이블이나 뷰를 하나의 테이블처럼 볼 수 있음
- 뷰의 장점
  - 특정 사용자에게 테이블 전체가 아닌 필요한 컬럼만 보여줄 수 있음
  - 복잡한 쿼리를 단순화 해서 사용
  - 쿼리 재사용 가능
- 뷰의 단점
  - 한번 정의된 뷰는 변경할 수 없음
  - 삽입, 삭제 ,갱신 작업에 많은 제한 사항을 가짐
  - 자신만의 인덱스를 가질 수 없음
- CREATE VIEW

### INSERT

- INSERT INTO table_name (열)
  - 테이블 이름 다음에 나오는 열 생략가능
  - 생략할 경우에 VALUE 다음에 나오는 값들의 순서 및 개수가 테이블이 정의된 열 순서 및 개수와 동일해야 함
- INSERT INTO table_name1 SELECT * from table_name2
  - table_name2에 있는 내용을 table_name1에 삽입

### UPDATE

- 기존에 입력되어 있는 값 변경하는 구문
- WHERE 절 생략 가능하나 테이블의 전체 행의 내용 변경

### DELETE

- 행 단위로 데이터 삭제하는 구문
- DELETE FROM 테이블이름 WHERE 조건
- 데이터는 지워지지만 테이블 용량은 줄어들지 않음
- 원하는 데이터만 지울 수 있음
- 삭제 후 잘못 삭제한 것을 되돌릴 수 있음

### TRUNCATE

- 용량이 줄어 들고, 인덱스 등도 모두 삭제
- 테이블은 삭제하지는 않고, 데이터만 삭제
- 한꺼번에 다 지워야 함
- 삭제 후 절대 되돌릴 수 없음

### DROP TABLE

- 테이블 전체를 삭제,공간,객체를 삭제
- 삭제 후 절대 되돌릴 수 없음

### DROP DATABASE

- DROP DATABASE 문은 해당 데이터베이스를 삭제