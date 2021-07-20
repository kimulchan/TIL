# useReducer

### 사용법

- const [상태객체 , <dispatch 함수>]=useReducer (<reducer 함수>,<초기상태>)
- reducer 함수
  - 현재 상태 (state) 객체와 행동(action) 객체를 인자로 받아서 새로운 상태객체(state)를 반환하는 함수입니다.
-  dispatch함수
  -  컴포넌트 내에서 상태 변경을 일으키기 위해서 사용되는데 인자로 reducer 함수에 넘길 (action)객체를 받습니다
  - dispatch를 사용해서 값에 변화를 줄 때 기본적인 dispatch 함수에 첫번째 인자로 object를 넣는것이 아닌 Object를 return 하는 함수로 관리한다
- 행동(action)객체
  -  관행적으로 어떤 부류에 행동인지 나타내는 type 속성과 해당 행동과 관련된 데이터를 담고 있습니다 
  - useReducer에 적용되는 switch에 action.type들을 String으로 관리하는 것이 아닌 변수에 담긴 String 으로 관리한다

다시말해 컴포넌트에서 dispatch 함수에 행동(action)을 던지면, reducer함수가 이 행동(action)에 따라 상태(state)를 변경해 줍니다 

### 특성

- useReducer를 사용하면 상태관리에 관한 로직이 component에서 분리할 수 있는 장점이 있다
- type이 무었인지에 따라서 다양하게 값을 처리할 수 있다 
- state과 같이 원본의 불변성을 유지해야 한다 
- React 는 state를 변경하면 바뀐 부분을 새로 그리기 위해 모든 컴포넌트를 다시 실행한다 스케일이 커지는 프로젝트 일수록 최적화에 신경써야 한다 (코드를 체계적으로 관리 필요) 하지만 useReducer을 사용하면 코드량은 늘어나지만 더 체계적이다

### useReducer vs useState

- 컴포넌트에서 관리하는 값이 딱 하나고 그값이 단순히 숫자 문자열 또는 boolean 값이라면 확실히 useStete로 관리하는 것이 편하다
- 만약에 컴포넌트에서 관리하는 값이 여러개가 되어서 상태의 구조가 복잡해 진다면 useReducer로 관리하는것이 편해질 수 있다