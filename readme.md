# opengl32

Proxy library for opengl32.dll

### Usage
Just copy this proxy-library into game folder. Or if you are crazy, rename the original `opengl32.dll` library in the `system32` folder to something else and put this proxy library there.
Don't forget to change the path to the original library in the [loader.cpp][original-library-path] file.

[original-library-path]: <../master/opengl32/src/loader/loader.cpp#L10>
