#include "loader/gl.h"

// #define LOGGER_DISABLE_GL_OUTPUT
#include "logger/logger.h"

#define LOAD_AND_CHECK(ptr, name) \
    ptr = (decltype(ptr))GetProcAddress(hModule, name); \
    if (!ptr) { PRINT_ERR("'%s' not found at %s:%d", name, __FUNCTION__, __LINE__); return false; }

decltype(&gl::hk_Accum) gl::fn_Accum = nullptr;
decltype(&gl::hk_AlphaFunc) gl::fn_AlphaFunc = nullptr;
decltype(&gl::hk_AreTexturesResident) gl::fn_AreTexturesResident = nullptr;
decltype(&gl::hk_ArrayElement) gl::fn_ArrayElement = nullptr;
decltype(&gl::hk_Begin) gl::fn_Begin = nullptr;
decltype(&gl::hk_BindTexture) gl::fn_BindTexture = nullptr;
decltype(&gl::hk_Bitmap) gl::fn_Bitmap = nullptr;
decltype(&gl::hk_BlendFunc) gl::fn_BlendFunc = nullptr;
decltype(&gl::hk_CallList) gl::fn_CallList = nullptr;
decltype(&gl::hk_CallLists) gl::fn_CallLists = nullptr;
decltype(&gl::hk_Clear) gl::fn_Clear = nullptr;
decltype(&gl::hk_ClearAccum) gl::fn_ClearAccum = nullptr;
decltype(&gl::hk_ClearColor) gl::fn_ClearColor = nullptr;
decltype(&gl::hk_ClearDepth) gl::fn_ClearDepth = nullptr;
decltype(&gl::hk_ClearIndex) gl::fn_ClearIndex = nullptr;
decltype(&gl::hk_ClearStencil) gl::fn_ClearStencil = nullptr;
decltype(&gl::hk_ClipPlane) gl::fn_ClipPlane = nullptr;
decltype(&gl::hk_Color3b) gl::fn_Color3b = nullptr;
decltype(&gl::hk_Color3bv) gl::fn_Color3bv = nullptr;
decltype(&gl::hk_Color3d) gl::fn_Color3d = nullptr;
decltype(&gl::hk_Color3dv) gl::fn_Color3dv = nullptr;
decltype(&gl::hk_Color3f) gl::fn_Color3f = nullptr;
decltype(&gl::hk_Color3fv) gl::fn_Color3fv = nullptr;
decltype(&gl::hk_Color3i) gl::fn_Color3i = nullptr;
decltype(&gl::hk_Color3iv) gl::fn_Color3iv = nullptr;
decltype(&gl::hk_Color3s) gl::fn_Color3s = nullptr;
decltype(&gl::hk_Color3sv) gl::fn_Color3sv = nullptr;
decltype(&gl::hk_Color3ub) gl::fn_Color3ub = nullptr;
decltype(&gl::hk_Color3ubv) gl::fn_Color3ubv = nullptr;
decltype(&gl::hk_Color3ui) gl::fn_Color3ui = nullptr;
decltype(&gl::hk_Color3uiv) gl::fn_Color3uiv = nullptr;
decltype(&gl::hk_Color3us) gl::fn_Color3us = nullptr;
decltype(&gl::hk_Color3usv) gl::fn_Color3usv = nullptr;
decltype(&gl::hk_Color4b) gl::fn_Color4b = nullptr;
decltype(&gl::hk_Color4bv) gl::fn_Color4bv = nullptr;
decltype(&gl::hk_Color4d) gl::fn_Color4d = nullptr;
decltype(&gl::hk_Color4dv) gl::fn_Color4dv = nullptr;
decltype(&gl::hk_Color4f) gl::fn_Color4f = nullptr;
decltype(&gl::hk_Color4fv) gl::fn_Color4fv = nullptr;
decltype(&gl::hk_Color4i) gl::fn_Color4i = nullptr;
decltype(&gl::hk_Color4iv) gl::fn_Color4iv = nullptr;
decltype(&gl::hk_Color4s) gl::fn_Color4s = nullptr;
decltype(&gl::hk_Color4sv) gl::fn_Color4sv = nullptr;
decltype(&gl::hk_Color4ub) gl::fn_Color4ub = nullptr;
decltype(&gl::hk_Color4ubv) gl::fn_Color4ubv = nullptr;
decltype(&gl::hk_Color4ui) gl::fn_Color4ui = nullptr;
decltype(&gl::hk_Color4uiv) gl::fn_Color4uiv = nullptr;
decltype(&gl::hk_Color4us) gl::fn_Color4us = nullptr;
decltype(&gl::hk_Color4usv) gl::fn_Color4usv = nullptr;
decltype(&gl::hk_ColorMask) gl::fn_ColorMask = nullptr;
decltype(&gl::hk_ColorMaterial) gl::fn_ColorMaterial = nullptr;
decltype(&gl::hk_ColorPointer) gl::fn_ColorPointer = nullptr;
decltype(&gl::hk_CopyPixels) gl::fn_CopyPixels = nullptr;
decltype(&gl::hk_CopyTexImage1D) gl::fn_CopyTexImage1D = nullptr;
decltype(&gl::hk_CopyTexImage2D) gl::fn_CopyTexImage2D = nullptr;
decltype(&gl::hk_CopyTexSubImage1D) gl::fn_CopyTexSubImage1D = nullptr;
decltype(&gl::hk_CopyTexSubImage2D) gl::fn_CopyTexSubImage2D = nullptr;
decltype(&gl::hk_CullFace) gl::fn_CullFace = nullptr;
decltype(&gl::hk_DebugEntry) gl::fn_DebugEntry = nullptr;
decltype(&gl::hk_DeleteLists) gl::fn_DeleteLists = nullptr;
decltype(&gl::hk_DeleteTextures) gl::fn_DeleteTextures = nullptr;
decltype(&gl::hk_DepthFunc) gl::fn_DepthFunc = nullptr;
decltype(&gl::hk_DepthMask) gl::fn_DepthMask = nullptr;
decltype(&gl::hk_DepthRange) gl::fn_DepthRange = nullptr;
decltype(&gl::hk_Disable) gl::fn_Disable = nullptr;
decltype(&gl::hk_DisableClientState) gl::fn_DisableClientState = nullptr;
decltype(&gl::hk_DrawArrays) gl::fn_DrawArrays = nullptr;
decltype(&gl::hk_DrawBuffer) gl::fn_DrawBuffer = nullptr;
decltype(&gl::hk_DrawElements) gl::fn_DrawElements = nullptr;
decltype(&gl::hk_DrawPixels) gl::fn_DrawPixels = nullptr;
decltype(&gl::hk_EdgeFlag) gl::fn_EdgeFlag = nullptr;
decltype(&gl::hk_EdgeFlagPointer) gl::fn_EdgeFlagPointer = nullptr;
decltype(&gl::hk_EdgeFlagv) gl::fn_EdgeFlagv = nullptr;
decltype(&gl::hk_Enable) gl::fn_Enable = nullptr;
decltype(&gl::hk_EnableClientState) gl::fn_EnableClientState = nullptr;
decltype(&gl::hk_End) gl::fn_End = nullptr;
decltype(&gl::hk_EndList) gl::fn_EndList = nullptr;
decltype(&gl::hk_EvalCoord1d) gl::fn_EvalCoord1d = nullptr;
decltype(&gl::hk_EvalCoord1dv) gl::fn_EvalCoord1dv = nullptr;
decltype(&gl::hk_EvalCoord1f) gl::fn_EvalCoord1f = nullptr;
decltype(&gl::hk_EvalCoord1fv) gl::fn_EvalCoord1fv = nullptr;
decltype(&gl::hk_EvalCoord2d) gl::fn_EvalCoord2d = nullptr;
decltype(&gl::hk_EvalCoord2dv) gl::fn_EvalCoord2dv = nullptr;
decltype(&gl::hk_EvalCoord2f) gl::fn_EvalCoord2f = nullptr;
decltype(&gl::hk_EvalCoord2fv) gl::fn_EvalCoord2fv = nullptr;
decltype(&gl::hk_EvalMesh1) gl::fn_EvalMesh1 = nullptr;
decltype(&gl::hk_EvalMesh2) gl::fn_EvalMesh2 = nullptr;
decltype(&gl::hk_EvalPoint1) gl::fn_EvalPoint1 = nullptr;
decltype(&gl::hk_EvalPoint2) gl::fn_EvalPoint2 = nullptr;
decltype(&gl::hk_FeedbackBuffer) gl::fn_FeedbackBuffer = nullptr;
decltype(&gl::hk_Finish) gl::fn_Finish = nullptr;
decltype(&gl::hk_Flush) gl::fn_Flush = nullptr;
decltype(&gl::hk_Fogf) gl::fn_Fogf = nullptr;
decltype(&gl::hk_Fogfv) gl::fn_Fogfv = nullptr;
decltype(&gl::hk_Fogi) gl::fn_Fogi = nullptr;
decltype(&gl::hk_Fogiv) gl::fn_Fogiv = nullptr;
decltype(&gl::hk_FrontFace) gl::fn_FrontFace = nullptr;
decltype(&gl::hk_Frustum) gl::fn_Frustum = nullptr;
decltype(&gl::hk_GenLists) gl::fn_GenLists = nullptr;
decltype(&gl::hk_GenTextures) gl::fn_GenTextures = nullptr;
decltype(&gl::hk_GetBooleanv) gl::fn_GetBooleanv = nullptr;
decltype(&gl::hk_GetClipPlane) gl::fn_GetClipPlane = nullptr;
decltype(&gl::hk_GetDoublev) gl::fn_GetDoublev = nullptr;
decltype(&gl::hk_GetError) gl::fn_GetError = nullptr;
decltype(&gl::hk_GetFloatv) gl::fn_GetFloatv = nullptr;
decltype(&gl::hk_GetIntegerv) gl::fn_GetIntegerv = nullptr;
decltype(&gl::hk_GetLightfv) gl::fn_GetLightfv = nullptr;
decltype(&gl::hk_GetLightiv) gl::fn_GetLightiv = nullptr;
decltype(&gl::hk_GetMapdv) gl::fn_GetMapdv = nullptr;
decltype(&gl::hk_GetMapfv) gl::fn_GetMapfv = nullptr;
decltype(&gl::hk_GetMapiv) gl::fn_GetMapiv = nullptr;
decltype(&gl::hk_GetMaterialfv) gl::fn_GetMaterialfv = nullptr;
decltype(&gl::hk_GetMaterialiv) gl::fn_GetMaterialiv = nullptr;
decltype(&gl::hk_GetPixelMapfv) gl::fn_GetPixelMapfv = nullptr;
decltype(&gl::hk_GetPixelMapuiv) gl::fn_GetPixelMapuiv = nullptr;
decltype(&gl::hk_GetPixelMapusv) gl::fn_GetPixelMapusv = nullptr;
decltype(&gl::hk_GetPointerv) gl::fn_GetPointerv = nullptr;
decltype(&gl::hk_GetPolygonStipple) gl::fn_GetPolygonStipple = nullptr;
decltype(&gl::hk_GetString) gl::fn_GetString = nullptr;
decltype(&gl::hk_GetTexEnvfv) gl::fn_GetTexEnvfv = nullptr;
decltype(&gl::hk_GetTexEnviv) gl::fn_GetTexEnviv = nullptr;
decltype(&gl::hk_GetTexGendv) gl::fn_GetTexGendv = nullptr;
decltype(&gl::hk_GetTexGenfv) gl::fn_GetTexGenfv = nullptr;
decltype(&gl::hk_GetTexGeniv) gl::fn_GetTexGeniv = nullptr;
decltype(&gl::hk_GetTexImage) gl::fn_GetTexImage = nullptr;
decltype(&gl::hk_GetTexLevelParameterfv) gl::fn_GetTexLevelParameterfv = nullptr;
decltype(&gl::hk_GetTexLevelParameteriv) gl::fn_GetTexLevelParameteriv = nullptr;
decltype(&gl::hk_GetTexParameterfv) gl::fn_GetTexParameterfv = nullptr;
decltype(&gl::hk_GetTexParameteriv) gl::fn_GetTexParameteriv = nullptr;
decltype(&gl::hk_Hint) gl::fn_Hint = nullptr;
decltype(&gl::hk_IndexMask) gl::fn_IndexMask = nullptr;
decltype(&gl::hk_IndexPointer) gl::fn_IndexPointer = nullptr;
decltype(&gl::hk_Indexd) gl::fn_Indexd = nullptr;
decltype(&gl::hk_Indexdv) gl::fn_Indexdv = nullptr;
decltype(&gl::hk_Indexf) gl::fn_Indexf = nullptr;
decltype(&gl::hk_Indexfv) gl::fn_Indexfv = nullptr;
decltype(&gl::hk_Indexi) gl::fn_Indexi = nullptr;
decltype(&gl::hk_Indexiv) gl::fn_Indexiv = nullptr;
decltype(&gl::hk_Indexs) gl::fn_Indexs = nullptr;
decltype(&gl::hk_Indexsv) gl::fn_Indexsv = nullptr;
decltype(&gl::hk_Indexub) gl::fn_Indexub = nullptr;
decltype(&gl::hk_Indexubv) gl::fn_Indexubv = nullptr;
decltype(&gl::hk_InitNames) gl::fn_InitNames = nullptr;
decltype(&gl::hk_InterleavedArrays) gl::fn_InterleavedArrays = nullptr;
decltype(&gl::hk_IsEnabled) gl::fn_IsEnabled = nullptr;
decltype(&gl::hk_IsList) gl::fn_IsList = nullptr;
decltype(&gl::hk_IsTexture) gl::fn_IsTexture = nullptr;
decltype(&gl::hk_LightModelf) gl::fn_LightModelf = nullptr;
decltype(&gl::hk_LightModelfv) gl::fn_LightModelfv = nullptr;
decltype(&gl::hk_LightModeli) gl::fn_LightModeli = nullptr;
decltype(&gl::hk_LightModeliv) gl::fn_LightModeliv = nullptr;
decltype(&gl::hk_Lightf) gl::fn_Lightf = nullptr;
decltype(&gl::hk_Lightfv) gl::fn_Lightfv = nullptr;
decltype(&gl::hk_Lighti) gl::fn_Lighti = nullptr;
decltype(&gl::hk_Lightiv) gl::fn_Lightiv = nullptr;
decltype(&gl::hk_LineStipple) gl::fn_LineStipple = nullptr;
decltype(&gl::hk_LineWidth) gl::fn_LineWidth = nullptr;
decltype(&gl::hk_ListBase) gl::fn_ListBase = nullptr;
decltype(&gl::hk_LoadIdentity) gl::fn_LoadIdentity = nullptr;
decltype(&gl::hk_LoadMatrixd) gl::fn_LoadMatrixd = nullptr;
decltype(&gl::hk_LoadMatrixf) gl::fn_LoadMatrixf = nullptr;
decltype(&gl::hk_LoadName) gl::fn_LoadName = nullptr;
decltype(&gl::hk_LogicOp) gl::fn_LogicOp = nullptr;
decltype(&gl::hk_Map1d) gl::fn_Map1d = nullptr;
decltype(&gl::hk_Map1f) gl::fn_Map1f = nullptr;
decltype(&gl::hk_Map2d) gl::fn_Map2d = nullptr;
decltype(&gl::hk_Map2f) gl::fn_Map2f = nullptr;
decltype(&gl::hk_MapGrid1d) gl::fn_MapGrid1d = nullptr;
decltype(&gl::hk_MapGrid1f) gl::fn_MapGrid1f = nullptr;
decltype(&gl::hk_MapGrid2d) gl::fn_MapGrid2d = nullptr;
decltype(&gl::hk_MapGrid2f) gl::fn_MapGrid2f = nullptr;
decltype(&gl::hk_Materialf) gl::fn_Materialf = nullptr;
decltype(&gl::hk_Materialfv) gl::fn_Materialfv = nullptr;
decltype(&gl::hk_Materiali) gl::fn_Materiali = nullptr;
decltype(&gl::hk_Materialiv) gl::fn_Materialiv = nullptr;
decltype(&gl::hk_MatrixMode) gl::fn_MatrixMode = nullptr;
decltype(&gl::hk_MultMatrixd) gl::fn_MultMatrixd = nullptr;
decltype(&gl::hk_MultMatrixf) gl::fn_MultMatrixf = nullptr;
decltype(&gl::hk_NewList) gl::fn_NewList = nullptr;
decltype(&gl::hk_Normal3b) gl::fn_Normal3b = nullptr;
decltype(&gl::hk_Normal3bv) gl::fn_Normal3bv = nullptr;
decltype(&gl::hk_Normal3d) gl::fn_Normal3d = nullptr;
decltype(&gl::hk_Normal3dv) gl::fn_Normal3dv = nullptr;
decltype(&gl::hk_Normal3f) gl::fn_Normal3f = nullptr;
decltype(&gl::hk_Normal3fv) gl::fn_Normal3fv = nullptr;
decltype(&gl::hk_Normal3i) gl::fn_Normal3i = nullptr;
decltype(&gl::hk_Normal3iv) gl::fn_Normal3iv = nullptr;
decltype(&gl::hk_Normal3s) gl::fn_Normal3s = nullptr;
decltype(&gl::hk_Normal3sv) gl::fn_Normal3sv = nullptr;
decltype(&gl::hk_NormalPointer) gl::fn_NormalPointer = nullptr;
decltype(&gl::hk_Ortho) gl::fn_Ortho = nullptr;
decltype(&gl::hk_PassThrough) gl::fn_PassThrough = nullptr;
decltype(&gl::hk_PixelMapfv) gl::fn_PixelMapfv = nullptr;
decltype(&gl::hk_PixelMapuiv) gl::fn_PixelMapuiv = nullptr;
decltype(&gl::hk_PixelMapusv) gl::fn_PixelMapusv = nullptr;
decltype(&gl::hk_PixelStoref) gl::fn_PixelStoref = nullptr;
decltype(&gl::hk_PixelStorei) gl::fn_PixelStorei = nullptr;
decltype(&gl::hk_PixelTransferf) gl::fn_PixelTransferf = nullptr;
decltype(&gl::hk_PixelTransferi) gl::fn_PixelTransferi = nullptr;
decltype(&gl::hk_PixelZoom) gl::fn_PixelZoom = nullptr;
decltype(&gl::hk_PointSize) gl::fn_PointSize = nullptr;
decltype(&gl::hk_PolygonMode) gl::fn_PolygonMode = nullptr;
decltype(&gl::hk_PolygonOffset) gl::fn_PolygonOffset = nullptr;
decltype(&gl::hk_PolygonStipple) gl::fn_PolygonStipple = nullptr;
decltype(&gl::hk_PopAttrib) gl::fn_PopAttrib = nullptr;
decltype(&gl::hk_PopClientAttrib) gl::fn_PopClientAttrib = nullptr;
decltype(&gl::hk_PopMatrix) gl::fn_PopMatrix = nullptr;
decltype(&gl::hk_PopName) gl::fn_PopName = nullptr;
decltype(&gl::hk_PrioritizeTextures) gl::fn_PrioritizeTextures = nullptr;
decltype(&gl::hk_PushAttrib) gl::fn_PushAttrib = nullptr;
decltype(&gl::hk_PushClientAttrib) gl::fn_PushClientAttrib = nullptr;
decltype(&gl::hk_PushMatrix) gl::fn_PushMatrix = nullptr;
decltype(&gl::hk_PushName) gl::fn_PushName = nullptr;
decltype(&gl::hk_RasterPos2d) gl::fn_RasterPos2d = nullptr;
decltype(&gl::hk_RasterPos2dv) gl::fn_RasterPos2dv = nullptr;
decltype(&gl::hk_RasterPos2f) gl::fn_RasterPos2f = nullptr;
decltype(&gl::hk_RasterPos2fv) gl::fn_RasterPos2fv = nullptr;
decltype(&gl::hk_RasterPos2i) gl::fn_RasterPos2i = nullptr;
decltype(&gl::hk_RasterPos2iv) gl::fn_RasterPos2iv = nullptr;
decltype(&gl::hk_RasterPos2s) gl::fn_RasterPos2s = nullptr;
decltype(&gl::hk_RasterPos2sv) gl::fn_RasterPos2sv = nullptr;
decltype(&gl::hk_RasterPos3d) gl::fn_RasterPos3d = nullptr;
decltype(&gl::hk_RasterPos3dv) gl::fn_RasterPos3dv = nullptr;
decltype(&gl::hk_RasterPos3f) gl::fn_RasterPos3f = nullptr;
decltype(&gl::hk_RasterPos3fv) gl::fn_RasterPos3fv = nullptr;
decltype(&gl::hk_RasterPos3i) gl::fn_RasterPos3i = nullptr;
decltype(&gl::hk_RasterPos3iv) gl::fn_RasterPos3iv = nullptr;
decltype(&gl::hk_RasterPos3s) gl::fn_RasterPos3s = nullptr;
decltype(&gl::hk_RasterPos3sv) gl::fn_RasterPos3sv = nullptr;
decltype(&gl::hk_RasterPos4d) gl::fn_RasterPos4d = nullptr;
decltype(&gl::hk_RasterPos4dv) gl::fn_RasterPos4dv = nullptr;
decltype(&gl::hk_RasterPos4f) gl::fn_RasterPos4f = nullptr;
decltype(&gl::hk_RasterPos4fv) gl::fn_RasterPos4fv = nullptr;
decltype(&gl::hk_RasterPos4i) gl::fn_RasterPos4i = nullptr;
decltype(&gl::hk_RasterPos4iv) gl::fn_RasterPos4iv = nullptr;
decltype(&gl::hk_RasterPos4s) gl::fn_RasterPos4s = nullptr;
decltype(&gl::hk_RasterPos4sv) gl::fn_RasterPos4sv = nullptr;
decltype(&gl::hk_ReadBuffer) gl::fn_ReadBuffer = nullptr;
decltype(&gl::hk_ReadPixels) gl::fn_ReadPixels = nullptr;
decltype(&gl::hk_Rectd) gl::fn_Rectd = nullptr;
decltype(&gl::hk_Rectdv) gl::fn_Rectdv = nullptr;
decltype(&gl::hk_Rectf) gl::fn_Rectf = nullptr;
decltype(&gl::hk_Rectfv) gl::fn_Rectfv = nullptr;
decltype(&gl::hk_Recti) gl::fn_Recti = nullptr;
decltype(&gl::hk_Rectiv) gl::fn_Rectiv = nullptr;
decltype(&gl::hk_Rects) gl::fn_Rects = nullptr;
decltype(&gl::hk_Rectsv) gl::fn_Rectsv = nullptr;
decltype(&gl::hk_RenderMode) gl::fn_RenderMode = nullptr;
decltype(&gl::hk_Rotated) gl::fn_Rotated = nullptr;
decltype(&gl::hk_Rotatef) gl::fn_Rotatef = nullptr;
decltype(&gl::hk_Scaled) gl::fn_Scaled = nullptr;
decltype(&gl::hk_Scalef) gl::fn_Scalef = nullptr;
decltype(&gl::hk_Scissor) gl::fn_Scissor = nullptr;
decltype(&gl::hk_SelectBuffer) gl::fn_SelectBuffer = nullptr;
decltype(&gl::hk_ShadeModel) gl::fn_ShadeModel = nullptr;
decltype(&gl::hk_StencilFunc) gl::fn_StencilFunc = nullptr;
decltype(&gl::hk_StencilMask) gl::fn_StencilMask = nullptr;
decltype(&gl::hk_StencilOp) gl::fn_StencilOp = nullptr;
decltype(&gl::hk_TexCoord1d) gl::fn_TexCoord1d = nullptr;
decltype(&gl::hk_TexCoord1dv) gl::fn_TexCoord1dv = nullptr;
decltype(&gl::hk_TexCoord1f) gl::fn_TexCoord1f = nullptr;
decltype(&gl::hk_TexCoord1fv) gl::fn_TexCoord1fv = nullptr;
decltype(&gl::hk_TexCoord1i) gl::fn_TexCoord1i = nullptr;
decltype(&gl::hk_TexCoord1iv) gl::fn_TexCoord1iv = nullptr;
decltype(&gl::hk_TexCoord1s) gl::fn_TexCoord1s = nullptr;
decltype(&gl::hk_TexCoord1sv) gl::fn_TexCoord1sv = nullptr;
decltype(&gl::hk_TexCoord2d) gl::fn_TexCoord2d = nullptr;
decltype(&gl::hk_TexCoord2dv) gl::fn_TexCoord2dv = nullptr;
decltype(&gl::hk_TexCoord2f) gl::fn_TexCoord2f = nullptr;
decltype(&gl::hk_TexCoord2fv) gl::fn_TexCoord2fv = nullptr;
decltype(&gl::hk_TexCoord2i) gl::fn_TexCoord2i = nullptr;
decltype(&gl::hk_TexCoord2iv) gl::fn_TexCoord2iv = nullptr;
decltype(&gl::hk_TexCoord2s) gl::fn_TexCoord2s = nullptr;
decltype(&gl::hk_TexCoord2sv) gl::fn_TexCoord2sv = nullptr;
decltype(&gl::hk_TexCoord3d) gl::fn_TexCoord3d = nullptr;
decltype(&gl::hk_TexCoord3dv) gl::fn_TexCoord3dv = nullptr;
decltype(&gl::hk_TexCoord3f) gl::fn_TexCoord3f = nullptr;
decltype(&gl::hk_TexCoord3fv) gl::fn_TexCoord3fv = nullptr;
decltype(&gl::hk_TexCoord3i) gl::fn_TexCoord3i = nullptr;
decltype(&gl::hk_TexCoord3iv) gl::fn_TexCoord3iv = nullptr;
decltype(&gl::hk_TexCoord3s) gl::fn_TexCoord3s = nullptr;
decltype(&gl::hk_TexCoord3sv) gl::fn_TexCoord3sv = nullptr;
decltype(&gl::hk_TexCoord4d) gl::fn_TexCoord4d = nullptr;
decltype(&gl::hk_TexCoord4dv) gl::fn_TexCoord4dv = nullptr;
decltype(&gl::hk_TexCoord4f) gl::fn_TexCoord4f = nullptr;
decltype(&gl::hk_TexCoord4fv) gl::fn_TexCoord4fv = nullptr;
decltype(&gl::hk_TexCoord4i) gl::fn_TexCoord4i = nullptr;
decltype(&gl::hk_TexCoord4iv) gl::fn_TexCoord4iv = nullptr;
decltype(&gl::hk_TexCoord4s) gl::fn_TexCoord4s = nullptr;
decltype(&gl::hk_TexCoord4sv) gl::fn_TexCoord4sv = nullptr;
decltype(&gl::hk_TexCoordPointer) gl::fn_TexCoordPointer = nullptr;
decltype(&gl::hk_TexEnvf) gl::fn_TexEnvf = nullptr;
decltype(&gl::hk_TexEnvfv) gl::fn_TexEnvfv = nullptr;
decltype(&gl::hk_TexEnvi) gl::fn_TexEnvi = nullptr;
decltype(&gl::hk_TexEnviv) gl::fn_TexEnviv = nullptr;
decltype(&gl::hk_TexGend) gl::fn_TexGend = nullptr;
decltype(&gl::hk_TexGendv) gl::fn_TexGendv = nullptr;
decltype(&gl::hk_TexGenf) gl::fn_TexGenf = nullptr;
decltype(&gl::hk_TexGenfv) gl::fn_TexGenfv = nullptr;
decltype(&gl::hk_TexGeni) gl::fn_TexGeni = nullptr;
decltype(&gl::hk_TexGeniv) gl::fn_TexGeniv = nullptr;
decltype(&gl::hk_TexImage1D) gl::fn_TexImage1D = nullptr;
decltype(&gl::hk_TexImage2D) gl::fn_TexImage2D = nullptr;
decltype(&gl::hk_TexParameterf) gl::fn_TexParameterf = nullptr;
decltype(&gl::hk_TexParameterfv) gl::fn_TexParameterfv = nullptr;
decltype(&gl::hk_TexParameteri) gl::fn_TexParameteri = nullptr;
decltype(&gl::hk_TexParameteriv) gl::fn_TexParameteriv = nullptr;
decltype(&gl::hk_TexSubImage1D) gl::fn_TexSubImage1D = nullptr;
decltype(&gl::hk_TexSubImage2D) gl::fn_TexSubImage2D = nullptr;
decltype(&gl::hk_Translated) gl::fn_Translated = nullptr;
decltype(&gl::hk_Translatef) gl::fn_Translatef = nullptr;
decltype(&gl::hk_Vertex2d) gl::fn_Vertex2d = nullptr;
decltype(&gl::hk_Vertex2dv) gl::fn_Vertex2dv = nullptr;
decltype(&gl::hk_Vertex2f) gl::fn_Vertex2f = nullptr;
decltype(&gl::hk_Vertex2fv) gl::fn_Vertex2fv = nullptr;
decltype(&gl::hk_Vertex2i) gl::fn_Vertex2i = nullptr;
decltype(&gl::hk_Vertex2iv) gl::fn_Vertex2iv = nullptr;
decltype(&gl::hk_Vertex2s) gl::fn_Vertex2s = nullptr;
decltype(&gl::hk_Vertex2sv) gl::fn_Vertex2sv = nullptr;
decltype(&gl::hk_Vertex3d) gl::fn_Vertex3d = nullptr;
decltype(&gl::hk_Vertex3dv) gl::fn_Vertex3dv = nullptr;
decltype(&gl::hk_Vertex3f) gl::fn_Vertex3f = nullptr;
decltype(&gl::hk_Vertex3fv) gl::fn_Vertex3fv = nullptr;
decltype(&gl::hk_Vertex3i) gl::fn_Vertex3i = nullptr;
decltype(&gl::hk_Vertex3iv) gl::fn_Vertex3iv = nullptr;
decltype(&gl::hk_Vertex3s) gl::fn_Vertex3s = nullptr;
decltype(&gl::hk_Vertex3sv) gl::fn_Vertex3sv = nullptr;
decltype(&gl::hk_Vertex4d) gl::fn_Vertex4d = nullptr;
decltype(&gl::hk_Vertex4dv) gl::fn_Vertex4dv = nullptr;
decltype(&gl::hk_Vertex4f) gl::fn_Vertex4f = nullptr;
decltype(&gl::hk_Vertex4fv) gl::fn_Vertex4fv = nullptr;
decltype(&gl::hk_Vertex4i) gl::fn_Vertex4i = nullptr;
decltype(&gl::hk_Vertex4iv) gl::fn_Vertex4iv = nullptr;
decltype(&gl::hk_Vertex4s) gl::fn_Vertex4s = nullptr;
decltype(&gl::hk_Vertex4sv) gl::fn_Vertex4sv = nullptr;
decltype(&gl::hk_VertexPointer) gl::fn_VertexPointer = nullptr;
decltype(&gl::hk_Viewport) gl::fn_Viewport = nullptr;

