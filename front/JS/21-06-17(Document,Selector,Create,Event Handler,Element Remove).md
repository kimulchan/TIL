### Document

1. BOM(브라우저 객체 모델)
   - 브라우저와 관련된 객체들의 집합
   - DOM 도 BOM 중 하나
   - 최상위 객체는 window
2. DOM
   - Document(문서) Object(객체) Model의 약자
   - html 문서의 테그들을 javascript 가 이용할수 있는 객체로 만들면 문서객체라 할 수 있음
   - 정확하게는 HTML 페이지를 인식하는 방식 
   - 좁은 의미로 보자면 document 객체와 관련된 객체의 집합

### Selector(선택자)

1. document.getElementsByClassName()
   - document.getElementsByClassName(클래스명)[순서]
2. document.getElementsByTagName()
   - document.getElementsByTagName(태그명)[순서]
3. document.getElementById()
   - document.getElementById(ID명);
   - Id는 하나만 사용하기 때문에 Elements를 사용
4. document.querySelector()
   - querySelector은 처음 위치한 것만 적용된다
   - 순서를 지정할 수 없음
   - 순서를 지정하려면 querySelectorAll을 사용
5. document.querySelectorAll()
   - 순서를 지정할 때 사용

### Create(생성)

1. document.createElement(HTML요소)
   - 지정된 요소를 생성
2. document.write(텍스트)
   - HTML출력 스트림을 통해 텍스트를 출력
3. document.createTextNode('텍스트')
   - 텍스트 노드를 정함

### Event Handler

1. (선택자).(이벤트)=function(){실행할 코드)
2. 선택자.addEventListener('이벤트',함수)

### Element Remove

1. removeChild()
   - 제거하고자 하는 element의 부모.removeChild(제거하고 싶은 element);
2.  element.parentNode.removeChild()
   - 제거하고자 하는 element.parentNode.removeChild(제거하고자 하는 element)
3. element.remove()
   - 요소를 제거함

