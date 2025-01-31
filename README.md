# DateTime

Этот проект демонстрирует использование класса `Datetime`, который представляет и манипулирует датами и временем в удобном для пользователя формате. Программа позволяет вычислять разницу между двумя датами, добавлять или вычитать дни из даты, а также проверять правильность дат.

## Файлы

- `main.cpp`: Главный файл программы, где используется класс `Datetime`.
- `DateTime.cpp`: Реализация класса `Datetime`.
- `DateTime.h`: Заголовочный файл, в котором определяется класс `Datetime` и его методы.

## Возможности

- **Инициализация даты**: Класс `Datetime` может быть инициализирован с помощью:
  - Конкретного дня, месяца и года.
  - Строки в формате `"ДД.ММ.ГГГГ"` или `"ГГГГ-ММ-ДДTHH:MM:SS"`.
  
- **Операции**:
  - Вычитание двух объектов `Datetime` для получения разницы в днях.
  - Сложение двух объектов `Datetime` для объединения их юлианских дат.
  - Добавление или вычитание определенного числа дней из объекта `Datetime`.

- **Вычисления**:
  - Вычисление дня недели для заданной даты.
  - Вычисление дня года для заданной даты.
  - Вычисление юлианской даты для заданной даты.
  - Проверка даты на валидность.

## Требования:

- **Компилятор C++**: Для компиляции программы требуется компилятор C++11 или выше. Рекомендуется использовать `g++`.

### Установка g++:

Для установки компилятора `g++` выполните следующие шаги в зависимости от вашей операционной системы:

#### Для Ubuntu/Debian:
```bash
sudo apt update
sudo apt install g++
```

#### Для macOS
```bash
brew install gcc
```

#### Для Windows:
1. Скачайте и установите MinGW-w64.
2. Во время установки выберите g++ и добавьте путь к MinGW в переменную окружения PATH.

## Компиляция:

Для компиляции программы выполните команду:
```bash
g++ main.cpp -o main
```

