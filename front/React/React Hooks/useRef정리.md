# useRef

### 사용법

- const refContainer = useRef(기본값);

### 특성

- react에서 useState는 데이터를 저장하지만 state가 바뀔 때마다 컴포넌트가 리렌더링 된다는 단점이 있다 이러한 단점을 이러한 단점을 보완하기위해 나온것이 useRef이다
- Ref 객체의 current 값은 선택한 DOM 을 가르키게 된다
- Ref의 default 값은 useRef 를 선언할 때 넣어주었던 기본값이 된다
- ref 를 전달할 때 ref props 로 전달하면 안됨 React에서 예약어에 속한 속성이름으로 오류를 유발한다

### 활용

- refs로 버튼 상태 관리 
- 스크룰 애니메이션