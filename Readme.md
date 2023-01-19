# Курсовая работа - игра Wordly
## Об игре
Wordly - игра "угадай загаданное слово". Цель игрока - за отведённое число попыток угадать слово.\
После каждой попытки компьютер должен вывести игроку подсказку: число верно угаданных букв, букв не на своём месте и букв, которых в загаданном слове нет.
## Пример игры
1. Компьютер загадывает слово из определённого количества букв и показывает игроку, сколько букв в слове:
>**_ _ _ _ _**
2. Игрок вводит слово:
>**f i g h t**
3. Компьютер определяет, сколько букв в слове отгаданы верно или почти верно, и показывает это пользователю:
>**f i g h t**
> 
> f - right char and place\
> g, i - right char\
> h, t - wrong char and place
4. Игрок вводит новое слово:
>**f u n g i**
5. Если все пять букв верные и находятся на своём месте - игрок победил:
>**f u n g i**
>
> You won! The word was **FUNGI**
## Правила игры
+ Введённое слово должно быть действительным - входить в словарь слов (подготовлен заранее)
+ Слово должно содержать ровно требуемое количество букв - если компьютер загадал слово из 5 букв, слова из 4, 6 и так далее букв не подходят для ответа
+ Игрок может вводить одно и то же слово сколько угодно раз
+ Если игрок не угадал слово за отведённое число попыток - компьютер объявляет поражение и раскрывает загаданное слово
## Уточнения к реализации
+ Как выводить ход игры - построчно или с обновлением экрана - не важно для зачёта выполненной работы
+ Как выводить подсказки - построчно, при помощи условных символов, визуального выделения или другим образом - не важно для зачёта выполненной работы
+ Подготовлены словари для слов от 4 до 7 букв - можно использовать только один словарь или дать игроку выбрать количество букв в слове
+ После завершения игры - в случае проигрыша или победы - можно как завершить работу приложения, так и предложить игроку начать новую игру
+ Любые дополнительные усложнения приветствуются, но не обязательны для зачёта выполненной работы
## Требования к выполненной работе
1. Выполненная работа должна располагаться в директории, выделенной вам ментором, изменение исходного кода проекта недопустимо
2. Компиляция и запуск проекта должен происходить в докер-контейнере (подготовлен заранее), использование своего окружения недопустимо
3. Игра должна компилироваться и выполняться без ошибок 
4. Игра должна поддерживать все перечисленные выше правила и не допускать их нарушения
5. Игра должна завершаться только по желанию игрока или после его победы/поражения
## Подсказки к работе
+ Чтобы запустить контейнер - в коммандной строке, находясь в папке с проектом (на одном уровне с файлом docker-compose.yml) выполните команду `docker-compose up -d`
+ Чтобы перейти в командную строку проекта - используйте **Docker desktop** (если у вас линукс - обратитесь к ментору за подробными инструкциями)
+ Чтобы скомпилировать и запустить проект - введите в командную строку (находясь в терминале контейнера) команду `make game`