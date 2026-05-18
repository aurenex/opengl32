# OpenGL32

A simple OpenGL32.dll proxy library with built-in API logger.

![opengl32-preview](https://github.com/user-attachments/assets/8ae41563-cfe4-439c-8def-013748e0d405)

### Compilation
- Clone this repository.
- Open the **simple-esp** solution file in [Visual Studio IDE][vs-download-link].
- Select the target platform.
- Press `ctrl + shift + b` to compile.

### Usage
Just copy the proxy library into the folder with the executable file that uses it and run it.

### Alternative Usage
You can go further and replace the original library in the `system32` folder.

- Rename the original library in the system32 to any other name.
- Change the name of the original library in the [loader.cpp][original-library-path].
- Compile and paste proxy library into system32.

Before use, we strongly recommend that you read the [license][license-link].

[vs-download-link]: <https://visualstudio.microsoft.com/downloads/>
[license-link]: <../master/license.txt>
[original-library-path]: <../master/opengl32/src/loader/loader.cpp#L12>