bool gl::initialize(HMODULE hModule)
{
	LOAD_AND_CHECK(fn_Accum, "glAccum")
	LOAD_AND_CHECK(fn_AlphaFunc, "glAlphaFunc")
	LOAD_AND_CHECK(fn_AreTexturesResident, "glAreTexturesResident")
	LOAD_AND_CHECK(fn_ArrayElement, "glArrayElement")
	LOAD_AND_CHECK(fn_Begin, "glBegin")
	LOAD_AND_CHECK(fn_BindTexture, "glBindTexture")
	LOAD_AND_CHECK(fn_Bitmap, "glBitmap")
	LOAD_AND_CHECK(fn_BlendFunc, "glBlendFunc")
	LOAD_AND_CHECK(fn_CallList, "glCallList")
	LOAD_AND_CHECK(fn_CallLists, "glCallLists")
	LOAD_AND_CHECK(fn_Clear, "glClear")
	LOAD_AND_CHECK(fn_ClearAccum, "glClearAccum")
	LOAD_AND_CHECK(fn_ClearColor, "glClearColor")
	LOAD_AND_CHECK(fn_ClearDepth, "glClearDepth")
	LOAD_AND_CHECK(fn_ClearIndex, "glClearIndex")
	LOAD_AND_CHECK(fn_ClearStencil, "glClearStencil")
	LOAD_AND_CHECK(fn_ClipPlane, "glClipPlane")
	LOAD_AND_CHECK(fn_Color3b, "glColor3b")
	LOAD_AND_CHECK(fn_Color3bv, "glColor3bv")
	LOAD_AND_CHECK(fn_Color3d, "glColor3d")
	LOAD_AND_CHECK(fn_Color3dv, "glColor3dv")
	LOAD_AND_CHECK(fn_Color3f, "glColor3f")
	LOAD_AND_CHECK(fn_Color3fv, "glColor3fv")
	LOAD_AND_CHECK(fn_Color3i, "glColor3i")
	LOAD_AND_CHECK(fn_Color3iv, "glColor3iv")
	LOAD_AND_CHECK(fn_Color3s, "glColor3s")
	LOAD_AND_CHECK(fn_Color3sv, "glColor3sv")
	LOAD_AND_CHECK(fn_Color3ub, "glColor3ub")
	LOAD_AND_CHECK(fn_Color3ubv, "glColor3ubv")
	LOAD_AND_CHECK(fn_Color3ui, "glColor3ui")
	LOAD_AND_CHECK(fn_Color3uiv, "glColor3uiv")
	LOAD_AND_CHECK(fn_Color3us, "glColor3us")
	LOAD_AND_CHECK(fn_Color3usv, "glColor3usv")
	LOAD_AND_CHECK(fn_Color4b, "glColor4b")
	LOAD_AND_CHECK(fn_Color4bv, "glColor4bv")
	LOAD_AND_CHECK(fn_Color4d, "glColor4d")
	LOAD_AND_CHECK(fn_Color4dv, "glColor4dv")
	LOAD_AND_CHECK(fn_Color4f, "glColor4f")
	LOAD_AND_CHECK(fn_Color4fv, "glColor4fv")
	LOAD_AND_CHECK(fn_Color4i, "glColor4i")
	LOAD_AND_CHECK(fn_Color4iv, "glColor4iv")
	LOAD_AND_CHECK(fn_Color4s, "glColor4s")
	LOAD_AND_CHECK(fn_Color4sv, "glColor4sv")
	LOAD_AND_CHECK(fn_Color4ub, "glColor4ub")
	LOAD_AND_CHECK(fn_Color4ubv, "glColor4ubv")
	LOAD_AND_CHECK(fn_Color4ui, "glColor4ui")
	LOAD_AND_CHECK(fn_Color4uiv, "glColor4uiv")
	LOAD_AND_CHECK(fn_Color4us, "glColor4us")
	LOAD_AND_CHECK(fn_Color4usv, "glColor4usv")
	LOAD_AND_CHECK(fn_ColorMask, "glColorMask")
	LOAD_AND_CHECK(fn_ColorMaterial, "glColorMaterial")
	LOAD_AND_CHECK(fn_ColorPointer, "glColorPointer")
	LOAD_AND_CHECK(fn_CopyPixels, "glCopyPixels")
	LOAD_AND_CHECK(fn_CopyTexImage1D, "glCopyTexImage1D")
	LOAD_AND_CHECK(fn_CopyTexImage2D, "glCopyTexImage2D")
	LOAD_AND_CHECK(fn_CopyTexSubImage1D, "glCopyTexSubImage1D")
	LOAD_AND_CHECK(fn_CopyTexSubImage2D, "glCopyTexSubImage2D")
	LOAD_AND_CHECK(fn_CullFace, "glCullFace")
	LOAD_AND_CHECK(fn_DebugEntry, "glDebugEntry")
	LOAD_AND_CHECK(fn_DeleteLists, "glDeleteLists")
	LOAD_AND_CHECK(fn_DeleteTextures, "glDeleteTextures")
	LOAD_AND_CHECK(fn_DepthFunc, "glDepthFunc")
	LOAD_AND_CHECK(fn_DepthMask, "glDepthMask")
	LOAD_AND_CHECK(fn_DepthRange, "glDepthRange")
	LOAD_AND_CHECK(fn_Disable, "glDisable")
	LOAD_AND_CHECK(fn_DisableClientState, "glDisableClientState")
	LOAD_AND_CHECK(fn_DrawArrays, "glDrawArrays")
	LOAD_AND_CHECK(fn_DrawBuffer, "glDrawBuffer")
	LOAD_AND_CHECK(fn_DrawElements, "glDrawElements")
	LOAD_AND_CHECK(fn_DrawPixels, "glDrawPixels")
	LOAD_AND_CHECK(fn_EdgeFlag, "glEdgeFlag")
	LOAD_AND_CHECK(fn_EdgeFlagPointer, "glEdgeFlagPointer")
	LOAD_AND_CHECK(fn_EdgeFlagv, "glEdgeFlagv")
	LOAD_AND_CHECK(fn_Enable, "glEnable")
	LOAD_AND_CHECK(fn_EnableClientState, "glEnableClientState")
	LOAD_AND_CHECK(fn_End, "glEnd")
	LOAD_AND_CHECK(fn_EndList, "glEndList")
	LOAD_AND_CHECK(fn_EvalCoord1d, "glEvalCoord1d")
	LOAD_AND_CHECK(fn_EvalCoord1dv, "glEvalCoord1dv")
	LOAD_AND_CHECK(fn_EvalCoord1f, "glEvalCoord1f")
	LOAD_AND_CHECK(fn_EvalCoord1fv, "glEvalCoord1fv")
	LOAD_AND_CHECK(fn_EvalCoord2d, "glEvalCoord2d")
	LOAD_AND_CHECK(fn_EvalCoord2dv, "glEvalCoord2dv")
	LOAD_AND_CHECK(fn_EvalCoord2f, "glEvalCoord2f")
	LOAD_AND_CHECK(fn_EvalCoord2fv, "glEvalCoord2fv")
	LOAD_AND_CHECK(fn_EvalMesh1, "glEvalMesh1")
	LOAD_AND_CHECK(fn_EvalMesh2, "glEvalMesh2")
	LOAD_AND_CHECK(fn_EvalPoint1, "glEvalPoint1")
	LOAD_AND_CHECK(fn_EvalPoint2, "glEvalPoint2")
	LOAD_AND_CHECK(fn_FeedbackBuffer, "glFeedbackBuffer")
	LOAD_AND_CHECK(fn_Finish, "glFinish")
	LOAD_AND_CHECK(fn_Flush, "glFlush")
	LOAD_AND_CHECK(fn_Fogf, "glFogf")
	LOAD_AND_CHECK(fn_Fogfv, "glFogfv")
	LOAD_AND_CHECK(fn_Fogi, "glFogi")
	LOAD_AND_CHECK(fn_Fogiv, "glFogiv")
	LOAD_AND_CHECK(fn_FrontFace, "glFrontFace")
	LOAD_AND_CHECK(fn_Frustum, "glFrustum")
	LOAD_AND_CHECK(fn_GenLists, "glGenLists")
	LOAD_AND_CHECK(fn_GenTextures, "glGenTextures")
	LOAD_AND_CHECK(fn_GetBooleanv, "glGetBooleanv")
	LOAD_AND_CHECK(fn_GetClipPlane, "glGetClipPlane")
	LOAD_AND_CHECK(fn_GetDoublev, "glGetDoublev")
	LOAD_AND_CHECK(fn_GetError, "glGetError")
	LOAD_AND_CHECK(fn_GetFloatv, "glGetFloatv")
	LOAD_AND_CHECK(fn_GetIntegerv, "glGetIntegerv")
	LOAD_AND_CHECK(fn_GetLightfv, "glGetLightfv")
	LOAD_AND_CHECK(fn_GetLightiv, "glGetLightiv")
	LOAD_AND_CHECK(fn_GetMapdv, "glGetMapdv")
	LOAD_AND_CHECK(fn_GetMapfv, "glGetMapfv")
	LOAD_AND_CHECK(fn_GetMapiv, "glGetMapiv")
	LOAD_AND_CHECK(fn_GetMaterialfv, "glGetMaterialfv")
	LOAD_AND_CHECK(fn_GetMaterialiv, "glGetMaterialiv")
	LOAD_AND_CHECK(fn_GetPixelMapfv, "glGetPixelMapfv")
	LOAD_AND_CHECK(fn_GetPixelMapuiv, "glGetPixelMapuiv")
	LOAD_AND_CHECK(fn_GetPixelMapusv, "glGetPixelMapusv")
	LOAD_AND_CHECK(fn_GetPointerv, "glGetPointerv")
	LOAD_AND_CHECK(fn_GetPolygonStipple, "glGetPolygonStipple")
	LOAD_AND_CHECK(fn_GetString, "glGetString")
	LOAD_AND_CHECK(fn_GetTexEnvfv, "glGetTexEnvfv")
	LOAD_AND_CHECK(fn_GetTexEnviv, "glGetTexEnviv")
	LOAD_AND_CHECK(fn_GetTexGendv, "glGetTexGendv")
	LOAD_AND_CHECK(fn_GetTexGenfv, "glGetTexGenfv")
	LOAD_AND_CHECK(fn_GetTexGeniv, "glGetTexGeniv")
	LOAD_AND_CHECK(fn_GetTexImage, "glGetTexImage")
	LOAD_AND_CHECK(fn_GetTexLevelParameterfv, "glGetTexLevelParameterfv")
	LOAD_AND_CHECK(fn_GetTexLevelParameteriv, "glGetTexLevelParameteriv")
	LOAD_AND_CHECK(fn_GetTexParameterfv, "glGetTexParameterfv")
	LOAD_AND_CHECK(fn_GetTexParameteriv, "glGetTexParameteriv")
	LOAD_AND_CHECK(fn_Hint, "glHint")
	LOAD_AND_CHECK(fn_IndexMask, "glIndexMask")
	LOAD_AND_CHECK(fn_IndexPointer, "glIndexPointer")
	LOAD_AND_CHECK(fn_Indexd, "glIndexd")
	LOAD_AND_CHECK(fn_Indexdv, "glIndexdv")
	LOAD_AND_CHECK(fn_Indexf, "glIndexf")
	LOAD_AND_CHECK(fn_Indexfv, "glIndexfv")
	LOAD_AND_CHECK(fn_Indexi, "glIndexi")
	LOAD_AND_CHECK(fn_Indexiv, "glIndexiv")
	LOAD_AND_CHECK(fn_Indexs, "glIndexs")
	LOAD_AND_CHECK(fn_Indexsv, "glIndexsv")
	LOAD_AND_CHECK(fn_Indexub, "glIndexub")
	LOAD_AND_CHECK(fn_Indexubv, "glIndexubv")
	LOAD_AND_CHECK(fn_InitNames, "glInitNames")
	LOAD_AND_CHECK(fn_InterleavedArrays, "glInterleavedArrays")
	LOAD_AND_CHECK(fn_IsEnabled, "glIsEnabled")
	LOAD_AND_CHECK(fn_IsList, "glIsList")
	LOAD_AND_CHECK(fn_IsTexture, "glIsTexture")
	LOAD_AND_CHECK(fn_LightModelf, "glLightModelf")
	LOAD_AND_CHECK(fn_LightModelfv, "glLightModelfv")
	LOAD_AND_CHECK(fn_LightModeli, "glLightModeli")
	LOAD_AND_CHECK(fn_LightModeliv, "glLightModeliv")
	LOAD_AND_CHECK(fn_Lightf, "glLightf")
	LOAD_AND_CHECK(fn_Lightfv, "glLightfv")
	LOAD_AND_CHECK(fn_Lighti, "glLighti")
	LOAD_AND_CHECK(fn_Lightiv, "glLightiv")
	LOAD_AND_CHECK(fn_LineStipple, "glLineStipple")
	LOAD_AND_CHECK(fn_LineWidth, "glLineWidth")
	LOAD_AND_CHECK(fn_ListBase, "glListBase")
	LOAD_AND_CHECK(fn_LoadIdentity, "glLoadIdentity")
	LOAD_AND_CHECK(fn_LoadMatrixd, "glLoadMatrixd")
	LOAD_AND_CHECK(fn_LoadMatrixf, "glLoadMatrixf")
	LOAD_AND_CHECK(fn_LoadName, "glLoadName")
	LOAD_AND_CHECK(fn_LogicOp, "glLogicOp")
	LOAD_AND_CHECK(fn_Map1d, "glMap1d")
	LOAD_AND_CHECK(fn_Map1f, "glMap1f")
	LOAD_AND_CHECK(fn_Map2d, "glMap2d")
	LOAD_AND_CHECK(fn_Map2f, "glMap2f")
	LOAD_AND_CHECK(fn_MapGrid1d, "glMapGrid1d")
	LOAD_AND_CHECK(fn_MapGrid1f, "glMapGrid1f")
	LOAD_AND_CHECK(fn_MapGrid2d, "glMapGrid2d")
	LOAD_AND_CHECK(fn_MapGrid2f, "glMapGrid2f")
	LOAD_AND_CHECK(fn_Materialf, "glMaterialf")
	LOAD_AND_CHECK(fn_Materialfv, "glMaterialfv")
	LOAD_AND_CHECK(fn_Materiali, "glMateriali")
	LOAD_AND_CHECK(fn_Materialiv, "glMaterialiv")
	LOAD_AND_CHECK(fn_MatrixMode, "glMatrixMode")
	LOAD_AND_CHECK(fn_MultMatrixd, "glMultMatrixd")
	LOAD_AND_CHECK(fn_MultMatrixf, "glMultMatrixf")
	LOAD_AND_CHECK(fn_NewList, "glNewList")
	LOAD_AND_CHECK(fn_Normal3b, "glNormal3b")
	LOAD_AND_CHECK(fn_Normal3bv, "glNormal3bv")
	LOAD_AND_CHECK(fn_Normal3d, "glNormal3d")
	LOAD_AND_CHECK(fn_Normal3dv, "glNormal3dv")
	LOAD_AND_CHECK(fn_Normal3f, "glNormal3f")
	LOAD_AND_CHECK(fn_Normal3fv, "glNormal3fv")
	LOAD_AND_CHECK(fn_Normal3i, "glNormal3i")
	LOAD_AND_CHECK(fn_Normal3iv, "glNormal3iv")
	LOAD_AND_CHECK(fn_Normal3s, "glNormal3s")
	LOAD_AND_CHECK(fn_Normal3sv, "glNormal3sv")
	LOAD_AND_CHECK(fn_NormalPointer, "glNormalPointer")
	LOAD_AND_CHECK(fn_Ortho, "glOrtho")
	LOAD_AND_CHECK(fn_PassThrough, "glPassThrough")
	LOAD_AND_CHECK(fn_PixelMapfv, "glPixelMapfv")
	LOAD_AND_CHECK(fn_PixelMapuiv, "glPixelMapuiv")
	LOAD_AND_CHECK(fn_PixelMapusv, "glPixelMapusv")
	LOAD_AND_CHECK(fn_PixelStoref, "glPixelStoref")
	LOAD_AND_CHECK(fn_PixelStorei, "glPixelStorei")
	LOAD_AND_CHECK(fn_PixelTransferf, "glPixelTransferf")
	LOAD_AND_CHECK(fn_PixelTransferi, "glPixelTransferi")
	LOAD_AND_CHECK(fn_PixelZoom, "glPixelZoom")
	LOAD_AND_CHECK(fn_PointSize, "glPointSize")
	LOAD_AND_CHECK(fn_PolygonMode, "glPolygonMode")
	LOAD_AND_CHECK(fn_PolygonOffset, "glPolygonOffset")
	LOAD_AND_CHECK(fn_PolygonStipple, "glPolygonStipple")
	LOAD_AND_CHECK(fn_PopAttrib, "glPopAttrib")
	LOAD_AND_CHECK(fn_PopClientAttrib, "glPopClientAttrib")
	LOAD_AND_CHECK(fn_PopMatrix, "glPopMatrix")
	LOAD_AND_CHECK(fn_PopName, "glPopName")
	LOAD_AND_CHECK(fn_PrioritizeTextures, "glPrioritizeTextures")
	LOAD_AND_CHECK(fn_PushAttrib, "glPushAttrib")
	LOAD_AND_CHECK(fn_PushClientAttrib, "glPushClientAttrib")
	LOAD_AND_CHECK(fn_PushMatrix, "glPushMatrix")
	LOAD_AND_CHECK(fn_PushName, "glPushName")
	LOAD_AND_CHECK(fn_RasterPos2d, "glRasterPos2d")
	LOAD_AND_CHECK(fn_RasterPos2dv, "glRasterPos2dv")
	LOAD_AND_CHECK(fn_RasterPos2f, "glRasterPos2f")
	LOAD_AND_CHECK(fn_RasterPos2fv, "glRasterPos2fv")
	LOAD_AND_CHECK(fn_RasterPos2i, "glRasterPos2i")
	LOAD_AND_CHECK(fn_RasterPos2iv, "glRasterPos2iv")
	LOAD_AND_CHECK(fn_RasterPos2s, "glRasterPos2s")
	LOAD_AND_CHECK(fn_RasterPos2sv, "glRasterPos2sv")
	LOAD_AND_CHECK(fn_RasterPos3d, "glRasterPos3d")
	LOAD_AND_CHECK(fn_RasterPos3dv, "glRasterPos3dv")
	LOAD_AND_CHECK(fn_RasterPos3f, "glRasterPos3f")
	LOAD_AND_CHECK(fn_RasterPos3fv, "glRasterPos3fv")
	LOAD_AND_CHECK(fn_RasterPos3i, "glRasterPos3i")
	LOAD_AND_CHECK(fn_RasterPos3iv, "glRasterPos3iv")
	LOAD_AND_CHECK(fn_RasterPos3s, "glRasterPos3s")
	LOAD_AND_CHECK(fn_RasterPos3sv, "glRasterPos3sv")
	LOAD_AND_CHECK(fn_RasterPos4d, "glRasterPos4d")
	LOAD_AND_CHECK(fn_RasterPos4dv, "glRasterPos4dv")
	LOAD_AND_CHECK(fn_RasterPos4f, "glRasterPos4f")
	LOAD_AND_CHECK(fn_RasterPos4fv, "glRasterPos4fv")
	LOAD_AND_CHECK(fn_RasterPos4i, "glRasterPos4i")
	LOAD_AND_CHECK(fn_RasterPos4iv, "glRasterPos4iv")
	LOAD_AND_CHECK(fn_RasterPos4s, "glRasterPos4s")
	LOAD_AND_CHECK(fn_RasterPos4sv, "glRasterPos4sv")
	LOAD_AND_CHECK(fn_ReadBuffer, "glReadBuffer")
	LOAD_AND_CHECK(fn_ReadPixels, "glReadPixels")
	LOAD_AND_CHECK(fn_Rectd, "glRectd")
	LOAD_AND_CHECK(fn_Rectdv, "glRectdv")
	LOAD_AND_CHECK(fn_Rectf, "glRectf")
	LOAD_AND_CHECK(fn_Rectfv, "glRectfv")
	LOAD_AND_CHECK(fn_Recti, "glRecti")
	LOAD_AND_CHECK(fn_Rectiv, "glRectiv")
	LOAD_AND_CHECK(fn_Rects, "glRects")
	LOAD_AND_CHECK(fn_Rectsv, "glRectsv")
	LOAD_AND_CHECK(fn_RenderMode, "glRenderMode")
	LOAD_AND_CHECK(fn_Rotated, "glRotated")
	LOAD_AND_CHECK(fn_Rotatef, "glRotatef")
	LOAD_AND_CHECK(fn_Scaled, "glScaled")
	LOAD_AND_CHECK(fn_Scalef, "glScalef")
	LOAD_AND_CHECK(fn_Scissor, "glScissor")
	LOAD_AND_CHECK(fn_SelectBuffer, "glSelectBuffer")
	LOAD_AND_CHECK(fn_ShadeModel, "glShadeModel")
	LOAD_AND_CHECK(fn_StencilFunc, "glStencilFunc")
	LOAD_AND_CHECK(fn_StencilMask, "glStencilMask")
	LOAD_AND_CHECK(fn_StencilOp, "glStencilOp")
	LOAD_AND_CHECK(fn_TexCoord1d, "glTexCoord1d")
	LOAD_AND_CHECK(fn_TexCoord1dv, "glTexCoord1dv")
	LOAD_AND_CHECK(fn_TexCoord1f, "glTexCoord1f")
	LOAD_AND_CHECK(fn_TexCoord1fv, "glTexCoord1fv")
	LOAD_AND_CHECK(fn_TexCoord1i, "glTexCoord1i")
	LOAD_AND_CHECK(fn_TexCoord1iv, "glTexCoord1iv")
	LOAD_AND_CHECK(fn_TexCoord1s, "glTexCoord1s")
	LOAD_AND_CHECK(fn_TexCoord1sv, "glTexCoord1sv")
	LOAD_AND_CHECK(fn_TexCoord2d, "glTexCoord2d")
	LOAD_AND_CHECK(fn_TexCoord2dv, "glTexCoord2dv")
	LOAD_AND_CHECK(fn_TexCoord2f, "glTexCoord2f")
	LOAD_AND_CHECK(fn_TexCoord2fv, "glTexCoord2fv")
	LOAD_AND_CHECK(fn_TexCoord2i, "glTexCoord2i")
	LOAD_AND_CHECK(fn_TexCoord2iv, "glTexCoord2iv")
	LOAD_AND_CHECK(fn_TexCoord2s, "glTexCoord2s")
	LOAD_AND_CHECK(fn_TexCoord2sv, "glTexCoord2sv")
	LOAD_AND_CHECK(fn_TexCoord3d, "glTexCoord3d")
	LOAD_AND_CHECK(fn_TexCoord3dv, "glTexCoord3dv")
	LOAD_AND_CHECK(fn_TexCoord3f, "glTexCoord3f")
	LOAD_AND_CHECK(fn_TexCoord3fv, "glTexCoord3fv")
	LOAD_AND_CHECK(fn_TexCoord3i, "glTexCoord3i")
	LOAD_AND_CHECK(fn_TexCoord3iv, "glTexCoord3iv")
	LOAD_AND_CHECK(fn_TexCoord3s, "glTexCoord3s")
	LOAD_AND_CHECK(fn_TexCoord3sv, "glTexCoord3sv")
	LOAD_AND_CHECK(fn_TexCoord4d, "glTexCoord4d")
	LOAD_AND_CHECK(fn_TexCoord4dv, "glTexCoord4dv")
	LOAD_AND_CHECK(fn_TexCoord4f, "glTexCoord4f")
	LOAD_AND_CHECK(fn_TexCoord4fv, "glTexCoord4fv")
	LOAD_AND_CHECK(fn_TexCoord4i, "glTexCoord4i")
	LOAD_AND_CHECK(fn_TexCoord4iv, "glTexCoord4iv")
	LOAD_AND_CHECK(fn_TexCoord4s, "glTexCoord4s")
	LOAD_AND_CHECK(fn_TexCoord4sv, "glTexCoord4sv")
	LOAD_AND_CHECK(fn_TexCoordPointer, "glTexCoordPointer")
	LOAD_AND_CHECK(fn_TexEnvf, "glTexEnvf")
	LOAD_AND_CHECK(fn_TexEnvfv, "glTexEnvfv")
	LOAD_AND_CHECK(fn_TexEnvi, "glTexEnvi")
	LOAD_AND_CHECK(fn_TexEnviv, "glTexEnviv")
	LOAD_AND_CHECK(fn_TexGend, "glTexGend")
	LOAD_AND_CHECK(fn_TexGendv, "glTexGendv")
	LOAD_AND_CHECK(fn_TexGenf, "glTexGenf")
	LOAD_AND_CHECK(fn_TexGenfv, "glTexGenfv")
	LOAD_AND_CHECK(fn_TexGeni, "glTexGeni")
	LOAD_AND_CHECK(fn_TexGeniv, "glTexGeniv")
	LOAD_AND_CHECK(fn_TexImage1D, "glTexImage1D")
	LOAD_AND_CHECK(fn_TexImage2D, "glTexImage2D")
	LOAD_AND_CHECK(fn_TexParameterf, "glTexParameterf")
	LOAD_AND_CHECK(fn_TexParameterfv, "glTexParameterfv")
	LOAD_AND_CHECK(fn_TexParameteri, "glTexParameteri")
	LOAD_AND_CHECK(fn_TexParameteriv, "glTexParameteriv")
	LOAD_AND_CHECK(fn_TexSubImage1D, "glTexSubImage1D")
	LOAD_AND_CHECK(fn_TexSubImage2D, "glTexSubImage2D")
	LOAD_AND_CHECK(fn_Translated, "glTranslated")
	LOAD_AND_CHECK(fn_Translatef, "glTranslatef")
	LOAD_AND_CHECK(fn_Vertex2d, "glVertex2d")
	LOAD_AND_CHECK(fn_Vertex2dv, "glVertex2dv")
	LOAD_AND_CHECK(fn_Vertex2f, "glVertex2f")
	LOAD_AND_CHECK(fn_Vertex2fv, "glVertex2fv")
	LOAD_AND_CHECK(fn_Vertex2i, "glVertex2i")
	LOAD_AND_CHECK(fn_Vertex2iv, "glVertex2iv")
	LOAD_AND_CHECK(fn_Vertex2s, "glVertex2s")
	LOAD_AND_CHECK(fn_Vertex2sv, "glVertex2sv")
	LOAD_AND_CHECK(fn_Vertex3d, "glVertex3d")
	LOAD_AND_CHECK(fn_Vertex3dv, "glVertex3dv")
	LOAD_AND_CHECK(fn_Vertex3f, "glVertex3f")
	LOAD_AND_CHECK(fn_Vertex3fv, "glVertex3fv")
	LOAD_AND_CHECK(fn_Vertex3i, "glVertex3i")
	LOAD_AND_CHECK(fn_Vertex3iv, "glVertex3iv")
	LOAD_AND_CHECK(fn_Vertex3s, "glVertex3s")
	LOAD_AND_CHECK(fn_Vertex3sv, "glVertex3sv")
	LOAD_AND_CHECK(fn_Vertex4d, "glVertex4d")
	LOAD_AND_CHECK(fn_Vertex4dv, "glVertex4dv")
	LOAD_AND_CHECK(fn_Vertex4f, "glVertex4f")
	LOAD_AND_CHECK(fn_Vertex4fv, "glVertex4fv")
	LOAD_AND_CHECK(fn_Vertex4i, "glVertex4i")
	LOAD_AND_CHECK(fn_Vertex4iv, "glVertex4iv")
	LOAD_AND_CHECK(fn_Vertex4s, "glVertex4s")
	LOAD_AND_CHECK(fn_Vertex4sv, "glVertex4sv")
	LOAD_AND_CHECK(fn_VertexPointer, "glVertexPointer")
	LOAD_AND_CHECK(fn_Viewport, "glViewport")

	return true;
}

