���������� ��� ������ ������ �������.
1. ��������� cmake-3.15.4-win64-x64\bin\cmake-gui.exe.
2. ��������� ������� � ����������� "Grouped" � "Advanced",
   � ������ "Where is the source code" ������ ���������� ����
   � ����� CMake_Lighting, � � ������ "Where to build the
   binaries" - � ����� project. ������ "Configure".
3. � ����������� ����������� ���� ������� ���������� (�������������
   � ������� � ����������) ������ Visual Studio, ����������
   ������ "Use default native compilers", � ������ "Optional platform
   for generator" ������ 32-������ ������ (Win32) � ������ "Finish".
4. ����� ��������� ����� (���� CMake �������� ������� ����������� �
   ������������ �������) ������ �������� ����������� ����������:
    GLUT_INCLUDE_DIR = ���� � ����� freeglut_installed\include,
    GLUT_glut_LIBRARY = ���� � ����� freeglut_installed\lib\freeglut.lib.
   ����� ������ "Configure", ����� "Generate", ����� "Open project".
   ���� "Open project" �� �����������, �� ����� � ����� project ����
   � ����������� sln (������ ��� ��������� � ������ ��������� �������)
   � ������� ��� � Visual Studio, ��������, ������� �������.
5. � ����� Visual Studio ������� ������ "Lights_and_textures" �����������
   �� ���������. ��� ����� ������� ��� ���� ����������� ���� ������
   ������� �����, � ������� ����� "Set As StartUp Project" ("�������
   ��������������� ��������"). ����� ����� �������� � �������� � �����
   Viual Studio ��� ������.
