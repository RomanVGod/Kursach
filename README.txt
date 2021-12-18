Инструкция для бстрой сборки проекта.
1. Запустить cmake-3.15.4-win64-x64\bin\cmake-gui.exe.
2. Поставить галочки в квадратиках "Grouped" и "Advanced",
   в строке "Where is the source code" задать правильный путь
   к папке CMake_Lighting, а в строке "Where to build the
   binaries" - к папке project. Нажать "Configure".
3. В появившемся всплывающем окне выбрать правильную (установленную
   в системе и работающую) версию Visual Studio, установить
   флажок "Use default native compilers", в строке "Optional platform
   for generator" задать 32-битную версию (Win32) и нажать "Finish".
4. Через некоторое время (пока CMake проверит наличие компилятора и
   конфигурацию системы) задать значения управляющих переменных:
    GLUT_INCLUDE_DIR = путь к папке freeglut_installed\include,
    GLUT_glut_LIBRARY = путь к файлу freeglut_installed\lib\freeglut.lib.
   Снова нажать "Configure", затем "Generate", затем "Open project".
   Если "Open project" не срабатывает, то найти в папке project файл
   с расширением sln (должен был появиться в момент генерации проекта)
   и открыть его в Visual Studio, например, двойным щелчком.
5. В среде Visual Studio сделать проект "Lights_and_textures" выполняемым
   по умолчанию. Для этого вызвать для него контекстное меню правой
   кнопкой мышки, и выбрать пункт "Set As StartUp Project" ("Сделать
   автовыполняемым проектом"). Далее можно работать с проектом в среде
   Viual Studio как обычно.