void WINAPI gl::hk_Accum(GLenum op, GLfloat value)
{
	PRINT_GL("%s %u %f\n", __FUNCTION__, op, value);
	fn_Accum(op, value);
}

void WINAPI gl::hk_AlphaFunc(GLenum func, GLclampf ref)
{
	PRINT_GL("%s %u %f\n", __FUNCTION__, func, ref);
	fn_AlphaFunc(func, ref);
}

GLboolean WINAPI gl::hk_AreTexturesResident(GLsizei n, const GLuint* textures, GLboolean* residences)
{
	PRINT_GL("%s %d %p %p\n", __FUNCTION__, n, textures, residences);
	return fn_AreTexturesResident(n, textures, residences);
}

void WINAPI gl::hk_ArrayElement(GLint i)
{
	PRINT_GL("%s %d\n", __FUNCTION__, i);
	fn_ArrayElement(i);
}

void WINAPI gl::hk_Begin(GLenum mode)
{
	PRINT_GL("%s %u\n", __FUNCTION__, mode);
	fn_Begin(mode);
}

void WINAPI gl::hk_BindTexture(GLenum target, GLuint texture)
{
	PRINT_GL("%s %u %u\n", __FUNCTION__, target, texture);
	fn_BindTexture(target, texture);
}

void WINAPI gl::hk_Bitmap(GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte* bitmap)
{
	PRINT_GL("%s %d %d %f %f %f %f %p\n", __FUNCTION__, width, height, xorig, yorig, xmove, ymove, bitmap);
	fn_Bitmap(width, height, xorig, yorig, xmove, ymove, bitmap);
}

