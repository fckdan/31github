const canvas = document.getElementById("project");
const ctx = canvas.getContext("2D");

const ground = new Image();
ground.src = "img/ground.png";

const foodImg = new Image();
foodImg.src = "img/food.png";

let box= 32;

let score= 0;

let food = {
    x: Math.floor((Math.random() * 17 + 1)) * box,
    y: Math.floor((Math.random() * 15 + 1)) * box,
};

let snake = [];
snake[0] = {
    x: 9 * box,
    y: 10 * box
};

function drawGame() {
    ctx.drawImage(ground, 0, 0);

    ctx.drawImage(foodImg, food.x, food.y);
}

let project = setInterval(drawGame, 100);

