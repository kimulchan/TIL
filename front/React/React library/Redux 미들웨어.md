# Redux 미들웨어

### 왜 Redux 인가

- redux 는 애플리케이션 상태를 관리하기 위한 오픈소스  크로스 플랫폼 라이브러리이다
- redux는 React및 React Native 와 함께 널리 사용되지만 사용은 이러한 기술에 국한되지 않는다
- Angular, Vue,Ember,Flutter 또는 Vanilla Js 와 같은 모든 UI 레이어 또는 프레임워크와 연결할 수 있는 독립적인 도구임
- ![Redux 이미지](https://www.eternussolutions.com/wp-content/uploads/2020/12/redux-1.png)

- 한 component에서 다른 component 로 데이터를 전달하거나 공유하는 것은 중요한 작업이고 때론 매우 복잡할 수 있음

- Redux는 단일 저장소 (Single source of truth) 를 유지하며 구성요소는 redux 저장소에 연결하여 원하는 데이터를 다시 가저올수 있다

### Redux의 데이터 흐름

- Redux 는 단방향 데이터의 흐름을 따른다
- 리덕스에는 action,reducer,store의 3가지 주요 구성요소가 있다
- ![Redux 이미지](https://www.eternussolutions.com/wp-content/uploads/2020/12/redux-2.png)

- action은 간단한 자바스크립트 객체이다

  여기는 우리가 사용하는 작업 유형 지정을 하는  'type'속성이 있으며 선택적으로 redux저장소에 일부 데이터를 보내는데 사용하는 payload 속성도 가질 수 있다

- reducer 는 애플리케이션의 상태의 변경 사항을 결정하고 업데이트 된 상태를 반환하는 함수이다 그리고 그들을 인수로 취해 store 내부의 상태를 업데이트 한다

### Redux 미들웨어란

- Redux 미들웨어는 action과 reducer 사이에 위치하며 reducer 기능에 도달하기 전 액션과 상호작용 할 수 있는 함수 또는 코드 조각이다 
- redux 미들웨어는 logging, 비동기 API호출과 같은 다양한 용도로 사용할 수 있음

### Redux thunk란 ?

- Redux Thunk 스토어는 dispatch 메소드를 인수로 사용하고 나중에 API 또는 sideeffect가 발생한 후 동기 액션을 dispatch 하는데 사용되는 함수(thunk)를 반환하는 액션 생성자를 호출할 수 있는 미들웨어이다.

### Redux saga 란?

- Redux Saga는 API 호출이나 sideEffect를 처리하는데 도움이 되는 미들웨어 라이브러리이다 
- Redux Saga는 비동기 코드를 작성하는데 도움이 되는 Generators 라는 ES6 기능을 사용한다
- Generators 함수를 호출한다고 한번에 실행되지는 않는다 하지만 itorator 객체를 반환 한다 
- iterator객체에서 next() 메서드를 호출하면 다음 yield 키워드가 표시될 때까지 함수본문이 실행된다 
- next() 메서드는 yield 에 의해 반환된 값이 있는 "value" 속성과 함수의 실행 완료 여부를 나타내는"done"속성이 있는 객체를 반환한다

### Redux saga

| Redux-Thunk                                          | Redux-saga                                                   |
| ---------------------------------------------------- | ------------------------------------------------------------ |
| 상용구 코드 감소                                     | 더 많은 상용구 코드                                          |
| redux-saga 에 비해 이해하기 쉽다                     | 제너레이터 함수, redux-saga 효과 등 배워야 할 개념이 많아 이해하기 어려움 |
| 확장이 어려울 수 있음                                | redux-thunk에 비해 확장이 용이함                             |
| 작업 작성자가 너무 많은 비동기 논리를 보유할 수 있음 | 액션 크리에이터는 순수함을 유지한다                          |
| 테스트가 어려울 수 있음                              | 모든 비동기 로직이 함께 유지되므로 테스트하기가 비교적 쉽다  |

