# Лабораторная работа №5
## Выполнил студент группы 6304 Тимофеев А.А.

### Полиморфная логика

Объединить предыдущие работы в приложении, использующем логику полиморфного хранения объектов. Необходимо сгененрировать контейнер из 1000 фигур, которые хранятся как shared_ptr<Shape>, и применить к ним 2 стандартных алгоритма по вариантам. В качестве предиката использовать предикат из дополнительного задания 2-й лабораторной.

Был выбран следующий критерий: величина периметра фигуры больше, чем средняя величина периметра среди всех фигур.

## Требования к запуску

Должны быть установлены:

* [CMake](https://cmake.org/) - версия не ниже 3.10

### Сборка

Загрузите репозиторий
```
git clone https://github.com/chelentos/oop.git
cd ./oop/6304/Timofeev_A/lab5
```
Перейдите в каталог build и соберите проект
```
cd build
cmake ..
make
```
### Работа с программой
1.  Чтобы запустить модифицирующий алгоритм, запустите lab5_mod:
```
./lab5_mod
```
2.  Чтобы запустить немодифицирующий алгоритм, запустите lab5_nomod:
```
./lab5_nomod
```

### Тестирование
1.  Чтобы запустить тесты , запустите tests:
```
./tests
```
