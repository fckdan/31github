<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Камень-Ножницы-Бумага</title>
</head>
<body>

  <h1>Камень-Ножницы-Бумага</h1>
  <p>Выберите: камень, ножницы или бумага.</p>
  
  <button onclick="playGame('камень')">Камень</button>
  <button onclick="playGame('ножницы')">Ножницы</button>
  <button onclick="playGame('бумага')">Бумага</button>

  <p id="result"></p>

  <script>
    function playGame(userChoice) {
      const choices = ['камень', 'ножницы', 'бумага'];
      const computerChoice = choices[Math.floor(Math.random() * choices.length)];

      let result;

      if (userChoice === computerChoice) {
        result = 'Ничья!';
      } else if (
        (userChoice === 'камень' && computerChoice === 'ножницы') ||
        (userChoice === 'ножницы' && computerChoice === 'бумага') ||
        (userChoice === 'бумага' && computerChoice === 'камень')
      ) {
        result = 'Вы победили!';
      } else {
        result = 'Вы проиграли!';
      }

      document.getElementById('result').innerText = `Вы выбрали ${userChoice}. Компьютер выбрал ${computerChoice}. Результат: ${result}`;
    }
  </script>
</body>
</html>