void WINAPI gl::hk_BlendFunc(GLenum sfactor, GLenum dfactor)
{
	PRINT_GL("%s %u %u\n", __FUNCTION__, sfactor, dfactor);
	fn_BlendFunc(sfactor, dfactor);
}

void WINAPI gl::hk_CallList(GLuint list)
{
	PRINT_GL("%s %u\n", __FUNCTION__, list);
	fn_CallList(list);
}

void WINAPI gl::hk_CallLists(GLsizei n, GLenum type, const GLvoid* lists)
{
	PRINT_GL("%s %d %u %p\n", __FUNCTION__, n, type, lists);
	fn_CallLists(n, type, lists);
}

void WINAPI gl::hk_Clear(GLbitfield mask)
{
	PRINT_GL("%s %d\n", __FUNCTION__, mask);
	fn_Clear(mask);
}

void WINAPI gl::hk_ClearAccum(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
	PRINT_GL("%s %f %f %f %f\n", __FUNCTION__, red, green, blue, alpha);
	fn_ClearAccum(red, green, blue, alpha);
}

void WINAPI gl::hk_ClearColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha)
{
	PRINT_GL("%s %f %f %f %f\n", __FUNCTION__, red, green, blue, alpha);
	fn_ClearColor(red, green, blue, alpha);
}

void WINAPI gl::hk_ClearDepth(GLclampd depth)
{
	PRINT_GL("%s %f\n", __FUNCTION__, depth);
	fn_ClearDepth(depth);
}

void WINAPI gl::hk_ClearIndex(GLfloat c)
{
	PRINT_GL("%s %f\n", __FUNCTION__, c);
	fn_ClearIndex(c);
}

void WINAPI gl::hk_ClearStencil(GLint s)
{
	PRINT_GL("%s %d\n", __FUNCTION__, s);
	fn_ClearStencil(s);
}

void WINAPI gl::hk_ClipPlane(GLenum plane, const GLdouble* equation)
{
	PRINT_GL("%s %u %p\n", __FUNCTION__, plane, equation);
	fn_ClipPlane(plane, equation);
}

void WINAPI gl::hk_Color3b(GLbyte red, GLbyte green, GLbyte blue)
{
	PRINT_GL("%s %d %d %d\n", __FUNCTION__, red, green, blue);
	fn_Color3b(red, green, blue);
}

void WINAPI gl::hk_Color3bv(const GLbyte* v)
{
	PRINT_GL("%s %p\n", __FUNCTION__, v);
	fn_Color3bv(v);
}

void WINAPI gl::hk_Color3d(GLdouble red, GLdouble green, GLdouble blue)
{
	PRINT_GL("%s %f %f %f\n", __FUNCTION__, red, green, blue);
	fn_Color3d(red, green, blue);
}

void WINAPI gl::hk_Color3dv(const GLdouble* v)
{
	PRINT_GL("%s %p\n", __FUNCTION__, v);
	fn_Color3dv(v);
}

void WINAPI gl::hk_Color3f(GLfloat red, GLfloat green, GLfloat blue)
{
	PRINT_GL("%s %f %f %f\n", __FUNCTION__, red, green, blue);
	fn_Color3f(red, green, blue);
}

void WINAPI gl::hk_Color3fv(const GLfloat* v)
{
	PRINT_GL("%s %p\n", __FUNCTION__, v);
	fn_Color3fv(v);
}

void WINAPI gl::hk_Color3i(GLint red, GLint green, GLint blue)
{
	PRINT_GL("%s %d %d %d\n", __FUNCTION__, red, green, blue);
	fn_Color3i(red, green, blue);
}

void WINAPI gl::hk_Color3iv(const GLint* v)
{
	PRINT_GL("%s %p\n", __FUNCTION__, v);
	fn_Color3iv(v);
}

void WINAPI gl::hk_Color3s(GLshort red, GLshort green, GLshort blue)
{
	PRINT_GL("%s %d %d %d\n", __FUNCTION__, red, green, blue);
	fn_Color3s(red, green, blue);
}

void WINAPI gl::hk_Color3sv(const GLshort* v)
{
	PRINT_GL("%s %p\n", __FUNCTION__, v);
	fn_Color3sv(v);
}

void WINAPI gl::hk_Color3ub(GLubyte red, GLubyte green, GLubyte blue)
{
	PRINT_GL("%s %d %d %d\n", __FUNCTION__, red, green, blue);
	fn_Color3ub(red, green, blue);
}

void WINAPI gl::hk_Color3ubv(const GLubyte* v)
{
	PRINT_GL("%s %p\n", __FUNCTION__, v);
	fn_Color3ubv(v);
}

void WINAPI gl::hk_Color3ui(GLuint red, GLuint green, GLuint blue)
{
	PRINT_GL("%s %u %u %u\n", __FUNCTION__, red, green, blue);
	fn_Color3ui(red, green, blue);
}

void WINAPI gl::hk_Color3uiv(const GLuint* v)
{
	PRINT_GL("%s %p\n", __FUNCTION__, v);
	fn_Color3uiv(v);
}

void WINAPI gl::hk_Color3us(GLushort red, GLushort green, GLushort blue)
{
	PRINT_GL("%s %d %d %d\n", __FUNCTION__, red, green, blue);
	fn_Color3us(red, green, blue);
}

void WINAPI gl::hk_Color3usv(const GLushort* v)
{
	PRINT_GL("%s %p\n", __FUNCTION__, v);
	fn_Color3usv(v);
}

