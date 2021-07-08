import React from 'react';
import Menu from '../Menu/Menu';
import './Header.css';
function Header(){
    return (
        <div className='Head'>
            <div className='Title'>
                Forest Post
            </div>
            <Menu></Menu>
        </div>
    );
}
export default Header;