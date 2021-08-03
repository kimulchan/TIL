# POST API

### POST

- 의미:리소스 생성, 추가
- CRUD: C
- 멱동성 ::x:
- 안정성 ::x:
- Path Variable::o:
- Query Parameter ::small_red_triangle:
- DataBody::o:

### 개념

- 주로 데이터를 주고받을 때 xml,json 형태로 주고 받는다 현재는 전부 json
- json의 기본 구조는 { "key": "value"}
- json의 데이터 형태는 string, number,boolen,object,array 이 있음
- json을 사용하는 규칙
  - json은 주로 스네이크 케이스를 사용함,특별한 경우 카멜 케이스를 사용함

### annotation

- @PostMapping: Post Resource 설정
- @RequestBody: Request Body 부분 Parsing
- @JsonProperty: 한개의 변수에 사용할 변수명을 정할 수 있음
- @JsonNaming:일괄적으로 snack case 와 camel case를 줄 수 있음
  - ex) @JsonNaming(value = PropertyNamingStrategy.SnakeCaseStrategy.class)