void WINAPI gl::hk_Color4b(GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha)
{
	PRINT_GL("%s %d %d %d %d\n", __FUNCTION__, red, green, blue, alpha);
	fn_Color4b(red, green, blue, alpha);
}

void WINAPI gl::hk_Color4bv(const GLbyte* v)
{
	PRINT_GL("%s %p\n", __FUNCTION__, v);
	fn_Color4bv(v);
}

void WINAPI gl::hk_Color4d(GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha)
{
	PRINT_GL("%s %f %f %f %f\n", __FUNCTION__, red, green, blue, alpha);
	fn_Color4d(red, green, blue, alpha);
}

void WINAPI gl::hk_Color4dv(const GLdouble* v)
{
	PRINT_GL("%s %p\n", __FUNCTION__, v);
	fn_Color4dv(v);
}

void WINAPI gl::hk_Color4f(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
	PRINT_GL("%s %f %f %f %f\n", __FUNCTION__, red, green, blue, alpha);
	fn_Color4f(red, green, blue, alpha);
}

void WINAPI gl::hk_Color4fv(const GLfloat* v)
{
	PRINT_GL("%s %p\n", __FUNCTION__, v);
	fn_Color4fv(v);
}

void WINAPI gl::hk_Color4i(GLint red, GLint green, GLint blue, GLint alpha)
{
	PRINT_GL("%s %d %d %d %d\n", __FUNCTION__, red, green, blue, alpha);
	fn_Color4i(red, green, blue, alpha);
}

void WINAPI gl::hk_Color4iv(const GLint* v)
{
	PRINT_GL("%s %p\n", __FUNCTION__, v);
	fn_Color4iv(v);
}

void WINAPI gl::hk_Color4s(GLshort red, GLshort green, GLshort blue, GLshort alpha)
{
	PRINT_GL("%s %d %d %d %d\n", __FUNCTION__, red, green, blue, alpha);
	fn_Color4s(red, green, blue, alpha);
}

void WINAPI gl::hk_Color4sv(const GLshort* v)
{
	PRINT_GL("%s %p\n", __FUNCTION__, v);
	fn_Color4sv(v);
}

void WINAPI gl::hk_Color4ub(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha)
{
	PRINT_GL("%s %d %d %d %d\n", __FUNCTION__, red, green, blue, alpha);
	fn_Color4ub(red, green, blue, alpha);
}

void WINAPI gl::hk_Color4ubv(const GLubyte* v)
{
	PRINT_GL("%s %p\n", __FUNCTION__, v);
	fn_Color4ubv(v);
}

void WINAPI gl::hk_Color4ui(GLuint red, GLuint green, GLuint blue, GLuint alpha)
{
	PRINT_GL("%s %u %u %u %u\n", __FUNCTION__, red, green, blue, alpha);
	fn_Color4ui(red, green, blue, alpha);
}

void WINAPI gl::hk_Color4uiv(const GLuint* v)
{
	PRINT_GL("%s %p\n", __FUNCTION__, v);
	fn_Color4uiv(v);
}

void WINAPI gl::hk_Color4us(GLushort red, GLushort green, GLushort blue, GLushort alpha)
{
	PRINT_GL("%s %d %d %d %d\n", __FUNCTION__, red, green, blue, alpha);
	fn_Color4us(red, green, blue, alpha);
}

void WINAPI gl::hk_Color4usv(const GLushort* v)
{
	PRINT_GL("%s %p\n", __FUNCTION__, v);
	fn_Color4usv(v);
}

void WINAPI gl::hk_ColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
{
	PRINT_GL("%s %d %d %d %d\n", __FUNCTION__, red, green, blue, alpha);
	fn_ColorMask(red, green, blue, alpha);
}

void WINAPI gl::hk_ColorMaterial(GLenum face, GLenum mode)
{
	PRINT_GL("%s %u %u\n", __FUNCTION__, face, mode);
	fn_ColorMaterial(face, mode);
}

void WINAPI gl::hk_ColorPointer(GLint size, GLenum type, GLsizei stride, const GLvoid* pointer)
{
	PRINT_GL("%s %d %u %d %p\n", __FUNCTION__, size, type, stride, pointer);
	fn_ColorPointer(size, type, stride, pointer);
}

void WINAPI gl::hk_CopyPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum type)
{
	PRINT_GL("%s %d %d %d %d %u\n", __FUNCTION__, x, y, width, height, type);
	fn_CopyPixels(x, y, width, height, type);
}

void WINAPI gl::hk_CopyTexImage1D(GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLint border)
{
	PRINT_GL("%s %u %d %u %d %d %d %d\n", __FUNCTION__, target, level, internalFormat, x, y, width, border);
	fn_CopyTexImage1D(target, level, internalFormat, x, y, width, border);
}

void WINAPI gl::hk_CopyTexImage2D(GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
	PRINT_GL("%s %u %d %u %d %d %d %d %d\n", __FUNCTION__, target, level, internalFormat, x, y, width, height, border);
	fn_CopyTexImage2D(target, level, internalFormat, x, y, width, height, border);
}

void WINAPI gl::hk_CopyTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
	PRINT_GL("%s %u %d %d %d %d %d\n", __FUNCTION__, target, level, xoffset, x, y, width);
	fn_CopyTexSubImage1D(target, level, xoffset, x, y, width);
}

void WINAPI gl::hk_CopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
	PRINT_GL("%s %u %d %d %d %d %d %d %d\n", __FUNCTION__, target, level, xoffset, yoffset, x, y, width, height);
	fn_CopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
}

void WINAPI gl::hk_CullFace(GLenum mode)
{
	PRINT_GL("%s %u\n", __FUNCTION__, mode);
	fn_CullFace(mode);
}

GLint WINAPI gl::hk_DebugEntry(GLint unknown1, GLint unknown2)
{
	PRINT_GL("%s %d %d\n", __FUNCTION__, unknown1, unknown2);
	return fn_DebugEntry(unknown1, unknown2);
}

void WINAPI gl::hk_DeleteLists(GLuint list, GLsizei range)
{
	PRINT_GL("%s %u %d\n", __FUNCTION__, list, range);
	fn_DeleteLists(list, range);
}

void WINAPI gl::hk_DeleteTextures(GLsizei n, const GLuint* textures)
{
	PRINT_GL("%s %d %p\n", __FUNCTION__, n, textures);
	fn_DeleteTextures(n, textures);
}

void WINAPI gl::hk_DepthFunc(GLenum func)
{
	PRINT_GL("%s %u\n", __FUNCTION__, func);
	fn_DepthFunc(func);
}

void WINAPI gl::hk_DepthMask(GLboolean flag)
{
	PRINT_GL("%s %d\n", __FUNCTION__, flag);
	fn_DepthMask(flag);
}

void WINAPI gl::hk_DepthRange(GLclampd zNear, GLclampd zFar)
{
	PRINT_GL("%s %f %f\n", __FUNCTION__, zNear, zFar);
	fn_DepthRange(zNear, zFar);
}

void WINAPI gl::hk_Disable(GLenum cap)
{
	PRINT_GL("%s %u\n", __FUNCTION__, cap);
	fn_Disable(cap);
}

void WINAPI gl::hk_DisableClientState(GLenum array)
{
	PRINT_GL("%s %u\n", __FUNCTION__, array);
	fn_DisableClientState(array);
}

void WINAPI gl::hk_DrawArrays(GLenum mode, GLint first, GLsizei count)
{
	PRINT_GL("%s %u %d %d\n", __FUNCTION__, mode, first, count);
	fn_DrawArrays(mode, first, count);
}

void WINAPI gl::hk_DrawBuffer(GLenum mode)
{
	PRINT_GL("%s %u\n", __FUNCTION__, mode);
	fn_DrawBuffer(mode);
}

void WINAPI gl::hk_DrawElements(GLenum mode, GLsizei count, GLenum type, const GLvoid* indices)
{
	PRINT_GL("%s %u %d %u %p\n", __FUNCTION__, mode, count, type, indices);
	fn_DrawElements(mode, count, type, indices);
}

void WINAPI gl::hk_DrawPixels(GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid* pixels)
{
	PRINT_GL("%s %d %d %u %u %p\n", __FUNCTION__, width, height, format, type, pixels);
	fn_DrawPixels(width, height, format, type, pixels);
}

void WINAPI gl::hk_EdgeFlag(GLboolean flag)
{
	PRINT_GL("%s %d\n", __FUNCTION__, flag);
	fn_EdgeFlag(flag);
}

void WINAPI gl::hk_EdgeFlagPointer(GLsizei stride, const GLvoid* pointer)
{
	PRINT_GL("%s %d %p\n", __FUNCTION__, stride, pointer);
	fn_EdgeFlagPointer(stride, pointer);
}

void WINAPI gl::hk_EdgeFlagv(const GLboolean* flag)
{
	PRINT_GL("%s %p\n", __FUNCTION__, flag);
	fn_EdgeFlagv(flag);
}

void WINAPI gl::hk_Enable(GLenum cap)
{
	PRINT_GL("%s %u\n", __FUNCTION__, cap);
	fn_Enable(cap);
}

void WINAPI gl::hk_EnableClientState(GLenum array)
{
	PRINT_GL("%s %u\n", __FUNCTION__, array);
	fn_EnableClientState(array);
}

void WINAPI gl::hk_End(void)
{
	PRINT_GL("%s\n", __FUNCTION__);
	fn_End();
}

void WINAPI gl::hk_EndList(void)
{
	PRINT_GL("%s\n", __FUNCTION__);
	fn_EndList();
}

void WINAPI gl::hk_EvalCoord1d(GLdouble u)
{
	PRINT_GL("%s %f\n", __FUNCTION__, u);
	fn_EvalCoord1d(u);
}

void WINAPI gl::hk_EvalCoord1dv(const GLdouble* u)
{
	PRINT_GL("%s %p\n", __FUNCTION__, u);
	fn_EvalCoord1dv(u);
}

void WINAPI gl::hk_EvalCoord1f(GLfloat u)
{
	PRINT_GL("%s %f\n", __FUNCTION__, u);
	fn_EvalCoord1f(u);
}

void WINAPI gl::hk_EvalCoord1fv(const GLfloat* u)
{
	PRINT_GL("%s %p\n", __FUNCTION__, u);
	fn_EvalCoord1fv(u);
}

void WINAPI gl::hk_EvalCoord2d(GLdouble u, GLdouble v)
{
	PRINT_GL("%s %f %f\n", __FUNCTION__, u, v);
	fn_EvalCoord2d(u, v);
}

void WINAPI gl::hk_EvalCoord2dv(const GLdouble* u)
{
	PRINT_GL("%s %p\n", __FUNCTION__, u);
	fn_EvalCoord2dv(u);
}

void WINAPI gl::hk_EvalCoord2f(GLfloat u, GLfloat v)
{
	PRINT_GL("%s %f %f\n", __FUNCTION__, u, v);
	fn_EvalCoord2f(u, v);
}

void WINAPI gl::hk_EvalCoord2fv(const GLfloat* u)
{
	PRINT_GL("%s %p\n", __FUNCTION__, u);
	fn_EvalCoord2fv(u);
}

void WINAPI gl::hk_EvalMesh1(GLenum mode, GLint i1, GLint i2)
{
	PRINT_GL("%s %u %d %d\n", __FUNCTION__, mode, i1, i2);
	fn_EvalMesh1(mode, i1, i2);
}

void WINAPI gl::hk_EvalMesh2(GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2)
{
	PRINT_GL("%s %u %d %d %d %d\n", __FUNCTION__, mode, i1, i2, j1, j2);
	fn_EvalMesh2(mode, i1, i2, j1, j2);
}

void WINAPI gl::hk_EvalPoint1(GLint i)
{
	PRINT_GL("%s %d\n", __FUNCTION__, i);
	fn_EvalPoint1(i);
}

void WINAPI gl::hk_EvalPoint2(GLint i, GLint j)
{
	PRINT_GL("%s %d %d\n", __FUNCTION__, i, j);
	fn_EvalPoint2(i, j);
}

void WINAPI gl::hk_FeedbackBuffer(GLsizei size, GLenum type, GLfloat* buffer)
{
	PRINT_GL("%s %d %u %p\n", __FUNCTION__, size, type, buffer);
	fn_FeedbackBuffer(size, type, buffer);
}

void WINAPI gl::hk_Finish(void)
{
	PRINT_GL("%s\n", __FUNCTION__);
	fn_Finish();
}

void WINAPI gl::hk_Flush(void)
{
	PRINT_GL("%s\n", __FUNCTION__);
	fn_Flush();
}

void WINAPI gl::hk_Fogf(GLenum pname, GLfloat param)
{
	PRINT_GL("%s %u %f\n", __FUNCTION__, pname, param);
	fn_Fogf(pname, param);
}

void WINAPI gl::hk_Fogfv(GLenum pname, const GLfloat* params)
{
	PRINT_GL("%s %u %p\n", __FUNCTION__, pname, params);
	fn_Fogfv(pname, params);
}

void WINAPI gl::hk_Fogi(GLenum pname, GLint param)
{
	PRINT_GL("%s %u %d\n", __FUNCTION__, pname, param);
	fn_Fogi(pname, param);
}

void WINAPI gl::hk_Fogiv(GLenum pname, const GLint* params)
{
	PRINT_GL("%s %u %p\n", __FUNCTION__, pname, params);
	fn_Fogiv(pname, params);
}

void WINAPI gl::hk_FrontFace(GLenum mode)
{
	PRINT_GL("%s %u\n", __FUNCTION__, mode);
	fn_FrontFace(mode);
}

void WINAPI gl::hk_Frustum(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
	PRINT_GL("%s %f %f %f %f %f %f\n", __FUNCTION__, left, right, bottom, top, zNear, zFar);
	fn_Frustum(left, right, bottom, top, zNear, zFar);
}

GLuint WINAPI gl::hk_GenLists(GLsizei range)
{
	PRINT_GL("%s %d\n", __FUNCTION__, range);
	return fn_GenLists(range);
}

void WINAPI gl::hk_GenTextures(GLsizei n, GLuint* textures)
{
	PRINT_GL("%s %d %p\n", __FUNCTION__, n, textures);
	fn_GenTextures(n, textures);
}

void WINAPI gl::hk_GetBooleanv(GLenum pname, GLboolean* params)
{
	PRINT_GL("%s %u %p\n", __FUNCTION__, pname, params);
	fn_GetBooleanv(pname, params);
}

void WINAPI gl::hk_GetClipPlane(GLenum plane, GLdouble* equation)
{
	PRINT_GL("%s %u %p\n", __FUNCTION__, plane, equation);
	fn_GetClipPlane(plane, equation);
}

void WINAPI gl::hk_GetDoublev(GLenum pname, GLdouble* params)
{
	PRINT_GL("%s %u %p\n", __FUNCTION__, pname, params);
	fn_GetDoublev(pname, params);
}

GLenum WINAPI gl::hk_GetError(void)
{
	PRINT_GL("%s\n", __FUNCTION__);
	return fn_GetError();
}

void WINAPI gl::hk_GetFloatv(GLenum pname, GLfloat* params)
{
	PRINT_GL("%s %u %p\n", __FUNCTION__, pname, params);
	fn_GetFloatv(pname, params);
}

void WINAPI gl::hk_GetIntegerv(GLenum pname, GLint* params)
{
	PRINT_GL("%s %u %p\n", __FUNCTION__, pname, params);
	fn_GetIntegerv(pname, params);
}

void WINAPI gl::hk_GetLightfv(GLenum light, GLenum pname, GLfloat* params)
{
	PRINT_GL("%s %u %u %p\n", __FUNCTION__, light, pname, params);
	fn_GetLightfv(light, pname, params);
}

void WINAPI gl::hk_GetLightiv(GLenum light, GLenum pname, GLint* params)
{
	PRINT_GL("%s %u %u %p\n", __FUNCTION__, light, pname, params);
	fn_GetLightiv(light, pname, params);
}

void WINAPI gl::hk_GetMapdv(GLenum target, GLenum query, GLdouble* v)
{
	PRINT_GL("%s %u %u %p\n", __FUNCTION__, target, query, v);
	fn_GetMapdv(target, query, v);
}

void WINAPI gl::hk_GetMapfv(GLenum target, GLenum query, GLfloat* v)
{
	PRINT_GL("%s %u %u %p\n", __FUNCTION__, target, query, v);
	fn_GetMapfv(target, query, v);
}

