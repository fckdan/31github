let a = ''; //first number
let b = ''; //second number
let sign = ''; 
let finish = false;

const digit = ['1', '2', '3', '4', '5', '6', '7', '8', '9', '.'];
const action = ['-', '+', '*', '/'];

const out = document.querySelector('.calc-screen p');

function clearAll () {
    a = ''; //first number and result
    b = ''; //second number
    sign = ''; 
    finish = false;
    out.textContent = 0;
}

document.querySelector('ac').onclick = clearAll;

document.querySelector('buttons').onclick = (event) => {
    
    if(!event.target.classlist.contains('btn')) return;

    if(event.target.classlist.contains('ac')) return;

    out.textContent = '';

    const key = event.target.textContent;

    if (digit.includes(key)) {
        a += key;
        console.log(a, b, sign);
        out.textContent = a;
    }
}