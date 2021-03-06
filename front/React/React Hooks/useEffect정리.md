# useEffect

### 사용법

​	useEffect(()=>{

​		effect 함수(마운트 되었을 때 실행)

​		return (언마운트 되었을 때 실행)

​	},[dep(의존성 배열)]);

### 특성

- useEffect는 dependency배열(의존성 배열)내에 지정된 값의 변화가 일어났을때 effect 함수가 실행된다
- 주로 컴포넌트가 마운트 될 때 API를 통해 데이터를 가져오거나 state값 또는 props값이 변경될 때 특정 함수를 실행시키는 등의 작업을 하는데 사용한다
- 함수 컴포넌트에서 return 구문 밖에서의 함수 실행은 거의 모두 useEffect 내에 작성된다 또한 하나의 컴포넌트는 하나 이상의 useEffect 를 가질 수 있다
- 이펙트가 매 렌더링때마다 실행되는 것을 방지하기 위해 두번째 인자에 값을 넘길 수 있다 이 배열은 이팩트가 실행되기 위한 의존성 배열이다 
  - [] (빈 배열) : 컴포넌트가 마운트 되었을 때 한 번만 실행하고 언마운트 될 때 정리 시키기 위한 방법
  - [state,props] : state 나 props가 변경되었을 때만 사용(dependency배열에는 이펙트 함수 내에서 사용되는 모든 값이 포함되야 한다 ref,setState등의 값은 변경되지 않는다는 것을 리엑트가 보장해줌으로 생략이 가능하다)
- useEffect 로 무한루프 만드는 것이 가능

### 경고

- useEffect 에서 흔히 볼 수 있는 경고는 이펙트 함수 내에서 사용하는 값이 있다 하더라도 의존성 배열에 빈 배열을 넣는 것이다 , 이경우 CRA(create-react-app)를 사용해 프로젝트를 생성하였거나 React Eslint(오류 잡는 도구)를 추가한 경우 경고가 발생한다

