# Canvas(강의 1)

### Rect(사각형)

- fillRect(x좌표,y좌표,width,height);
  - 사각형 모양만큼 채움
  - x좌표,y좌표가 0,0이면 왼쪽 위에 그린다는 뜻
- clearRect(x좌표,y좌표,width,height)
  - 사각형 모양만큼 지움
- strockRect(x좌표,y좌표,width,height)
  - 사각형 모양만큼 선을 그림

### 그리기

- beginpath()
  - 선을 시작할때 선의 시작을 알려주는 역할을 함
- moveto(x좌표,y좌표)
  - 그림을 그릴때 어느위치에서 그릴지 붓의 위치를 옮김
- lineto(x좌표,y좌표)
  - 실제로 선을 만드는 것이지만 선이 바로 보이지는 않음(stroke 함수를 써야 선이 보임)
- closePath()
  - 선을 끝낼때 선의 끝을 알려주는 역할을 함

- fillStyle='색깔'
  - 칠할 색깔을 정함

### 원

- arc(중심점x좌표,중심점y좌표,반지름,시작각도,끝 각도,불리언 값);
  - 호를 그리는 메서드임(360도를 그리면 원이 됨)
  - 각도를 라디안 값으로 써야함(라디안 값:360=PI/180)
  - 불리언 값은 시계방향(true)으로 정할지 반시계 방향(false)으로 그릴지 정하는 것이다 

### 애니메이션

- reflow:시각화 할 것을 계산하는 역할
- repaint:계산된 것을 시각화 하는 역할
- requestAnimationFrame(콜백 함수)
  - 콜백을 불러 애니메이션화를 함
  - reflow가 되었을 때 repaint를 하게 함
- setInterval
  - 최신화가 안되있음
  - 속도 값을 조작하기 쉬움