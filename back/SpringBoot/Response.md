# Response

### Response 가 나가는 순서

1. request 가 오게 되면 object mapper을 통해 object로 바뀐다
2. method를 통해 object를 던지면 object mapper을 통해 json으로 바뀌며 responce가내려진다

### Response를 내려주는 방법(일반 json을 리턴하는 경우)

- ResponseEntity객체를 이용함

  ```java
  //예시
  @PutMapping("/put")
  public ResponceEntity<user> put (@RequestBody User user){
  	ResponseEntity.status(HttpStatus.CRATED).body(user);
  }
  ```

  위 예시는 put에서 user라는 객체가 생성 되었을때 201 response를 내려주는 예시이다 

### Response를 내려주는 방법(HTML을 리턴할 때 json을 받아오는 법)

- ResponseEntity를 이용한 방법

  ```
  @Controller
  public class PageCountroller{
  	@RequestMapping("/main")
  	public String main(){
  		return "main.html";
  	}
  	
  	@ResponseBody
  	@GetMapping("/user")
  	public User user(){
  		var user = new User()
  		user.setName("steve");
  		user.setAddress("패스트 캠퍼스");
  		return user;
  	}
  }
  ```

  

### 에러코드

- 200: ok
- 201:create