void WINAPI gl::hk_GetMapiv(GLenum target, GLenum query, GLint* v)
{
	PRINT_GL("%s %u %u %p\n", __FUNCTION__, target, query, v);
	fn_GetMapiv(target, query, v);
}

void WINAPI gl::hk_GetMaterialfv(GLenum face, GLenum pname, GLfloat* params)
{
	PRINT_GL("%s %u %u %p\n", __FUNCTION__, face, pname, params);
	fn_GetMaterialfv(face, pname, params);
}

void WINAPI gl::hk_GetMaterialiv(GLenum face, GLenum pname, GLint* params)
{
	PRINT_GL("%s %u %u %p\n", __FUNCTION__, face, pname, params);
	fn_GetMaterialiv(face, pname, params);
}

void WINAPI gl::hk_GetPixelMapfv(GLenum map, GLfloat* values)
{
	PRINT_GL("%s %u %p\n", __FUNCTION__, map, values);
	fn_GetPixelMapfv(map, values);
}

void WINAPI gl::hk_GetPixelMapuiv(GLenum map, GLuint* values)
{
	PRINT_GL("%s %u %p\n", __FUNCTION__, map, values);
	fn_GetPixelMapuiv(map, values);
}

void WINAPI gl::hk_GetPixelMapusv(GLenum map, GLushort* values)
{
	PRINT_GL("%s %u %p\n", __FUNCTION__, map, values);
	fn_GetPixelMapusv(map, values);
}

void WINAPI gl::hk_GetPointerv(GLenum pname, GLvoid** params)
{
	PRINT_GL("%s %u %p\n", __FUNCTION__, pname, params);
	fn_GetPointerv(pname, params);
}

void WINAPI gl::hk_GetPolygonStipple(GLubyte* mask)
{
	PRINT_GL("%s %p\n", __FUNCTION__, mask);
	fn_GetPolygonStipple(mask);
}

const GLubyte* WINAPI gl::hk_GetString(GLenum name)
{
	PRINT_GL("%s %u\n", __FUNCTION__, name);
	return fn_GetString(name);
}

void WINAPI gl::hk_GetTexEnvfv(GLenum target, GLenum pname, GLfloat* params)
{
	PRINT_GL("%s %u %u %p\n", __FUNCTION__, target, pname, params);
	fn_GetTexEnvfv(target, pname, params);
}

void WINAPI gl::hk_GetTexEnviv(GLenum target, GLenum pname, GLint* params)
{
	PRINT_GL("%s %u %u %p\n", __FUNCTION__, target, pname, params);
	fn_GetTexEnviv(target, pname, params);
}

void WINAPI gl::hk_GetTexGendv(GLenum coord, GLenum pname, GLdouble* params)
{
	PRINT_GL("%s %u %u %p\n", __FUNCTION__, coord, pname, params);
	fn_GetTexGendv(coord, pname, params);
}

void WINAPI gl::hk_GetTexGenfv(GLenum coord, GLenum pname, GLfloat* params)
{
	PRINT_GL("%s %u %u %p\n", __FUNCTION__, coord, pname, params);
	fn_GetTexGenfv(coord, pname, params);
}

void WINAPI gl::hk_GetTexGeniv(GLenum coord, GLenum pname, GLint* params)
{
	PRINT_GL("%s %u %u %p\n", __FUNCTION__, coord, pname, params);
	fn_GetTexGeniv(coord, pname, params);
}

void WINAPI gl::hk_GetTexImage(GLenum target, GLint level, GLenum format, GLenum type, GLvoid* pixels)
{
	PRINT_GL("%s %u %d %u %u %p\n", __FUNCTION__, target, level, format, type, pixels);
	fn_GetTexImage(target, level, format, type, pixels);
}

void WINAPI gl::hk_GetTexLevelParameterfv(GLenum target, GLint level, GLenum pname, GLfloat* params)
{
	PRINT_GL("%s %u %d %u %p\n", __FUNCTION__, target, level, pname, params);
	fn_GetTexLevelParameterfv(target, level, pname, params);
}

void WINAPI gl::hk_GetTexLevelParameteriv(GLenum target, GLint level, GLenum pname, GLint* params)
{
	PRINT_GL("%s %u %d %u %p\n", __FUNCTION__, target, level, pname, params);
	fn_GetTexLevelParameteriv(target, level, pname, params);
}

void WINAPI gl::hk_GetTexParameterfv(GLenum target, GLenum pname, GLfloat* params)
{
	PRINT_GL("%s %u %u %p\n", __FUNCTION__, target, pname, params);
	fn_GetTexParameterfv(target, pname, params);
}

void WINAPI gl::hk_GetTexParameteriv(GLenum target, GLenum pname, GLint* params)
{
	PRINT_GL("%s %u %u %p\n", __FUNCTION__, target, pname, params);
	fn_GetTexParameteriv(target, pname, params);
}

void WINAPI gl::hk_Hint(GLenum target, GLenum mode)
{
	PRINT_GL("%s %u %u\n", __FUNCTION__, target, mode);
	fn_Hint(target, mode);
}

void WINAPI gl::hk_IndexMask(GLuint mask)
{
	PRINT_GL("%s %u\n", __FUNCTION__, mask);
	fn_IndexMask(mask);
}

void WINAPI gl::hk_IndexPointer(GLenum type, GLsizei stride, const GLvoid* pointer)
{
	PRINT_GL("%s %u %d %p\n", __FUNCTION__, type, stride, pointer);
	fn_IndexPointer(type, stride, pointer);
}

void WINAPI gl::hk_Indexd(GLdouble c)
{
	PRINT_GL("%s %f\n", __FUNCTION__, c);
	fn_Indexd(c);
}

void WINAPI gl::hk_Indexdv(const GLdouble* c)
{
	PRINT_GL("%s %p\n", __FUNCTION__, c);
	fn_Indexdv(c);
}

void WINAPI gl::hk_Indexf(GLfloat c)
{
	PRINT_GL("%s %f\n", __FUNCTION__, c);
	fn_Indexf(c);
}

void WINAPI gl::hk_Indexfv(const GLfloat* c)
{
	PRINT_GL("%s %p\n", __FUNCTION__, c);
	fn_Indexfv(c);
}

void WINAPI gl::hk_Indexi(GLint c)
{
	PRINT_GL("%s %d\n", __FUNCTION__, c);
	fn_Indexi(c);
}

void WINAPI gl::hk_Indexiv(const GLint* c)
{
	PRINT_GL("%s %p\n", __FUNCTION__, c);
	fn_Indexiv(c);
}

void WINAPI gl::hk_Indexs(GLshort c)
{
	PRINT_GL("%s %d\n", __FUNCTION__, c);
	fn_Indexs(c);
}

void WINAPI gl::hk_Indexsv(const GLshort* c)
{
	PRINT_GL("%s %p\n", __FUNCTION__, c);
	fn_Indexsv(c);
}

void WINAPI gl::hk_Indexub(GLubyte c)
{
	PRINT_GL("%s %d\n", __FUNCTION__, c);
	fn_Indexub(c);
}

void WINAPI gl::hk_Indexubv(const GLubyte* c)
{
	PRINT_GL("%s %p\n", __FUNCTION__, c);
	fn_Indexubv(c);
}

void WINAPI gl::hk_InitNames(void)
{
	PRINT_GL("%s\n", __FUNCTION__);
	fn_InitNames();
}

void WINAPI gl::hk_InterleavedArrays(GLenum format, GLsizei stride, const GLvoid* pointer)
{
	PRINT_GL("%s %u %d %p\n", __FUNCTION__, format, stride, pointer);
	fn_InterleavedArrays(format, stride, pointer);
}

GLboolean WINAPI gl::hk_IsEnabled(GLenum cap)
{
	PRINT_GL("%s %u\n", __FUNCTION__, cap);
	return fn_IsEnabled(cap);
}

GLboolean WINAPI gl::hk_IsList(GLuint list)
{
	PRINT_GL("%s %u\n", __FUNCTION__, list);
	return fn_IsList(list);
}

GLboolean WINAPI gl::hk_IsTexture(GLuint texture)
{
	PRINT_GL("%s %u\n", __FUNCTION__, texture);
	return fn_IsTexture(texture);
}

void WINAPI gl::hk_LightModelf(GLenum pname, GLfloat param)
{
	PRINT_GL("%s %u %f\n", __FUNCTION__, pname, param);
	fn_LightModelf(pname, param);
}

void WINAPI gl::hk_LightModelfv(GLenum pname, const GLfloat* params)
{
	PRINT_GL("%s %u %p\n", __FUNCTION__, pname, params);
	fn_LightModelfv(pname, params);
}

void WINAPI gl::hk_LightModeli(GLenum pname, GLint param)
{
	PRINT_GL("%s %u %d\n", __FUNCTION__, pname, param);
	fn_LightModeli(pname, param);
}

void WINAPI gl::hk_LightModeliv(GLenum pname, const GLint* params)
{
	PRINT_GL("%s %u %p\n", __FUNCTION__, pname, params);
	fn_LightModeliv(pname, params);
}

void WINAPI gl::hk_Lightf(GLenum light, GLenum pname, GLfloat param)
{
	PRINT_GL("%s %u %u %f\n", __FUNCTION__, light, pname, param);
	fn_Lightf(light, pname, param);
}

void WINAPI gl::hk_Lightfv(GLenum light, GLenum pname, const GLfloat* params)
{
	PRINT_GL("%s %u %u %p\n", __FUNCTION__, light, pname, params);
	fn_Lightfv(light, pname, params);
}

void WINAPI gl::hk_Lighti(GLenum light, GLenum pname, GLint param)
{
	PRINT_GL("%s %u %u %d\n", __FUNCTION__, light, pname, param);
	fn_Lighti(light, pname, param);
}

void WINAPI gl::hk_Lightiv(GLenum light, GLenum pname, const GLint* params)
{
	PRINT_GL("%s %u %u %p\n", __FUNCTION__, light, pname, params);
	fn_Lightiv(light, pname, params);
}

void WINAPI gl::hk_LineStipple(GLint factor, GLushort pattern)
{
	PRINT_GL("%s %d %d\n", __FUNCTION__, factor, pattern);
	fn_LineStipple(factor, pattern);
}

void WINAPI gl::hk_LineWidth(GLfloat width)
{
	PRINT_GL("%s %f\n", __FUNCTION__, width);
	fn_LineWidth(width);
}

void WINAPI gl::hk_ListBase(GLuint base)
{
	PRINT_GL("%s %u\n", __FUNCTION__, base);
	fn_ListBase(base);
}

void WINAPI gl::hk_LoadIdentity(void)
{
	PRINT_GL("%s\n", __FUNCTION__);
	fn_LoadIdentity();
}

void WINAPI gl::hk_LoadMatrixd(const GLdouble* m)
{
	PRINT_GL("%s %p\n", __FUNCTION__, m);
	fn_LoadMatrixd(m);
}

void WINAPI gl::hk_LoadMatrixf(const GLfloat* m)
{
	PRINT_GL("%s %p\n", __FUNCTION__, m);
	fn_LoadMatrixf(m);
}

void WINAPI gl::hk_LoadName(GLuint name)
{
	PRINT_GL("%s %u\n", __FUNCTION__, name);
	fn_LoadName(name);
}

void WINAPI gl::hk_LogicOp(GLenum opcode)
{
	PRINT_GL("%s %u\n", __FUNCTION__, opcode);
	fn_LogicOp(opcode);
}

void WINAPI gl::hk_Map1d(GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble* points)
{
	PRINT_GL("%s %u %f %f %d %d %p\n", __FUNCTION__, target, u1, u2, stride, order, points);
	fn_Map1d(target, u1, u2, stride, order, points);
}

void WINAPI gl::hk_Map1f(GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat* points)
{
	PRINT_GL("%s %u %f %f %d %d %p\n", __FUNCTION__, target, u1, u2, stride, order, points);
	fn_Map1f(target, u1, u2, stride, order, points);
}

