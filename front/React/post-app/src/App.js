import React, { useState } from "react";
import Header from "./Header/Header";
import "./App.css";
import PostAPI2 from './IsPost/PostAPI2';
import PostAPI from "./IsPost/PostAPI";
import Menu from './Menu/Menu';
import Image from "./IsImage/Image";
function App() {

  return (
    <>
      <Header></Header>
      
      <div className='next'>
        </div>      
      <div className='Wrap'>
        {/* <Image></Image> */}
        <div className="PWrap">
          <PostAPI2></PostAPI2>
        {/* <div className={num!=0?'button':'nbutton'} onClick={num!=0?dec:null}>&#128072;</div> */}
          {/* <PostAPI num={num}></PostAPI> */}
          {/* <div className='button' onClick={onc}>&#128073;</div> */}
        </div>
      </div>
    </>
  );
}

export default App;
