# useState

### 사용법

- const [state , setstate]=useState();

### useState의 특성

- 업데이트 함수(setState함수)를 사용하지 않고 사용자가 임의로 상태값을 변경한다면 리엑트는 변경사항을 인식하지 못하고 재렌더링(re-render)을 수행하지 않아 화면의 값이 갱신되지 않는다 , 따라서 state의 값을 변경할 때에는 반드시 업데이트 함수를 사용해야 한다

- 리엑트에서 setstate함수를 사용하여 상태를 업데이트 할 경우 업데이트 상태는 즉시 반영되지 않는다 왜냐하면 setState는 비동기적으로 작동하기 때문이다(즉 리렌더링이 된 후에야 비로소 업데이트가 된 state가 반영됨)

- 여러 state를 동시에 업데이트하는 경우 리엑트는 state를 batching하여 업데이트를 진행함(batching = 전달된 오브젝트를 하나로 합치는 작업)batching은 object composition이라고도 불

  ```javascript
  const singleObject = Object.assign({},
    objectFromSetState1,
    objectFromSetState2,
    objectFromSetState3
  );			
  //Object.assign({대상 객체},{출처 객체}): 열거할 수 있는 하나 이상의 출처 객체로부터 대상 //객체로 속성을 복사할때 사용 대상 객체를 반환
  ```

  ```react
  const [value, setValue] = useState(0);
  
  setValue(prev => prev + 1);
  setValue(prev => prev + 1);
  setValue(prev => prev + 1);
  
  // Expected(예상 출력) value: 3
  // Result(실제 출력) value: 3
  ```

- 이러한 특성 때문에 업데이트 된 state를 즉시 반영해야 할 때 우리는 useEffect를 사용한다

## 해결법(함수형 업데이트)

- 이러한 비동기적 방법을 해결하기 위해 함수형 업데이트를 사용한다

```react
const [value, setValue] = useState(0);

setValue(prev => prev + 1);
setValue(prev => prev + 1);
setValue(prev => prev + 1);

// Expected(예상 출력) value: 3
// Result(실제 출력) value: 3
```

