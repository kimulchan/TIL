# GET API

### GET 

- 의미: 리소스 취득
- CRUD : R
- 멱등성: :o:
- 안정성 : :o:
- Path Variable: :o:
- Query Parameter : :o:
- databody::x:

### GET API annotation

- @RestCountroller: rest api를 사용하게 해주는 annotation

- @RequestMapping(url):

  - 클래스 레벨의 RequestMapping은 기준이 되고 Method 레벨의 RequestMapping으로 세분화 된다
  - default 값으로 url 만 넣으면 get/post/put/delete/option/tract 가 모두 지정된다
  - 인자에 value값으로 URL 패턴을 지정할 수 있다
  - 인자에 method 값으로 get/post/put/delete/option/tract 에서 사용할 method 를 선택할 수 있다

- @GetMapping: Get method만 사용하는 url을 지정해 줄 수 있다

- @PathVariable: 

  - variable 한 값을 사용할 때 사용 

  - 만약 url 에 있는 변수 이름과 다른 변수 이름을 써야 하는 경우 @PathVariable(name=url변수)을 해주고 그 뒤에 원하는 변수명을 넣으면 그 변수명으로 사용할 수 있다

    ex) url=/path-variable/{name} 일때 public pathVariable (@PathVariable(name=name) String pathname){

    ​	return pathname;

    }

- @RequestParam: 단일 파라미터를 전달받을 때 사용하는 annotation

### query-param 전달 방법

- 쿼리 파라미터는 검색을 할 때 메게변수로 사용할 수 있다

- 구성:/query-param?key=value&key2=value

- #### 방법 1

  - Map 함수를 이용하여 파라미터를 받는 형식

  - 장점: 파라미터에 들어오는 key 값을 직접 명시할 필요가 없다

  - 단점: 무슨 파라미터가 들어오는지 알 방법이 없다

  - 예시

    ```java
    @GetMapping(path="query-param")
        public String queryParam(@RequestParam Map<String,String> qureyParam){
            //Map으로 파라미터를 받는경우 파라미터를 정확히 어떤 파라미터인지 알지 못한다
    
            StringBuilder sb = new StringBuilder();
            qureyParam.entrySet().forEach(
                    entry ->{
                        System.out.println(entry.getKey());
                        System.out.println(entry.getValue());
                        System.out.println("\n");
    
                        sb.append(entry.getKey()+ " = "+ entry.getValue()+"/n");
                    }
    
            );
            return sb.toString();
    
        }
    ```

    

- #### 방법2

  - 명시적으로 queryparam을 설정해주는 방법

  - 장점: 들어올 파라미터를 관리할 수 있다

  - 단점: 들어올 파라미터가 많아지면 작성하기 어렵다

  - 예시

    ```java
     @GetMapping("query-param02")
        public String queryParam02(
            @RequestParam String name,
            @RequestParam String email,
            @RequestParam int age
            ){
    
            System.out.println(name);
            System.out.println(email);
            System.out.println(age);
    
            return name+" "+email+" "+ age;
        }
    ```

- #### 방법 3

  - request dto를 활용한 예제

  - 현재 가장 많이 쓰이는 방식

  - 객체를 활용한다 (@RequestParam을 이용하지 않음)

  - 예시

    ```java
    //dto 예시
    
    package com.example.demo.countroller.dto;
    
    public class UserRequest {
        private String name;
        private String email;
        private int age;
    
        public String getName() {
            return name;
        }
    
        public void setName(String name) {
            this.name = name;
        }
    
        public String getEmail() {
            return email;
        }
    
        public void setEmail(String email) {
            this.email = email;
        }
    
        public int getAge() {
            return age;
        }
    
        public void setAge(int age) {
            this.age = age;
        }
    
        @Override
        public String toString() {
            return "UserRequest{" +
                    "name='" + name + '\'' +
                    ", email='" + email + '\'' +
                    ", age=" + age +
                    '}';
        }
    }
    
    ```

    ```java
     ///get method 예시
    	@GetMapping("query-param03")
        public String queryParam03(UserRequest userRequest){
            System.out.println(userRequest.getName());
            System.out.println(userRequest.getEmail());
            System.out.println(userRequest.getAge());
    
            return userRequest.toString();
        }
    
    ```

    