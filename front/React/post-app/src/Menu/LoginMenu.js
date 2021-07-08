import React from "react";
import "./LoginMenu.css";
import SignUp from "./SignUp";
function LoginMenu({ modal, isNotModal,LoginSet}) {
  return (
    <>
          
      {modal ? (
        <>
       
        <div className="LoginMenu" onClick={isNotModal}></div>
          <div className="LoginPage">
            <div className="LoginText">Forest Login</div>
            <div className="InputWrapper">
              <div className="LoginInputs">
                <p>Forest Id</p>
                <input className="IsInput"></input>
              </div>
              <div className="LoginInputs">
                <p>Forest Password</p>
                <input type="password" className="IsInput"></input>
              </div>
              <button onClick={LoginSet} className='LoginButton'>Login</button>
              <div style={{display:'flex',justifyContent:"center",marginTop:'10px',fontSize:'13px'}}>비밀번호를 잃어버리셨습니까?</div>
            </div>
            <div className='getIdAndPass'>
               <div >회원이 아니십니까?</div><div className='qLogin' >회원가입하기</div>
            </div>
          </div>
        </>
      ) : null}
    </>
  );
}
export default LoginMenu;

