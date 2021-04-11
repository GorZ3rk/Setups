### OpenGL Environment Setup

- Glad

  Use `webservice`: https://glad.dav1d.de/
```
set gl to Version 4.6
set Profile to Core
Generate and download glad.zip
```

- GLFW

  GLFW source repository: https://github.com/glfw/glfw

- Visual Studio

  Configure Project Properties
```
add include folders to C/C++ -> General -> Additional Include Directories
add lib-vc2019 folders to Linker -> General -> Additional Library Directories
add glfw3.lib to Linker -> Input -> Additional Dependencies
add glad.c to project
```
