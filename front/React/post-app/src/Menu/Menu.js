import React, { useEffect, useRef, useState } from 'react';
import './Menu.css'
import LoginMenu from './LoginMenu';
import {Route} from 'react-router-dom';
function Menu (){
    const [login,setLogin]=useState(false)
    const [modal,setModal]=useState(false);
    const isLogin=()=>{
        console.log(0);
        setModal(true);
    }
    const isNotModal=()=>{
        setModal(false)
    }
    const LoginSet=()=>{
        setLogin(true)
        setModal(false)
    }
    return(
        <>
        <LoginMenu modal={modal} isNotModal={isNotModal} LoginSet={LoginSet}></LoginMenu>
        
        
            {login?<button className='login'>추가</button>:<button className='login 'onClick={isLogin}>로그인</button>}
        
        </>
    );
}

export default Menu;