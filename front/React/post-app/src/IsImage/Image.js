import axios from 'axios';
import React, { useState } from 'react';


function Image(){
    const [Img, setImage]=useState(null)
    const onClick=async()=>{
        const formData= new FormData();
        formData.append('files',Img);
        const res = await axios.post('/api/upload',formData);
        console.log(res);
    }
    const onChange=(e)=>{
        setImage(e.target.files[0]);
    }

    return(
        <div>
            <input type="file" accept='image/*' onChange={onChange}></input>
            <button onClick={onClick}>제출</button>
        </div>
    )
}
export default Image