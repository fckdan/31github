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
        if (b ==='' && sign ===''){
            a += key;
            console.table(a, b, sign);
            out.textContent = a;
        }
        else if (a!=='' && b!=='' && finish){
            b = key;
            finish = false;
            out.textContent = b;
        

        }
        else{
            b += key;
            out.textContent = b;
        }
        console.table(a, b, sign);
    }

    if (action.includes(key)){
        sign=key;
        out.textContent = sign;
        console.table(a, b, sign);
        return;
    }

    if (key ==='='){
        if (b ==='') b = a;
        switch(sign){
            case "+":
                a = (+a) + (+b);
                break;
            case "-":
                a = a - b;
                break;
            case "X":
                a = a * b;
                break;
            case "/":
                a = a / b;
                break;
        }
        finish = true;
        out.textContent = a;
        console.table(a, b, sign);
    }
}