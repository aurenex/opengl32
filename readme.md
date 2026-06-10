# OpenGL32

A simple OpenGL32.dll proxy library with built-in API logger.

![opengl32-preview](https://github.com/user-attachments/assets/8ae41563-cfe4-439c-8def-013748e0d405)

### Issues
- Calls via pointers obtained from `wglGetProcAddress` are **not intercepted**.
- Calls via pointers obtained from `wglGetDefaultProcAddress` are **not intercepted**.
- Direct calls made through `GLDISPATCHTABLE` or `GLDISPATCHTABLE_FAST` are **not intercepted** either.

### Compilation
- Clone this repository.
- Open the **opengl32** solution file in [Visual Studio IDE][vs-download-link].
- Select the target platform.
- Press `ctrl + shift + b` to compile.

### Usage
Just copy the proxy library into the folder with the executable file that uses it and run it.

### Alternative Usage
You can go further and replace the original library in the `system32` folder.

- Rename the original library in the system32 to any other name.
- Change the name of the original library in the [loader.cpp][original-library-path].
- Compile and paste proxy library into system32.

Subscribe to my Telegram [channel][tg-channel-link] or make a donation if you want to support me.

```
BTC bc1qcmfgc3780pqr4p93t57k76jhy7yttuzc0pc8pv
ETH 0xa3b829A5D4302De54eE9f3F2cF64409f4D2C1b38
TON UQAGAeIjsUFmRR4FWs7fRGB6CvU1AzC2q9i58Bw5_nZSp1Af
```

[vs-download-link]: <https://visualstudio.microsoft.com/downloads/>
[original-library-path]: <../master/opengl32/src/loader/loader.cpp#L12>
[tg-channel-link]: <https://t.me/aurenex>
