# Canvas(3강)

### Video

- 크롬 브라우저에서 소리는 자동 재생(autoplay)할 수 없기 때문에 동영상을 자동 재생하기 위해서는 video 테그 안에 인자로 muted 를 적어주어야 함
- 반복 재생은 loop를 사용함
- canplaythrough:비디오가 재생준비가 되면 발생하는 이벤트 객체이다
- 동영상을 캔버스에 표현할 때에도 drawImage를 쓴다
- currentTime:비디오가 진행된 초를 나타냄
- getImagedata: 이미지의 데이터의 속성을 나타낸 것 
- getImagedata.data: 960000개의 배열이 있음 rgba * 240000
- putImageData: 적용된 값을 반영하는 값