void WINAPI gl::hk_Map2d(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble* points)
{
	PRINT_GL("%s %u %f %f %d %d %f %f %d %d %p\n", __FUNCTION__, target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
	fn_Map2d(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

void WINAPI gl::hk_Map2f(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat* points)
{
	PRINT_GL("%s %u %f %f %d %d %f %f %d %d %p\n", __FUNCTION__, target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
	fn_Map2f(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

void WINAPI gl::hk_MapGrid1d(GLint un, GLdouble u1, GLdouble u2)
{
	PRINT_GL("%s %d %f %f\n", __FUNCTION__, un, u1, u2);
	fn_MapGrid1d(un, u1, u2);
}

void WINAPI gl::hk_MapGrid1f(GLint un, GLfloat u1, GLfloat u2)
{
	PRINT_GL("%s %d %f %f\n", __FUNCTION__, un, u1, u2);
	fn_MapGrid1f(un, u1, u2);
}

void WINAPI gl::hk_MapGrid2d(GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2)
{
	PRINT_GL("%s %d %f %f %d %f %f\n", __FUNCTION__, un, u1, u2, vn, v1, v2);
	fn_MapGrid2d(un, u1, u2, vn, v1, v2);
}

void WINAPI gl::hk_MapGrid2f(GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2)
{
	PRINT_GL("%s %d %f %f %d %f %f\n", __FUNCTION__, un, u1, u2, vn, v1, v2);
	fn_MapGrid2f(un, u1, u2, vn, v1, v2);
}

void WINAPI gl::hk_Materialf(GLenum face, GLenum pname, GLfloat param)
{
	PRINT_GL("%s %u %u %f\n", __FUNCTION__, face, pname, param);
	fn_Materialf(face, pname, param);
}

void WINAPI gl::hk_Materialfv(GLenum face, GLenum pname, const GLfloat* params)
{
	PRINT_GL("%s %u %u %p\n", __FUNCTION__, face, pname, params);
	fn_Materialfv(face, pname, params);
}

void WINAPI gl::hk_Materiali(GLenum face, GLenum pname, GLint param)
{
	PRINT_GL("%s %u %u %d\n", __FUNCTION__, face, pname, param);
	fn_Materiali(face, pname, param);
}

void WINAPI gl::hk_Materialiv(GLenum face, GLenum pname, const GLint* params)
{
	PRINT_GL("%s %u %u %p\n", __FUNCTION__, face, pname, params);
	fn_Materialiv(face, pname, params);
}

void WINAPI gl::hk_MatrixMode(GLenum mode)
{
	PRINT_GL("%s %u\n", __FUNCTION__, mode);
	fn_MatrixMode(mode);
}

void WINAPI gl::hk_MultMatrixd(const GLdouble* m)
{
	PRINT_GL("%s %p\n", __FUNCTION__, m);
	fn_MultMatrixd(m);
}

void WINAPI gl::hk_MultMatrixf(const GLfloat* m)
{
	PRINT_GL("%s %p\n", __FUNCTION__, m);
	fn_MultMatrixf(m);
}

void WINAPI gl::hk_NewList(GLuint list, GLenum mode)
{
	PRINT_GL("%s %u %u\n", __FUNCTION__, list, mode);
	fn_NewList(list, mode);
}

void WINAPI gl::hk_Normal3b(GLbyte nx, GLbyte ny, GLbyte nz)
{
	PRINT_GL("%s %d %d %d\n", __FUNCTION__, nx, ny, nz);
	fn_Normal3b(nx, ny, nz);
}

void WINAPI gl::hk_Normal3bv(const GLbyte* v)
{
	PRINT_GL("%s %p\n", __FUNCTION__, v);
	fn_Normal3bv(v);
}

void WINAPI gl::hk_Normal3d(GLdouble nx, GLdouble ny, GLdouble nz)
{
	PRINT_GL("%s %f %f %f\n", __FUNCTION__, nx, ny, nz);
	fn_Normal3d(nx, ny, nz);
}

void WINAPI gl::hk_Normal3dv(const GLdouble* v)
{
	PRINT_GL("%s %p\n", __FUNCTION__, v);
	fn_Normal3dv(v);
}

void WINAPI gl::hk_Normal3f(GLfloat nx, GLfloat ny, GLfloat nz)
{
	PRINT_GL("%s %f %f %f\n", __FUNCTION__, nx, ny, nz);
	fn_Normal3f(nx, ny, nz);
}

void WINAPI gl::hk_Normal3fv(const GLfloat* v)
{
	PRINT_GL("%s %p\n", __FUNCTION__, v);
	fn_Normal3fv(v);
}

void WINAPI gl::hk_Normal3i(GLint nx, GLint ny, GLint nz)
{
	PRINT_GL("%s %d %d %d\n", __FUNCTION__, nx, ny, nz);
	fn_Normal3i(nx, ny, nz);
}

void WINAPI gl::hk_Normal3iv(const GLint* v)
{
	PRINT_GL("%s %p\n", __FUNCTION__, v);
	fn_Normal3iv(v);
}

void WINAPI gl::hk_Normal3s(GLshort nx, GLshort ny, GLshort nz)
{
	PRINT_GL("%s %d %d %d\n", __FUNCTION__, nx, ny, nz);
	fn_Normal3s(nx, ny, nz);
}

void WINAPI gl::hk_Normal3sv(const GLshort* v)
{
	PRINT_GL("%s %p\n", __FUNCTION__, v);
	fn_Normal3sv(v);
}

void WINAPI gl::hk_NormalPointer(GLenum type, GLsizei stride, const GLvoid* pointer)
{
	PRINT_GL("%s %u %d %p\n", __FUNCTION__, type, stride, pointer);
	fn_NormalPointer(type, stride, pointer);
}

void WINAPI gl::hk_Ortho(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
	PRINT_GL("%s %f %f %f %f %f %f\n", __FUNCTION__, left, right, bottom, top, zNear, zFar);
	fn_Ortho(left, right, bottom, top, zNear, zFar);
}

void WINAPI gl::hk_PassThrough(GLfloat token)
{
	PRINT_GL("%s %f\n", __FUNCTION__, token);
	fn_PassThrough(token);
}

void WINAPI gl::hk_PixelMapfv(GLenum map, GLsizei mapsize, const GLfloat* values)
{
	PRINT_GL("%s %u %d %p\n", __FUNCTION__, map, mapsize, values);
	fn_PixelMapfv(map, mapsize, values);
}

void WINAPI gl::hk_PixelMapuiv(GLenum map, GLsizei mapsize, const GLuint* values)
{
	PRINT_GL("%s %u %d %p\n", __FUNCTION__, map, mapsize, values);
	fn_PixelMapuiv(map, mapsize, values);
}

void WINAPI gl::hk_PixelMapusv(GLenum map, GLsizei mapsize, const GLushort* values)
{
	PRINT_GL("%s %u %d %p\n", __FUNCTION__, map, mapsize, values);
	fn_PixelMapusv(map, mapsize, values);
}

void WINAPI gl::hk_PixelStoref(GLenum pname, GLfloat param)
{
	PRINT_GL("%s %u %f\n", __FUNCTION__, pname, param);
	fn_PixelStoref(pname, param);
}

void WINAPI gl::hk_PixelStorei(GLenum pname, GLint param)
{
	PRINT_GL("%s %u %d\n", __FUNCTION__, pname, param);
	fn_PixelStorei(pname, param);
}

void WINAPI gl::hk_PixelTransferf(GLenum pname, GLfloat param)
{
	PRINT_GL("%s %u %f\n", __FUNCTION__, pname, param);
	fn_PixelTransferf(pname, param);
}

void WINAPI gl::hk_PixelTransferi(GLenum pname, GLint param)
{
	PRINT_GL("%s %u %d\n", __FUNCTION__, pname, param);
	fn_PixelTransferi(pname, param);
}

void WINAPI gl::hk_PixelZoom(GLfloat xfactor, GLfloat yfactor)
{
	PRINT_GL("%s %f %f\n", __FUNCTION__, xfactor, yfactor);
	fn_PixelZoom(xfactor, yfactor);
}

void WINAPI gl::hk_PointSize(GLfloat size)
{
	PRINT_GL("%s %f\n", __FUNCTION__, size);
	fn_PointSize(size);
}

void WINAPI gl::hk_PolygonMode(GLenum face, GLenum mode)
{
	PRINT_GL("%s %u %u\n", __FUNCTION__, face, mode);
	fn_PolygonMode(face, mode);
}

void WINAPI gl::hk_PolygonOffset(GLfloat factor, GLfloat units)
{
	PRINT_GL("%s %f %f\n", __FUNCTION__, factor, units);
	fn_PolygonOffset(factor, units);
}

void WINAPI gl::hk_PolygonStipple(const GLubyte* mask)
{
	PRINT_GL("%s %p\n", __FUNCTION__, mask);
	fn_PolygonStipple(mask);
}

void WINAPI gl::hk_PopAttrib(void)
{
	PRINT_GL("%s\n", __FUNCTION__);
	fn_PopAttrib();
}

void WINAPI gl::hk_PopClientAttrib(void)
{
	PRINT_GL("%s\n", __FUNCTION__);
	fn_PopClientAttrib();
}

void WINAPI gl::hk_PopMatrix(void)
{
	PRINT_GL("%s\n", __FUNCTION__);
	fn_PopMatrix();
}

void WINAPI gl::hk_PopName(void)
{
	PRINT_GL("%s\n", __FUNCTION__);
	fn_PopName();
}

void WINAPI gl::hk_PrioritizeTextures(GLsizei n, const GLuint* textures, const GLclampf* priorities)
{
	PRINT_GL("%s %d %p %p\n", __FUNCTION__, n, textures, priorities);
	fn_PrioritizeTextures(n, textures, priorities);
}

void WINAPI gl::hk_PushAttrib(GLbitfield mask)
{
	PRINT_GL("%s %d\n", __FUNCTION__, mask);
	fn_PushAttrib(mask);
}

void WINAPI gl::hk_PushClientAttrib(GLbitfield mask)
{
	PRINT_GL("%s %d\n", __FUNCTION__, mask);
	fn_PushClientAttrib(mask);
}

void WINAPI gl::hk_PushMatrix(void)
{
	PRINT_GL("%s\n", __FUNCTION__);
	fn_PushMatrix();
}

void WINAPI gl::hk_PushName(GLuint name)
{
	PRINT_GL("%s %u\n", __FUNCTION__, name);
	fn_PushName(name);
}

void WINAPI gl::hk_RasterPos2d(GLdouble x, GLdouble y)
{
	PRINT_GL("%s %f %f\n", __FUNCTION__, x, y);
	fn_RasterPos2d(x, y);
}

void WINAPI gl::hk_RasterPos2dv(const GLdouble* v)
{
	PRINT_GL("%s %p\n", __FUNCTION__, v);
	fn_RasterPos2dv(v);
}

void WINAPI gl::hk_RasterPos2f(GLfloat x, GLfloat y)
{
	PRINT_GL("%s %f %f\n", __FUNCTION__, x, y);
	fn_RasterPos2f(x, y);
}

void WINAPI gl::hk_RasterPos2fv(const GLfloat* v)
{
	PRINT_GL("%s %p\n", __FUNCTION__, v);
	fn_RasterPos2fv(v);
}

void WINAPI gl::hk_RasterPos2i(GLint x, GLint y)
{
	PRINT_GL("%s %d %d\n", __FUNCTION__, x, y);
	fn_RasterPos2i(x, y);
}

void WINAPI gl::hk_RasterPos2iv(const GLint* v)
{
	PRINT_GL("%s %p\n", __FUNCTION__, v);
	fn_RasterPos2iv(v);
}

void WINAPI gl::hk_RasterPos2s(GLshort x, GLshort y)
{
	PRINT_GL("%s %d %d\n", __FUNCTION__, x, y);
	fn_RasterPos2s(x, y);
}

void WINAPI gl::hk_RasterPos2sv(const GLshort* v)
{
	PRINT_GL("%s %p\n", __FUNCTION__, v);
	fn_RasterPos2sv(v);
}

void WINAPI gl::hk_RasterPos3d(GLdouble x, GLdouble y, GLdouble z)
{
	PRINT_GL("%s %f %f %f\n", __FUNCTION__, x, y, z);
	fn_RasterPos3d(x, y, z);
}

void WINAPI gl::hk_RasterPos3dv(const GLdouble* v)
{
	PRINT_GL("%s %p\n", __FUNCTION__, v);
	fn_RasterPos3dv(v);
}

void WINAPI gl::hk_RasterPos3f(GLfloat x, GLfloat y, GLfloat z)
{
	PRINT_GL("%s %f %f %f\n", __FUNCTION__, x, y, z);
	fn_RasterPos3f(x, y, z);
}

void WINAPI gl::hk_RasterPos3fv(const GLfloat* v)
{
	PRINT_GL("%s %p\n", __FUNCTION__, v);
	fn_RasterPos3fv(v);
}

void WINAPI gl::hk_RasterPos3i(GLint x, GLint y, GLint z)
{
	PRINT_GL("%s %d %d %d\n", __FUNCTION__, x, y, z);
	fn_RasterPos3i(x, y, z);
}

void WINAPI gl::hk_RasterPos3iv(const GLint* v)
{
	PRINT_GL("%s %p\n", __FUNCTION__, v);
	fn_RasterPos3iv(v);
}

void WINAPI gl::hk_RasterPos3s(GLshort x, GLshort y, GLshort z)
{
	PRINT_GL("%s %d %d %d\n", __FUNCTION__, x, y, z);
	fn_RasterPos3s(x, y, z);
}

void WINAPI gl::hk_RasterPos3sv(const GLshort* v)
{
	PRINT_GL("%s %p\n", __FUNCTION__, v);
	fn_RasterPos3sv(v);
}

void WINAPI gl::hk_RasterPos4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	PRINT_GL("%s %f %f %f %f\n", __FUNCTION__, x, y, z, w);
	fn_RasterPos4d(x, y, z, w);
}

void WINAPI gl::hk_RasterPos4dv(const GLdouble* v)
{
	PRINT_GL("%s %p\n", __FUNCTION__, v);
	fn_RasterPos4dv(v);
}

void WINAPI gl::hk_RasterPos4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	PRINT_GL("%s %f %f %f %f\n", __FUNCTION__, x, y, z, w);
	fn_RasterPos4f(x, y, z, w);
}

void WINAPI gl::hk_RasterPos4fv(const GLfloat* v)
{
	PRINT_GL("%s %p\n", __FUNCTION__, v);
	fn_RasterPos4fv(v);
}

void WINAPI gl::hk_RasterPos4i(GLint x, GLint y, GLint z, GLint w)
{
	PRINT_GL("%s %d %d %d %d\n", __FUNCTION__, x, y, z, w);
	fn_RasterPos4i(x, y, z, w);
}

void WINAPI gl::hk_RasterPos4iv(const GLint* v)
{
	PRINT_GL("%s %p\n", __FUNCTION__, v);
	fn_RasterPos4iv(v);
}

void WINAPI gl::hk_RasterPos4s(GLshort x, GLshort y, GLshort z, GLshort w)
{
	PRINT_GL("%s %d %d %d %d\n", __FUNCTION__, x, y, z, w);
	fn_RasterPos4s(x, y, z, w);
}

void WINAPI gl::hk_RasterPos4sv(const GLshort* v)
{
	PRINT_GL("%s %p\n", __FUNCTION__, v);
	fn_RasterPos4sv(v);
}

void WINAPI gl::hk_ReadBuffer(GLenum mode)
{
	PRINT_GL("%s %u\n", __FUNCTION__, mode);
	fn_ReadBuffer(mode);
}

void WINAPI gl::hk_ReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid* pixels)
{
	PRINT_GL("%s %d %d %d %d %u %u %p\n", __FUNCTION__, x, y, width, height, format, type, pixels);
	fn_ReadPixels(x, y, width, height, format, type, pixels);
}

void WINAPI gl::hk_Rectd(GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2)
{
	PRINT_GL("%s %f %f %f %f\n", __FUNCTION__, x1, y1, x2, y2);
	fn_Rectd(x1, y1, x2, y2);
}

void WINAPI gl::hk_Rectdv(const GLdouble* v1, const GLdouble* v2)
{
	PRINT_GL("%s %p %p\n", __FUNCTION__, v1, v2);
	fn_Rectdv(v1, v2);
}

void WINAPI gl::hk_Rectf(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2)
{
	PRINT_GL("%s %f %f %f %f\n", __FUNCTION__, x1, y1, x2, y2);
	fn_Rectf(x1, y1, x2, y2);
}

void WINAPI gl::hk_Rectfv(const GLfloat* v1, const GLfloat* v2)
{
	PRINT_GL("%s %p %p\n", __FUNCTION__, v1, v2);
	fn_Rectfv(v1, v2);
}

void WINAPI gl::hk_Recti(GLint x1, GLint y1, GLint x2, GLint y2)
{
	PRINT_GL("%s %d %d %d %d\n", __FUNCTION__, x1, y1, x2, y2);
	fn_Recti(x1, y1, x2, y2);
}

void WINAPI gl::hk_Rectiv(const GLint* v1, const GLint* v2)
{
	PRINT_GL("%s %p %p\n", __FUNCTION__, v1, v2);
	fn_Rectiv(v1, v2);
}

void WINAPI gl::hk_Rects(GLshort x1, GLshort y1, GLshort x2, GLshort y2)
{
	PRINT_GL("%s %d %d %d %d\n", __FUNCTION__, x1, y1, x2, y2);
	fn_Rects(x1, y1, x2, y2);
}

void WINAPI gl::hk_Rectsv(const GLshort* v1, const GLshort* v2)
{
	PRINT_GL("%s %p %p\n", __FUNCTION__, v1, v2);
	fn_Rectsv(v1, v2);
}

GLint WINAPI gl::hk_RenderMode(GLenum mode)
{
	PRINT_GL("%s %u\n", __FUNCTION__, mode);
	return fn_RenderMode(mode);
}

void WINAPI gl::hk_Rotated(GLdouble angle, GLdouble x, GLdouble y, GLdouble z)
{
	PRINT_GL("%s %f %f %f %f\n", __FUNCTION__, angle, x, y, z);
	fn_Rotated(angle, x, y, z);
}

void WINAPI gl::hk_Rotatef(GLfloat angle, GLfloat x, GLfloat y, GLfloat z)
{
	PRINT_GL("%s %f %f %f %f\n", __FUNCTION__, angle, x, y, z);
	fn_Rotatef(angle, x, y, z);
}

void WINAPI gl::hk_Scaled(GLdouble x, GLdouble y, GLdouble z)
{
	PRINT_GL("%s %f %f %f\n", __FUNCTION__, x, y, z);
	fn_Scaled(x, y, z);
}

void WINAPI gl::hk_Scalef(GLfloat x, GLfloat y, GLfloat z)
{
	PRINT_GL("%s %f %f %f\n", __FUNCTION__, x, y, z);
	fn_Scalef(x, y, z);
}

void WINAPI gl::hk_Scissor(GLint x, GLint y, GLsizei width, GLsizei height)
{
	PRINT_GL("%s %d %d %d %d\n", __FUNCTION__, x, y, width, height);
	fn_Scissor(x, y, width, height);
}

void WINAPI gl::hk_SelectBuffer(GLsizei size, GLuint* buffer)
{
	PRINT_GL("%s %d %p\n", __FUNCTION__, size, buffer);
	fn_SelectBuffer(size, buffer);
}

void WINAPI gl::hk_ShadeModel(GLenum mode)
{
	PRINT_GL("%s %u\n", __FUNCTION__, mode);
	fn_ShadeModel(mode);
}

void WINAPI gl::hk_StencilFunc(GLenum func, GLint ref, GLuint mask)
{
	PRINT_GL("%s %u %d %u\n", __FUNCTION__, func, ref, mask);
	fn_StencilFunc(func, ref, mask);
}

void WINAPI gl::hk_StencilMask(GLuint mask)
{
	PRINT_GL("%s %u\n", __FUNCTION__, mask);
	fn_StencilMask(mask);
}

void WINAPI gl::hk_StencilOp(GLenum fail, GLenum zfail, GLenum zpass)
{
	PRINT_GL("%s %u %u %u\n", __FUNCTION__, fail, zfail, zpass);
	fn_StencilOp(fail, zfail, zpass);
}

void WINAPI gl::hk_TexCoord1d(GLdouble s)
{
	PRINT_GL("%s %f\n", __FUNCTION__, s);
	fn_TexCoord1d(s);
}

void WINAPI gl::hk_TexCoord1dv(const GLdouble* v)
{
	PRINT_GL("%s %p\n", __FUNCTION__, v);
	fn_TexCoord1dv(v);
}

void WINAPI gl::hk_TexCoord1f(GLfloat s)
{
	PRINT_GL("%s %f\n", __FUNCTION__, s);
	fn_TexCoord1f(s);
}

void WINAPI gl::hk_TexCoord1fv(const GLfloat* v)
{
	PRINT_GL("%s %p\n", __FUNCTION__, v);
	fn_TexCoord1fv(v);
}

void WINAPI gl::hk_TexCoord1i(GLint s)
{
	PRINT_GL("%s %d\n", __FUNCTION__, s);
	fn_TexCoord1i(s);
}

void WINAPI gl::hk_TexCoord1iv(const GLint* v)
{
	PRINT_GL("%s %p\n", __FUNCTION__, v);
	fn_TexCoord1iv(v);
}

void WINAPI gl::hk_TexCoord1s(GLshort s)
{
	PRINT_GL("%s %d\n", __FUNCTION__, s);
	fn_TexCoord1s(s);
}

void WINAPI gl::hk_TexCoord1sv(const GLshort* v)
{
	PRINT_GL("%s %p\n", __FUNCTION__, v);
	fn_TexCoord1sv(v);
}

void WINAPI gl::hk_TexCoord2d(GLdouble s, GLdouble t)
{
	PRINT_GL("%s %f %f\n", __FUNCTION__, s, t);
	fn_TexCoord2d(s, t);
}

void WINAPI gl::hk_TexCoord2dv(const GLdouble* v)
{
	PRINT_GL("%s %p\n", __FUNCTION__, v);
	fn_TexCoord2dv(v);
}

void WINAPI gl::hk_TexCoord2f(GLfloat s, GLfloat t)
{
	PRINT_GL("%s %f %f\n", __FUNCTION__, s, t);
	fn_TexCoord2f(s, t);
}

void WINAPI gl::hk_TexCoord2fv(const GLfloat* v)
{
	PRINT_GL("%s %p\n", __FUNCTION__, v);
	fn_TexCoord2fv(v);
}

void WINAPI gl::hk_TexCoord2i(GLint s, GLint t)
{
	PRINT_GL("%s %d %d\n", __FUNCTION__, s, t);
	fn_TexCoord2i(s, t);
}

void WINAPI gl::hk_TexCoord2iv(const GLint* v)
{
	PRINT_GL("%s %p\n", __FUNCTION__, v);
	fn_TexCoord2iv(v);
}

void WINAPI gl::hk_TexCoord2s(GLshort s, GLshort t)
{
	PRINT_GL("%s %d %d\n", __FUNCTION__, s, t);
	fn_TexCoord2s(s, t);
}

void WINAPI gl::hk_TexCoord2sv(const GLshort* v)
{
	PRINT_GL("%s %p\n", __FUNCTION__, v);
	fn_TexCoord2sv(v);
}

void WINAPI gl::hk_TexCoord3d(GLdouble s, GLdouble t, GLdouble r)
{
	PRINT_GL("%s %f %f %f\n", __FUNCTION__, s, t, r);
	fn_TexCoord3d(s, t, r);
}

void WINAPI gl::hk_TexCoord3dv(const GLdouble* v)
{
	PRINT_GL("%s %p\n", __FUNCTION__, v);
	fn_TexCoord3dv(v);
}

void WINAPI gl::hk_TexCoord3f(GLfloat s, GLfloat t, GLfloat r)
{
	PRINT_GL("%s %f %f %f\n", __FUNCTION__, s, t, r);
	fn_TexCoord3f(s, t, r);
}

void WINAPI gl::hk_TexCoord3fv(const GLfloat* v)
{
	PRINT_GL("%s %p\n", __FUNCTION__, v);
	fn_TexCoord3fv(v);
}

void WINAPI gl::hk_TexCoord3i(GLint s, GLint t, GLint r)
{
	PRINT_GL("%s %d %d %d\n", __FUNCTION__, s, t, r);
	fn_TexCoord3i(s, t, r);
}

void WINAPI gl::hk_TexCoord3iv(const GLint* v)
{
	PRINT_GL("%s %p\n", __FUNCTION__, v);
	fn_TexCoord3iv(v);
}

void WINAPI gl::hk_TexCoord3s(GLshort s, GLshort t, GLshort r)
{
	PRINT_GL("%s %d %d %d\n", __FUNCTION__, s, t, r);
	fn_TexCoord3s(s, t, r);
}

void WINAPI gl::hk_TexCoord3sv(const GLshort* v)
{
	PRINT_GL("%s %p\n", __FUNCTION__, v);
	fn_TexCoord3sv(v);
}

void WINAPI gl::hk_TexCoord4d(GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{
	PRINT_GL("%s %f %f %f %f\n", __FUNCTION__, s, t, r, q);
	fn_TexCoord4d(s, t, r, q);
}

void WINAPI gl::hk_TexCoord4dv(const GLdouble* v)
{
	PRINT_GL("%s %p\n", __FUNCTION__, v);
	fn_TexCoord4dv(v);
}

void WINAPI gl::hk_TexCoord4f(GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
	PRINT_GL("%s %f %f %f %f\n", __FUNCTION__, s, t, r, q);
	fn_TexCoord4f(s, t, r, q);
}

void WINAPI gl::hk_TexCoord4fv(const GLfloat* v)
{
	PRINT_GL("%s %p\n", __FUNCTION__, v);
	fn_TexCoord4fv(v);
}

void WINAPI gl::hk_TexCoord4i(GLint s, GLint t, GLint r, GLint q)
{
	PRINT_GL("%s %d %d %d %d\n", __FUNCTION__, s, t, r, q);
	fn_TexCoord4i(s, t, r, q);
}

void WINAPI gl::hk_TexCoord4iv(const GLint* v)
{
	PRINT_GL("%s %p\n", __FUNCTION__, v);
	fn_TexCoord4iv(v);
}

void WINAPI gl::hk_TexCoord4s(GLshort s, GLshort t, GLshort r, GLshort q)
{
	PRINT_GL("%s %d %d %d %d\n", __FUNCTION__, s, t, r, q);
	fn_TexCoord4s(s, t, r, q);
}

void WINAPI gl::hk_TexCoord4sv(const GLshort* v)
{
	PRINT_GL("%s %p\n", __FUNCTION__, v);
	fn_TexCoord4sv(v);
}

void WINAPI gl::hk_TexCoordPointer(GLint size, GLenum type, GLsizei stride, const GLvoid* pointer)
{
	PRINT_GL("%s %d %u %d %p\n", __FUNCTION__, size, type, stride, pointer);
	fn_TexCoordPointer(size, type, stride, pointer);
}

void WINAPI gl::hk_TexEnvf(GLenum target, GLenum pname, GLfloat param)
{
	PRINT_GL("%s %u %u %f\n", __FUNCTION__, target, pname, param);
	fn_TexEnvf(target, pname, param);
}

void WINAPI gl::hk_TexEnvfv(GLenum target, GLenum pname, const GLfloat* params)
{
	PRINT_GL("%s %u %u %p\n", __FUNCTION__, target, pname, params);
	fn_TexEnvfv(target, pname, params);
}

void WINAPI gl::hk_TexEnvi(GLenum target, GLenum pname, GLint param)
{
	PRINT_GL("%s %u %u %d\n", __FUNCTION__, target, pname, param);
	fn_TexEnvi(target, pname, param);
}

void WINAPI gl::hk_TexEnviv(GLenum target, GLenum pname, const GLint* params)
{
	PRINT_GL("%s %u %u %p\n", __FUNCTION__, target, pname, params);
	fn_TexEnviv(target, pname, params);
}

void WINAPI gl::hk_TexGend(GLenum coord, GLenum pname, GLdouble param)
{
	PRINT_GL("%s %u %u %f\n", __FUNCTION__, coord, pname, param);
	fn_TexGend(coord, pname, param);
}

void WINAPI gl::hk_TexGendv(GLenum coord, GLenum pname, const GLdouble* params)
{
	PRINT_GL("%s %u %u %p\n", __FUNCTION__, coord, pname, params);
	fn_TexGendv(coord, pname, params);
}

void WINAPI gl::hk_TexGenf(GLenum coord, GLenum pname, GLfloat param)
{
	PRINT_GL("%s %u %u %f\n", __FUNCTION__, coord, pname, param);
	fn_TexGenf(coord, pname, param);
}

void WINAPI gl::hk_TexGenfv(GLenum coord, GLenum pname, const GLfloat* params)
{
	PRINT_GL("%s %u %u %p\n", __FUNCTION__, coord, pname, params);
	fn_TexGenfv(coord, pname, params);
}

void WINAPI gl::hk_TexGeni(GLenum coord, GLenum pname, GLint param)
{
	PRINT_GL("%s %u %u %d\n", __FUNCTION__, coord, pname, param);
	fn_TexGeni(coord, pname, param);
}

void WINAPI gl::hk_TexGeniv(GLenum coord, GLenum pname, const GLint* params)
{
	PRINT_GL("%s %u %u %p\n", __FUNCTION__, coord, pname, params);
	fn_TexGeniv(coord, pname, params);
}

void WINAPI gl::hk_TexImage1D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid* pixels)
{
	PRINT_GL("%s %u %d %d %d %d %u %u %p\n", __FUNCTION__, target, level, internalformat, width, border, format, type, pixels);
	fn_TexImage1D(target, level, internalformat, width, border, format, type, pixels);
}

void WINAPI gl::hk_TexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid* pixels)
{
	PRINT_GL("%s %u %d %d %d %d %d %u %u %p\n", __FUNCTION__, target, level, internalformat, width, height, border, format, type, pixels);
	fn_TexImage2D(target, level, internalformat, width, height, border, format, type, pixels);
}

void WINAPI gl::hk_TexParameterf(GLenum target, GLenum pname, GLfloat param)
{
	PRINT_GL("%s %u %u %f\n", __FUNCTION__, target, pname, param);
	fn_TexParameterf(target, pname, param);
}

void WINAPI gl::hk_TexParameterfv(GLenum target, GLenum pname, const GLfloat* params)
{
	PRINT_GL("%s %u %u %p\n", __FUNCTION__, target, pname, params);
	fn_TexParameterfv(target, pname, params);
}

void WINAPI gl::hk_TexParameteri(GLenum target, GLenum pname, GLint param)
{
	PRINT_GL("%s %u %u %d\n", __FUNCTION__, target, pname, param);
	fn_TexParameteri(target, pname, param);
}

void WINAPI gl::hk_TexParameteriv(GLenum target, GLenum pname, const GLint* params)
{
	PRINT_GL("%s %u %u %p\n", __FUNCTION__, target, pname, params);
	fn_TexParameteriv(target, pname, params);
}

void WINAPI gl::hk_TexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid* pixels)
{
	PRINT_GL("%s %u %d %d %d %u %u %p\n", __FUNCTION__, target, level, xoffset, width, format, type, pixels);
	fn_TexSubImage1D(target, level, xoffset, width, format, type, pixels);
}

void WINAPI gl::hk_TexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid* pixels)
{
	PRINT_GL("%s %u %d %d %d %d %d %u %u %p\n", __FUNCTION__, target, level, xoffset, yoffset, width, height, format, type, pixels);
	fn_TexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels);
}

