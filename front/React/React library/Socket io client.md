# Socket io client

### 설치

```
yarn add soket.io-client
npm i socket.io-client
```



### 설정

```
const socketClient = io("연결할 서버 주소")
```



### emit

- 사용법 : socketClient.on("connect",처리할 메소드)
- emit에서 서버에 요청을 보냄

### on

- 사용법 : socketClient.emit("first Request",{data:"first Request"})
- on을 통해 event에 맞추어 응답을 함