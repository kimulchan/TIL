# Canvas(2강)



### animation stop

- 특정 조건이 되었을때 함수를 return 해줌
- requestAnimation:특정 조건이 되었을때 cancleAnimationFrame(requestAnimationFrame())을 해준다
  - 외부에서 클릭을 했을때 멈추게 할때 효과적임

- setInterval:특정 조건이 되었을때 clearInterval을 사용하여 중지한다

### Image

- drawImgage	

  - drawImage(이미지,x위치,y위치);
    - 원본크기로 이미지를 설정함
  - drawImage(이미지,x위치,y위치,width,height);
  - drawImage(이미지,소스이미지의 x위치,소스 이미지의 y위치,소스 이미지의 높이,소스 이미지의 너비, 그릴 x위치 , 그릴 y위치,그려질 높이, 그려질 너비)
    - 이미지 자르기와 같음

  

### 그림판

- cilentX,cilentY
  - 브라우저 위쪽에서 마우스의 위치까지를 나타낸 것
- layerX,layerY
  - canvas에 위쪽에서부터의 위치를 나타냄

### 저장

- toDataURL('type')
  - 자세한건 다음