void WINAPI gl::hk_Translated(GLdouble x, GLdouble y, GLdouble z)
{
	PRINT_GL("%s %f %f %f\n", __FUNCTION__, x, y, z);
	fn_Translated(x, y, z);
}

void WINAPI gl::hk_Translatef(GLfloat x, GLfloat y, GLfloat z)
{
	PRINT_GL("%s %f %f %f\n", __FUNCTION__, x, y, z);
	fn_Translatef(x, y, z);
}

void WINAPI gl::hk_Vertex2d(GLdouble x, GLdouble y)
{
	PRINT_GL("%s %f %f\n", __FUNCTION__, x, y);
	fn_Vertex2d(x, y);
}

void WINAPI gl::hk_Vertex2dv(const GLdouble* v)
{
	PRINT_GL("%s %p\n", __FUNCTION__, v);
	fn_Vertex2dv(v);
}

void WINAPI gl::hk_Vertex2f(GLfloat x, GLfloat y)
{
	PRINT_GL("%s %f %f\n", __FUNCTION__, x, y);
	fn_Vertex2f(x, y);
}

void WINAPI gl::hk_Vertex2fv(const GLfloat* v)
{
	PRINT_GL("%s %p\n", __FUNCTION__, v);
	fn_Vertex2fv(v);
}

void WINAPI gl::hk_Vertex2i(GLint x, GLint y)
{
	PRINT_GL("%s %d %d\n", __FUNCTION__, x, y);
	fn_Vertex2i(x, y);
}

void WINAPI gl::hk_Vertex2iv(const GLint* v)
{
	PRINT_GL("%s %p\n", __FUNCTION__, v);
	fn_Vertex2iv(v);
}

void WINAPI gl::hk_Vertex2s(GLshort x, GLshort y)
{
	PRINT_GL("%s %d %d\n", __FUNCTION__, x, y);
	fn_Vertex2s(x, y);
}

void WINAPI gl::hk_Vertex2sv(const GLshort* v)
{
	PRINT_GL("%s %p\n", __FUNCTION__, v);
	fn_Vertex2sv(v);
}

void WINAPI gl::hk_Vertex3d(GLdouble x, GLdouble y, GLdouble z)
{
	PRINT_GL("%s %f %f %f\n", __FUNCTION__, x, y, z);
	fn_Vertex3d(x, y, z);
}

void WINAPI gl::hk_Vertex3dv(const GLdouble* v)
{
	PRINT_GL("%s %p\n", __FUNCTION__, v);
	fn_Vertex3dv(v);
}

void WINAPI gl::hk_Vertex3f(GLfloat x, GLfloat y, GLfloat z)
{
	PRINT_GL("%s %f %f %f\n", __FUNCTION__, x, y, z);
	fn_Vertex3f(x, y, z);
}

void WINAPI gl::hk_Vertex3fv(const GLfloat* v)
{
	PRINT_GL("%s %p\n", __FUNCTION__, v);
	fn_Vertex3fv(v);
}

void WINAPI gl::hk_Vertex3i(GLint x, GLint y, GLint z)
{
	PRINT_GL("%s %d %d %d\n", __FUNCTION__, x, y, z);
	fn_Vertex3i(x, y, z);
}

void WINAPI gl::hk_Vertex3iv(const GLint* v)
{
	PRINT_GL("%s %p\n", __FUNCTION__, v);
	fn_Vertex3iv(v);
}

void WINAPI gl::hk_Vertex3s(GLshort x, GLshort y, GLshort z)
{
	PRINT_GL("%s %d %d %d\n", __FUNCTION__, x, y, z);
	fn_Vertex3s(x, y, z);
}

void WINAPI gl::hk_Vertex3sv(const GLshort* v)
{
	PRINT_GL("%s %p\n", __FUNCTION__, v);
	fn_Vertex3sv(v);
}

void WINAPI gl::hk_Vertex4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	PRINT_GL("%s %f %f %f %f\n", __FUNCTION__, x, y, z, w);
	fn_Vertex4d(x, y, z, w);
}

void WINAPI gl::hk_Vertex4dv(const GLdouble* v)
{
	PRINT_GL("%s %p\n", __FUNCTION__, v);
	fn_Vertex4dv(v);
}

void WINAPI gl::hk_Vertex4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	PRINT_GL("%s %f %f %f %f\n", __FUNCTION__, x, y, z, w);
	fn_Vertex4f(x, y, z, w);
}

void WINAPI gl::hk_Vertex4fv(const GLfloat* v)
{
	PRINT_GL("%s %p\n", __FUNCTION__, v);
	fn_Vertex4fv(v);
}

void WINAPI gl::hk_Vertex4i(GLint x, GLint y, GLint z, GLint w)
{
	PRINT_GL("%s %d %d %d %d\n", __FUNCTION__, x, y, z, w);
	fn_Vertex4i(x, y, z, w);
}

void WINAPI gl::hk_Vertex4iv(const GLint* v)
{
	PRINT_GL("%s %p\n", __FUNCTION__, v);
	fn_Vertex4iv(v);
}

void WINAPI gl::hk_Vertex4s(GLshort x, GLshort y, GLshort z, GLshort w)
{
	PRINT_GL("%s %d %d %d %d\n", __FUNCTION__, x, y, z, w);
	fn_Vertex4s(x, y, z, w);
}

void WINAPI gl::hk_Vertex4sv(const GLshort* v)
{
	PRINT_GL("%s %p\n", __FUNCTION__, v);
	fn_Vertex4sv(v);
}

void WINAPI gl::hk_VertexPointer(GLint size, GLenum type, GLsizei stride, const GLvoid* pointer)
{
	PRINT_GL("%s %d %u %d %p\n", __FUNCTION__, size, type, stride, pointer);
	fn_VertexPointer(size, type, stride, pointer);
}

void WINAPI gl::hk_Viewport(GLint x, GLint y, GLsizei width, GLsizei height)
{
	PRINT_GL("%s %d %d %d %d\n", __FUNCTION__, x, y, width, height);
	fn_Viewport(x, y, width, height);
}