#include "loader/gl.h"

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
	if (!(fn_Accum = (decltype(fn_Accum))GetProcAddress(hModule, "glAccum"))) return false;
	if (!(fn_AlphaFunc = (decltype(fn_AlphaFunc))GetProcAddress(hModule, "glAlphaFunc"))) return false;
	if (!(fn_AreTexturesResident = (decltype(fn_AreTexturesResident))GetProcAddress(hModule, "glAreTexturesResident"))) return false;
	if (!(fn_ArrayElement = (decltype(fn_ArrayElement))GetProcAddress(hModule, "glArrayElement"))) return false;
	if (!(fn_Begin = (decltype(fn_Begin))GetProcAddress(hModule, "glBegin"))) return false;
	if (!(fn_BindTexture = (decltype(fn_BindTexture))GetProcAddress(hModule, "glBindTexture"))) return false;
	if (!(fn_Bitmap = (decltype(fn_Bitmap))GetProcAddress(hModule, "glBitmap"))) return false;
	if (!(fn_BlendFunc = (decltype(fn_BlendFunc))GetProcAddress(hModule, "glBlendFunc"))) return false;
	if (!(fn_CallList = (decltype(fn_CallList))GetProcAddress(hModule, "glCallList"))) return false;
	if (!(fn_CallLists = (decltype(fn_CallLists))GetProcAddress(hModule, "glCallLists"))) return false;
	if (!(fn_Clear = (decltype(fn_Clear))GetProcAddress(hModule, "glClear"))) return false;
	if (!(fn_ClearAccum = (decltype(fn_ClearAccum))GetProcAddress(hModule, "glClearAccum"))) return false;
	if (!(fn_ClearColor = (decltype(fn_ClearColor))GetProcAddress(hModule, "glClearColor"))) return false;
	if (!(fn_ClearDepth = (decltype(fn_ClearDepth))GetProcAddress(hModule, "glClearDepth"))) return false;
	if (!(fn_ClearIndex = (decltype(fn_ClearIndex))GetProcAddress(hModule, "glClearIndex"))) return false;
	if (!(fn_ClearStencil = (decltype(fn_ClearStencil))GetProcAddress(hModule, "glClearStencil"))) return false;
	if (!(fn_ClipPlane = (decltype(fn_ClipPlane))GetProcAddress(hModule, "glClipPlane"))) return false;
	if (!(fn_Color3b = (decltype(fn_Color3b))GetProcAddress(hModule, "glColor3b"))) return false;
	if (!(fn_Color3bv = (decltype(fn_Color3bv))GetProcAddress(hModule, "glColor3bv"))) return false;
	if (!(fn_Color3d = (decltype(fn_Color3d))GetProcAddress(hModule, "glColor3d"))) return false;
	if (!(fn_Color3dv = (decltype(fn_Color3dv))GetProcAddress(hModule, "glColor3dv"))) return false;
	if (!(fn_Color3f = (decltype(fn_Color3f))GetProcAddress(hModule, "glColor3f"))) return false;
	if (!(fn_Color3fv = (decltype(fn_Color3fv))GetProcAddress(hModule, "glColor3fv"))) return false;
	if (!(fn_Color3i = (decltype(fn_Color3i))GetProcAddress(hModule, "glColor3i"))) return false;
	if (!(fn_Color3iv = (decltype(fn_Color3iv))GetProcAddress(hModule, "glColor3iv"))) return false;
	if (!(fn_Color3s = (decltype(fn_Color3s))GetProcAddress(hModule, "glColor3s"))) return false;
	if (!(fn_Color3sv = (decltype(fn_Color3sv))GetProcAddress(hModule, "glColor3sv"))) return false;
	if (!(fn_Color3ub = (decltype(fn_Color3ub))GetProcAddress(hModule, "glColor3ub"))) return false;
	if (!(fn_Color3ubv = (decltype(fn_Color3ubv))GetProcAddress(hModule, "glColor3ubv"))) return false;
	if (!(fn_Color3ui = (decltype(fn_Color3ui))GetProcAddress(hModule, "glColor3ui"))) return false;
	if (!(fn_Color3uiv = (decltype(fn_Color3uiv))GetProcAddress(hModule, "glColor3uiv"))) return false;
	if (!(fn_Color3us = (decltype(fn_Color3us))GetProcAddress(hModule, "glColor3us"))) return false;
	if (!(fn_Color3usv = (decltype(fn_Color3usv))GetProcAddress(hModule, "glColor3usv"))) return false;
	if (!(fn_Color4b = (decltype(fn_Color4b))GetProcAddress(hModule, "glColor4b"))) return false;
	if (!(fn_Color4bv = (decltype(fn_Color4bv))GetProcAddress(hModule, "glColor4bv"))) return false;
	if (!(fn_Color4d = (decltype(fn_Color4d))GetProcAddress(hModule, "glColor4d"))) return false;
	if (!(fn_Color4dv = (decltype(fn_Color4dv))GetProcAddress(hModule, "glColor4dv"))) return false;
	if (!(fn_Color4f = (decltype(fn_Color4f))GetProcAddress(hModule, "glColor4f"))) return false;
	if (!(fn_Color4fv = (decltype(fn_Color4fv))GetProcAddress(hModule, "glColor4fv"))) return false;
	if (!(fn_Color4i = (decltype(fn_Color4i))GetProcAddress(hModule, "glColor4i"))) return false;
	if (!(fn_Color4iv = (decltype(fn_Color4iv))GetProcAddress(hModule, "glColor4iv"))) return false;
	if (!(fn_Color4s = (decltype(fn_Color4s))GetProcAddress(hModule, "glColor4s"))) return false;
	if (!(fn_Color4sv = (decltype(fn_Color4sv))GetProcAddress(hModule, "glColor4sv"))) return false;
	if (!(fn_Color4ub = (decltype(fn_Color4ub))GetProcAddress(hModule, "glColor4ub"))) return false;
	if (!(fn_Color4ubv = (decltype(fn_Color4ubv))GetProcAddress(hModule, "glColor4ubv"))) return false;
	if (!(fn_Color4ui = (decltype(fn_Color4ui))GetProcAddress(hModule, "glColor4ui"))) return false;
	if (!(fn_Color4uiv = (decltype(fn_Color4uiv))GetProcAddress(hModule, "glColor4uiv"))) return false;
	if (!(fn_Color4us = (decltype(fn_Color4us))GetProcAddress(hModule, "glColor4us"))) return false;
	if (!(fn_Color4usv = (decltype(fn_Color4usv))GetProcAddress(hModule, "glColor4usv"))) return false;
	if (!(fn_ColorMask = (decltype(fn_ColorMask))GetProcAddress(hModule, "glColorMask"))) return false;
	if (!(fn_ColorMaterial = (decltype(fn_ColorMaterial))GetProcAddress(hModule, "glColorMaterial"))) return false;
	if (!(fn_ColorPointer = (decltype(fn_ColorPointer))GetProcAddress(hModule, "glColorPointer"))) return false;
	if (!(fn_CopyPixels = (decltype(fn_CopyPixels))GetProcAddress(hModule, "glCopyPixels"))) return false;
	if (!(fn_CopyTexImage1D = (decltype(fn_CopyTexImage1D))GetProcAddress(hModule, "glCopyTexImage1D"))) return false;
	if (!(fn_CopyTexImage2D = (decltype(fn_CopyTexImage2D))GetProcAddress(hModule, "glCopyTexImage2D"))) return false;
	if (!(fn_CopyTexSubImage1D = (decltype(fn_CopyTexSubImage1D))GetProcAddress(hModule, "glCopyTexSubImage1D"))) return false;
	if (!(fn_CopyTexSubImage2D = (decltype(fn_CopyTexSubImage2D))GetProcAddress(hModule, "glCopyTexSubImage2D"))) return false;
	if (!(fn_CullFace = (decltype(fn_CullFace))GetProcAddress(hModule, "glCullFace"))) return false;
	if (!(fn_DebugEntry = (decltype(fn_DebugEntry))GetProcAddress(hModule, "glDebugEntry"))) return false;
	if (!(fn_DeleteLists = (decltype(fn_DeleteLists))GetProcAddress(hModule, "glDeleteLists"))) return false;
	if (!(fn_DeleteTextures = (decltype(fn_DeleteTextures))GetProcAddress(hModule, "glDeleteTextures"))) return false;
	if (!(fn_DepthFunc = (decltype(fn_DepthFunc))GetProcAddress(hModule, "glDepthFunc"))) return false;
	if (!(fn_DepthMask = (decltype(fn_DepthMask))GetProcAddress(hModule, "glDepthMask"))) return false;
	if (!(fn_DepthRange = (decltype(fn_DepthRange))GetProcAddress(hModule, "glDepthRange"))) return false;
	if (!(fn_Disable = (decltype(fn_Disable))GetProcAddress(hModule, "glDisable"))) return false;
	if (!(fn_DisableClientState = (decltype(fn_DisableClientState))GetProcAddress(hModule, "glDisableClientState"))) return false;
	if (!(fn_DrawArrays = (decltype(fn_DrawArrays))GetProcAddress(hModule, "glDrawArrays"))) return false;
	if (!(fn_DrawBuffer = (decltype(fn_DrawBuffer))GetProcAddress(hModule, "glDrawBuffer"))) return false;
	if (!(fn_DrawElements = (decltype(fn_DrawElements))GetProcAddress(hModule, "glDrawElements"))) return false;
	if (!(fn_DrawPixels = (decltype(fn_DrawPixels))GetProcAddress(hModule, "glDrawPixels"))) return false;
	if (!(fn_EdgeFlag = (decltype(fn_EdgeFlag))GetProcAddress(hModule, "glEdgeFlag"))) return false;
	if (!(fn_EdgeFlagPointer = (decltype(fn_EdgeFlagPointer))GetProcAddress(hModule, "glEdgeFlagPointer"))) return false;
	if (!(fn_EdgeFlagv = (decltype(fn_EdgeFlagv))GetProcAddress(hModule, "glEdgeFlagv"))) return false;
	if (!(fn_Enable = (decltype(fn_Enable))GetProcAddress(hModule, "glEnable"))) return false;
	if (!(fn_EnableClientState = (decltype(fn_EnableClientState))GetProcAddress(hModule, "glEnableClientState"))) return false;
	if (!(fn_End = (decltype(fn_End))GetProcAddress(hModule, "glEnd"))) return false;
	if (!(fn_EndList = (decltype(fn_EndList))GetProcAddress(hModule, "glEndList"))) return false;
	if (!(fn_EvalCoord1d = (decltype(fn_EvalCoord1d))GetProcAddress(hModule, "glEvalCoord1d"))) return false;
	if (!(fn_EvalCoord1dv = (decltype(fn_EvalCoord1dv))GetProcAddress(hModule, "glEvalCoord1dv"))) return false;
	if (!(fn_EvalCoord1f = (decltype(fn_EvalCoord1f))GetProcAddress(hModule, "glEvalCoord1f"))) return false;
	if (!(fn_EvalCoord1fv = (decltype(fn_EvalCoord1fv))GetProcAddress(hModule, "glEvalCoord1fv"))) return false;
	if (!(fn_EvalCoord2d = (decltype(fn_EvalCoord2d))GetProcAddress(hModule, "glEvalCoord2d"))) return false;
	if (!(fn_EvalCoord2dv = (decltype(fn_EvalCoord2dv))GetProcAddress(hModule, "glEvalCoord2dv"))) return false;
	if (!(fn_EvalCoord2f = (decltype(fn_EvalCoord2f))GetProcAddress(hModule, "glEvalCoord2f"))) return false;
	if (!(fn_EvalCoord2fv = (decltype(fn_EvalCoord2fv))GetProcAddress(hModule, "glEvalCoord2fv"))) return false;
	if (!(fn_EvalMesh1 = (decltype(fn_EvalMesh1))GetProcAddress(hModule, "glEvalMesh1"))) return false;
	if (!(fn_EvalMesh2 = (decltype(fn_EvalMesh2))GetProcAddress(hModule, "glEvalMesh2"))) return false;
	if (!(fn_EvalPoint1 = (decltype(fn_EvalPoint1))GetProcAddress(hModule, "glEvalPoint1"))) return false;
	if (!(fn_EvalPoint2 = (decltype(fn_EvalPoint2))GetProcAddress(hModule, "glEvalPoint2"))) return false;
	if (!(fn_FeedbackBuffer = (decltype(fn_FeedbackBuffer))GetProcAddress(hModule, "glFeedbackBuffer"))) return false;
	if (!(fn_Finish = (decltype(fn_Finish))GetProcAddress(hModule, "glFinish"))) return false;
	if (!(fn_Flush = (decltype(fn_Flush))GetProcAddress(hModule, "glFlush"))) return false;
	if (!(fn_Fogf = (decltype(fn_Fogf))GetProcAddress(hModule, "glFogf"))) return false;
	if (!(fn_Fogfv = (decltype(fn_Fogfv))GetProcAddress(hModule, "glFogfv"))) return false;
	if (!(fn_Fogi = (decltype(fn_Fogi))GetProcAddress(hModule, "glFogi"))) return false;
	if (!(fn_Fogiv = (decltype(fn_Fogiv))GetProcAddress(hModule, "glFogiv"))) return false;
	if (!(fn_FrontFace = (decltype(fn_FrontFace))GetProcAddress(hModule, "glFrontFace"))) return false;
	if (!(fn_Frustum = (decltype(fn_Frustum))GetProcAddress(hModule, "glFrustum"))) return false;
	if (!(fn_GenLists = (decltype(fn_GenLists))GetProcAddress(hModule, "glGenLists"))) return false;
	if (!(fn_GenTextures = (decltype(fn_GenTextures))GetProcAddress(hModule, "glGenTextures"))) return false;
	if (!(fn_GetBooleanv = (decltype(fn_GetBooleanv))GetProcAddress(hModule, "glGetBooleanv"))) return false;
	if (!(fn_GetClipPlane = (decltype(fn_GetClipPlane))GetProcAddress(hModule, "glGetClipPlane"))) return false;
	if (!(fn_GetDoublev = (decltype(fn_GetDoublev))GetProcAddress(hModule, "glGetDoublev"))) return false;
	if (!(fn_GetError = (decltype(fn_GetError))GetProcAddress(hModule, "glGetError"))) return false;
	if (!(fn_GetFloatv = (decltype(fn_GetFloatv))GetProcAddress(hModule, "glGetFloatv"))) return false;
	if (!(fn_GetIntegerv = (decltype(fn_GetIntegerv))GetProcAddress(hModule, "glGetIntegerv"))) return false;
	if (!(fn_GetLightfv = (decltype(fn_GetLightfv))GetProcAddress(hModule, "glGetLightfv"))) return false;
	if (!(fn_GetLightiv = (decltype(fn_GetLightiv))GetProcAddress(hModule, "glGetLightiv"))) return false;
	if (!(fn_GetMapdv = (decltype(fn_GetMapdv))GetProcAddress(hModule, "glGetMapdv"))) return false;
	if (!(fn_GetMapfv = (decltype(fn_GetMapfv))GetProcAddress(hModule, "glGetMapfv"))) return false;
	if (!(fn_GetMapiv = (decltype(fn_GetMapiv))GetProcAddress(hModule, "glGetMapiv"))) return false;
	if (!(fn_GetMaterialfv = (decltype(fn_GetMaterialfv))GetProcAddress(hModule, "glGetMaterialfv"))) return false;
	if (!(fn_GetMaterialiv = (decltype(fn_GetMaterialiv))GetProcAddress(hModule, "glGetMaterialiv"))) return false;
	if (!(fn_GetPixelMapfv = (decltype(fn_GetPixelMapfv))GetProcAddress(hModule, "glGetPixelMapfv"))) return false;
	if (!(fn_GetPixelMapuiv = (decltype(fn_GetPixelMapuiv))GetProcAddress(hModule, "glGetPixelMapuiv"))) return false;
	if (!(fn_GetPixelMapusv = (decltype(fn_GetPixelMapusv))GetProcAddress(hModule, "glGetPixelMapusv"))) return false;
	if (!(fn_GetPointerv = (decltype(fn_GetPointerv))GetProcAddress(hModule, "glGetPointerv"))) return false;
	if (!(fn_GetPolygonStipple = (decltype(fn_GetPolygonStipple))GetProcAddress(hModule, "glGetPolygonStipple"))) return false;
	if (!(fn_GetString = (decltype(fn_GetString))GetProcAddress(hModule, "glGetString"))) return false;
	if (!(fn_GetTexEnvfv = (decltype(fn_GetTexEnvfv))GetProcAddress(hModule, "glGetTexEnvfv"))) return false;
	if (!(fn_GetTexEnviv = (decltype(fn_GetTexEnviv))GetProcAddress(hModule, "glGetTexEnviv"))) return false;
	if (!(fn_GetTexGendv = (decltype(fn_GetTexGendv))GetProcAddress(hModule, "glGetTexGendv"))) return false;
	if (!(fn_GetTexGenfv = (decltype(fn_GetTexGenfv))GetProcAddress(hModule, "glGetTexGenfv"))) return false;
	if (!(fn_GetTexGeniv = (decltype(fn_GetTexGeniv))GetProcAddress(hModule, "glGetTexGeniv"))) return false;
	if (!(fn_GetTexImage = (decltype(fn_GetTexImage))GetProcAddress(hModule, "glGetTexImage"))) return false;
	if (!(fn_GetTexLevelParameterfv = (decltype(fn_GetTexLevelParameterfv))GetProcAddress(hModule, "glGetTexLevelParameterfv"))) return false;
	if (!(fn_GetTexLevelParameteriv = (decltype(fn_GetTexLevelParameteriv))GetProcAddress(hModule, "glGetTexLevelParameteriv"))) return false;
	if (!(fn_GetTexParameterfv = (decltype(fn_GetTexParameterfv))GetProcAddress(hModule, "glGetTexParameterfv"))) return false;
	if (!(fn_GetTexParameteriv = (decltype(fn_GetTexParameteriv))GetProcAddress(hModule, "glGetTexParameteriv"))) return false;
	if (!(fn_Hint = (decltype(fn_Hint))GetProcAddress(hModule, "glHint"))) return false;
	if (!(fn_IndexMask = (decltype(fn_IndexMask))GetProcAddress(hModule, "glIndexMask"))) return false;
	if (!(fn_IndexPointer = (decltype(fn_IndexPointer))GetProcAddress(hModule, "glIndexPointer"))) return false;
	if (!(fn_Indexd = (decltype(fn_Indexd))GetProcAddress(hModule, "glIndexd"))) return false;
	if (!(fn_Indexdv = (decltype(fn_Indexdv))GetProcAddress(hModule, "glIndexdv"))) return false;
	if (!(fn_Indexf = (decltype(fn_Indexf))GetProcAddress(hModule, "glIndexf"))) return false;
	if (!(fn_Indexfv = (decltype(fn_Indexfv))GetProcAddress(hModule, "glIndexfv"))) return false;
	if (!(fn_Indexi = (decltype(fn_Indexi))GetProcAddress(hModule, "glIndexi"))) return false;
	if (!(fn_Indexiv = (decltype(fn_Indexiv))GetProcAddress(hModule, "glIndexiv"))) return false;
	if (!(fn_Indexs = (decltype(fn_Indexs))GetProcAddress(hModule, "glIndexs"))) return false;
	if (!(fn_Indexsv = (decltype(fn_Indexsv))GetProcAddress(hModule, "glIndexsv"))) return false;
	if (!(fn_Indexub = (decltype(fn_Indexub))GetProcAddress(hModule, "glIndexub"))) return false;
	if (!(fn_Indexubv = (decltype(fn_Indexubv))GetProcAddress(hModule, "glIndexubv"))) return false;
	if (!(fn_InitNames = (decltype(fn_InitNames))GetProcAddress(hModule, "glInitNames"))) return false;
	if (!(fn_InterleavedArrays = (decltype(fn_InterleavedArrays))GetProcAddress(hModule, "glInterleavedArrays"))) return false;
	if (!(fn_IsEnabled = (decltype(fn_IsEnabled))GetProcAddress(hModule, "glIsEnabled"))) return false;
	if (!(fn_IsList = (decltype(fn_IsList))GetProcAddress(hModule, "glIsList"))) return false;
	if (!(fn_IsTexture = (decltype(fn_IsTexture))GetProcAddress(hModule, "glIsTexture"))) return false;
	if (!(fn_LightModelf = (decltype(fn_LightModelf))GetProcAddress(hModule, "glLightModelf"))) return false;
	if (!(fn_LightModelfv = (decltype(fn_LightModelfv))GetProcAddress(hModule, "glLightModelfv"))) return false;
	if (!(fn_LightModeli = (decltype(fn_LightModeli))GetProcAddress(hModule, "glLightModeli"))) return false;
	if (!(fn_LightModeliv = (decltype(fn_LightModeliv))GetProcAddress(hModule, "glLightModeliv"))) return false;
	if (!(fn_Lightf = (decltype(fn_Lightf))GetProcAddress(hModule, "glLightf"))) return false;
	if (!(fn_Lightfv = (decltype(fn_Lightfv))GetProcAddress(hModule, "glLightfv"))) return false;
	if (!(fn_Lighti = (decltype(fn_Lighti))GetProcAddress(hModule, "glLighti"))) return false;
	if (!(fn_Lightiv = (decltype(fn_Lightiv))GetProcAddress(hModule, "glLightiv"))) return false;
	if (!(fn_LineStipple = (decltype(fn_LineStipple))GetProcAddress(hModule, "glLineStipple"))) return false;
	if (!(fn_LineWidth = (decltype(fn_LineWidth))GetProcAddress(hModule, "glLineWidth"))) return false;
	if (!(fn_ListBase = (decltype(fn_ListBase))GetProcAddress(hModule, "glListBase"))) return false;
	if (!(fn_LoadIdentity = (decltype(fn_LoadIdentity))GetProcAddress(hModule, "glLoadIdentity"))) return false;
	if (!(fn_LoadMatrixd = (decltype(fn_LoadMatrixd))GetProcAddress(hModule, "glLoadMatrixd"))) return false;
	if (!(fn_LoadMatrixf = (decltype(fn_LoadMatrixf))GetProcAddress(hModule, "glLoadMatrixf"))) return false;
	if (!(fn_LoadName = (decltype(fn_LoadName))GetProcAddress(hModule, "glLoadName"))) return false;
	if (!(fn_LogicOp = (decltype(fn_LogicOp))GetProcAddress(hModule, "glLogicOp"))) return false;
	if (!(fn_Map1d = (decltype(fn_Map1d))GetProcAddress(hModule, "glMap1d"))) return false;
	if (!(fn_Map1f = (decltype(fn_Map1f))GetProcAddress(hModule, "glMap1f"))) return false;
	if (!(fn_Map2d = (decltype(fn_Map2d))GetProcAddress(hModule, "glMap2d"))) return false;
	if (!(fn_Map2f = (decltype(fn_Map2f))GetProcAddress(hModule, "glMap2f"))) return false;
	if (!(fn_MapGrid1d = (decltype(fn_MapGrid1d))GetProcAddress(hModule, "glMapGrid1d"))) return false;
	if (!(fn_MapGrid1f = (decltype(fn_MapGrid1f))GetProcAddress(hModule, "glMapGrid1f"))) return false;
	if (!(fn_MapGrid2d = (decltype(fn_MapGrid2d))GetProcAddress(hModule, "glMapGrid2d"))) return false;
	if (!(fn_MapGrid2f = (decltype(fn_MapGrid2f))GetProcAddress(hModule, "glMapGrid2f"))) return false;
	if (!(fn_Materialf = (decltype(fn_Materialf))GetProcAddress(hModule, "glMaterialf"))) return false;
	if (!(fn_Materialfv = (decltype(fn_Materialfv))GetProcAddress(hModule, "glMaterialfv"))) return false;
	if (!(fn_Materiali = (decltype(fn_Materiali))GetProcAddress(hModule, "glMateriali"))) return false;
	if (!(fn_Materialiv = (decltype(fn_Materialiv))GetProcAddress(hModule, "glMaterialiv"))) return false;
	if (!(fn_MatrixMode = (decltype(fn_MatrixMode))GetProcAddress(hModule, "glMatrixMode"))) return false;
	if (!(fn_MultMatrixd = (decltype(fn_MultMatrixd))GetProcAddress(hModule, "glMultMatrixd"))) return false;
	if (!(fn_MultMatrixf = (decltype(fn_MultMatrixf))GetProcAddress(hModule, "glMultMatrixf"))) return false;
	if (!(fn_NewList = (decltype(fn_NewList))GetProcAddress(hModule, "glNewList"))) return false;
	if (!(fn_Normal3b = (decltype(fn_Normal3b))GetProcAddress(hModule, "glNormal3b"))) return false;
	if (!(fn_Normal3bv = (decltype(fn_Normal3bv))GetProcAddress(hModule, "glNormal3bv"))) return false;
	if (!(fn_Normal3d = (decltype(fn_Normal3d))GetProcAddress(hModule, "glNormal3d"))) return false;
	if (!(fn_Normal3dv = (decltype(fn_Normal3dv))GetProcAddress(hModule, "glNormal3dv"))) return false;
	if (!(fn_Normal3f = (decltype(fn_Normal3f))GetProcAddress(hModule, "glNormal3f"))) return false;
	if (!(fn_Normal3fv = (decltype(fn_Normal3fv))GetProcAddress(hModule, "glNormal3fv"))) return false;
	if (!(fn_Normal3i = (decltype(fn_Normal3i))GetProcAddress(hModule, "glNormal3i"))) return false;
	if (!(fn_Normal3iv = (decltype(fn_Normal3iv))GetProcAddress(hModule, "glNormal3iv"))) return false;
	if (!(fn_Normal3s = (decltype(fn_Normal3s))GetProcAddress(hModule, "glNormal3s"))) return false;
	if (!(fn_Normal3sv = (decltype(fn_Normal3sv))GetProcAddress(hModule, "glNormal3sv"))) return false;
	if (!(fn_NormalPointer = (decltype(fn_NormalPointer))GetProcAddress(hModule, "glNormalPointer"))) return false;
	if (!(fn_Ortho = (decltype(fn_Ortho))GetProcAddress(hModule, "glOrtho"))) return false;
	if (!(fn_PassThrough = (decltype(fn_PassThrough))GetProcAddress(hModule, "glPassThrough"))) return false;
	if (!(fn_PixelMapfv = (decltype(fn_PixelMapfv))GetProcAddress(hModule, "glPixelMapfv"))) return false;
	if (!(fn_PixelMapuiv = (decltype(fn_PixelMapuiv))GetProcAddress(hModule, "glPixelMapuiv"))) return false;
	if (!(fn_PixelMapusv = (decltype(fn_PixelMapusv))GetProcAddress(hModule, "glPixelMapusv"))) return false;
	if (!(fn_PixelStoref = (decltype(fn_PixelStoref))GetProcAddress(hModule, "glPixelStoref"))) return false;
	if (!(fn_PixelStorei = (decltype(fn_PixelStorei))GetProcAddress(hModule, "glPixelStorei"))) return false;
	if (!(fn_PixelTransferf = (decltype(fn_PixelTransferf))GetProcAddress(hModule, "glPixelTransferf"))) return false;
	if (!(fn_PixelTransferi = (decltype(fn_PixelTransferi))GetProcAddress(hModule, "glPixelTransferi"))) return false;
	if (!(fn_PixelZoom = (decltype(fn_PixelZoom))GetProcAddress(hModule, "glPixelZoom"))) return false;
	if (!(fn_PointSize = (decltype(fn_PointSize))GetProcAddress(hModule, "glPointSize"))) return false;
	if (!(fn_PolygonMode = (decltype(fn_PolygonMode))GetProcAddress(hModule, "glPolygonMode"))) return false;
	if (!(fn_PolygonOffset = (decltype(fn_PolygonOffset))GetProcAddress(hModule, "glPolygonOffset"))) return false;
	if (!(fn_PolygonStipple = (decltype(fn_PolygonStipple))GetProcAddress(hModule, "glPolygonStipple"))) return false;
	if (!(fn_PopAttrib = (decltype(fn_PopAttrib))GetProcAddress(hModule, "glPopAttrib"))) return false;
	if (!(fn_PopClientAttrib = (decltype(fn_PopClientAttrib))GetProcAddress(hModule, "glPopClientAttrib"))) return false;
	if (!(fn_PopMatrix = (decltype(fn_PopMatrix))GetProcAddress(hModule, "glPopMatrix"))) return false;
	if (!(fn_PopName = (decltype(fn_PopName))GetProcAddress(hModule, "glPopName"))) return false;
	if (!(fn_PrioritizeTextures = (decltype(fn_PrioritizeTextures))GetProcAddress(hModule, "glPrioritizeTextures"))) return false;
	if (!(fn_PushAttrib = (decltype(fn_PushAttrib))GetProcAddress(hModule, "glPushAttrib"))) return false;
	if (!(fn_PushClientAttrib = (decltype(fn_PushClientAttrib))GetProcAddress(hModule, "glPushClientAttrib"))) return false;
	if (!(fn_PushMatrix = (decltype(fn_PushMatrix))GetProcAddress(hModule, "glPushMatrix"))) return false;
	if (!(fn_PushName = (decltype(fn_PushName))GetProcAddress(hModule, "glPushName"))) return false;
	if (!(fn_RasterPos2d = (decltype(fn_RasterPos2d))GetProcAddress(hModule, "glRasterPos2d"))) return false;
	if (!(fn_RasterPos2dv = (decltype(fn_RasterPos2dv))GetProcAddress(hModule, "glRasterPos2dv"))) return false;
	if (!(fn_RasterPos2f = (decltype(fn_RasterPos2f))GetProcAddress(hModule, "glRasterPos2f"))) return false;
	if (!(fn_RasterPos2fv = (decltype(fn_RasterPos2fv))GetProcAddress(hModule, "glRasterPos2fv"))) return false;
	if (!(fn_RasterPos2i = (decltype(fn_RasterPos2i))GetProcAddress(hModule, "glRasterPos2i"))) return false;
	if (!(fn_RasterPos2iv = (decltype(fn_RasterPos2iv))GetProcAddress(hModule, "glRasterPos2iv"))) return false;
	if (!(fn_RasterPos2s = (decltype(fn_RasterPos2s))GetProcAddress(hModule, "glRasterPos2s"))) return false;
	if (!(fn_RasterPos2sv = (decltype(fn_RasterPos2sv))GetProcAddress(hModule, "glRasterPos2sv"))) return false;
	if (!(fn_RasterPos3d = (decltype(fn_RasterPos3d))GetProcAddress(hModule, "glRasterPos3d"))) return false;
	if (!(fn_RasterPos3dv = (decltype(fn_RasterPos3dv))GetProcAddress(hModule, "glRasterPos3dv"))) return false;
	if (!(fn_RasterPos3f = (decltype(fn_RasterPos3f))GetProcAddress(hModule, "glRasterPos3f"))) return false;
	if (!(fn_RasterPos3fv = (decltype(fn_RasterPos3fv))GetProcAddress(hModule, "glRasterPos3fv"))) return false;
	if (!(fn_RasterPos3i = (decltype(fn_RasterPos3i))GetProcAddress(hModule, "glRasterPos3i"))) return false;
	if (!(fn_RasterPos3iv = (decltype(fn_RasterPos3iv))GetProcAddress(hModule, "glRasterPos3iv"))) return false;
	if (!(fn_RasterPos3s = (decltype(fn_RasterPos3s))GetProcAddress(hModule, "glRasterPos3s"))) return false;
	if (!(fn_RasterPos3sv = (decltype(fn_RasterPos3sv))GetProcAddress(hModule, "glRasterPos3sv"))) return false;
	if (!(fn_RasterPos4d = (decltype(fn_RasterPos4d))GetProcAddress(hModule, "glRasterPos4d"))) return false;
	if (!(fn_RasterPos4dv = (decltype(fn_RasterPos4dv))GetProcAddress(hModule, "glRasterPos4dv"))) return false;
	if (!(fn_RasterPos4f = (decltype(fn_RasterPos4f))GetProcAddress(hModule, "glRasterPos4f"))) return false;
	if (!(fn_RasterPos4fv = (decltype(fn_RasterPos4fv))GetProcAddress(hModule, "glRasterPos4fv"))) return false;
	if (!(fn_RasterPos4i = (decltype(fn_RasterPos4i))GetProcAddress(hModule, "glRasterPos4i"))) return false;
	if (!(fn_RasterPos4iv = (decltype(fn_RasterPos4iv))GetProcAddress(hModule, "glRasterPos4iv"))) return false;
	if (!(fn_RasterPos4s = (decltype(fn_RasterPos4s))GetProcAddress(hModule, "glRasterPos4s"))) return false;
	if (!(fn_RasterPos4sv = (decltype(fn_RasterPos4sv))GetProcAddress(hModule, "glRasterPos4sv"))) return false;
	if (!(fn_ReadBuffer = (decltype(fn_ReadBuffer))GetProcAddress(hModule, "glReadBuffer"))) return false;
	if (!(fn_ReadPixels = (decltype(fn_ReadPixels))GetProcAddress(hModule, "glReadPixels"))) return false;
	if (!(fn_Rectd = (decltype(fn_Rectd))GetProcAddress(hModule, "glRectd"))) return false;
	if (!(fn_Rectdv = (decltype(fn_Rectdv))GetProcAddress(hModule, "glRectdv"))) return false;
	if (!(fn_Rectf = (decltype(fn_Rectf))GetProcAddress(hModule, "glRectf"))) return false;
	if (!(fn_Rectfv = (decltype(fn_Rectfv))GetProcAddress(hModule, "glRectfv"))) return false;
	if (!(fn_Recti = (decltype(fn_Recti))GetProcAddress(hModule, "glRecti"))) return false;
	if (!(fn_Rectiv = (decltype(fn_Rectiv))GetProcAddress(hModule, "glRectiv"))) return false;
	if (!(fn_Rects = (decltype(fn_Rects))GetProcAddress(hModule, "glRects"))) return false;
	if (!(fn_Rectsv = (decltype(fn_Rectsv))GetProcAddress(hModule, "glRectsv"))) return false;
	if (!(fn_RenderMode = (decltype(fn_RenderMode))GetProcAddress(hModule, "glRenderMode"))) return false;
	if (!(fn_Rotated = (decltype(fn_Rotated))GetProcAddress(hModule, "glRotated"))) return false;
	if (!(fn_Rotatef = (decltype(fn_Rotatef))GetProcAddress(hModule, "glRotatef"))) return false;
	if (!(fn_Scaled = (decltype(fn_Scaled))GetProcAddress(hModule, "glScaled"))) return false;
	if (!(fn_Scalef = (decltype(fn_Scalef))GetProcAddress(hModule, "glScalef"))) return false;
	if (!(fn_Scissor = (decltype(fn_Scissor))GetProcAddress(hModule, "glScissor"))) return false;
	if (!(fn_SelectBuffer = (decltype(fn_SelectBuffer))GetProcAddress(hModule, "glSelectBuffer"))) return false;
	if (!(fn_ShadeModel = (decltype(fn_ShadeModel))GetProcAddress(hModule, "glShadeModel"))) return false;
	if (!(fn_StencilFunc = (decltype(fn_StencilFunc))GetProcAddress(hModule, "glStencilFunc"))) return false;
	if (!(fn_StencilMask = (decltype(fn_StencilMask))GetProcAddress(hModule, "glStencilMask"))) return false;
	if (!(fn_StencilOp = (decltype(fn_StencilOp))GetProcAddress(hModule, "glStencilOp"))) return false;
	if (!(fn_TexCoord1d = (decltype(fn_TexCoord1d))GetProcAddress(hModule, "glTexCoord1d"))) return false;
	if (!(fn_TexCoord1dv = (decltype(fn_TexCoord1dv))GetProcAddress(hModule, "glTexCoord1dv"))) return false;
	if (!(fn_TexCoord1f = (decltype(fn_TexCoord1f))GetProcAddress(hModule, "glTexCoord1f"))) return false;
	if (!(fn_TexCoord1fv = (decltype(fn_TexCoord1fv))GetProcAddress(hModule, "glTexCoord1fv"))) return false;
	if (!(fn_TexCoord1i = (decltype(fn_TexCoord1i))GetProcAddress(hModule, "glTexCoord1i"))) return false;
	if (!(fn_TexCoord1iv = (decltype(fn_TexCoord1iv))GetProcAddress(hModule, "glTexCoord1iv"))) return false;
	if (!(fn_TexCoord1s = (decltype(fn_TexCoord1s))GetProcAddress(hModule, "glTexCoord1s"))) return false;
	if (!(fn_TexCoord1sv = (decltype(fn_TexCoord1sv))GetProcAddress(hModule, "glTexCoord1sv"))) return false;
	if (!(fn_TexCoord2d = (decltype(fn_TexCoord2d))GetProcAddress(hModule, "glTexCoord2d"))) return false;
	if (!(fn_TexCoord2dv = (decltype(fn_TexCoord2dv))GetProcAddress(hModule, "glTexCoord2dv"))) return false;
	if (!(fn_TexCoord2f = (decltype(fn_TexCoord2f))GetProcAddress(hModule, "glTexCoord2f"))) return false;
	if (!(fn_TexCoord2fv = (decltype(fn_TexCoord2fv))GetProcAddress(hModule, "glTexCoord2fv"))) return false;
	if (!(fn_TexCoord2i = (decltype(fn_TexCoord2i))GetProcAddress(hModule, "glTexCoord2i"))) return false;
	if (!(fn_TexCoord2iv = (decltype(fn_TexCoord2iv))GetProcAddress(hModule, "glTexCoord2iv"))) return false;
	if (!(fn_TexCoord2s = (decltype(fn_TexCoord2s))GetProcAddress(hModule, "glTexCoord2s"))) return false;
	if (!(fn_TexCoord2sv = (decltype(fn_TexCoord2sv))GetProcAddress(hModule, "glTexCoord2sv"))) return false;
	if (!(fn_TexCoord3d = (decltype(fn_TexCoord3d))GetProcAddress(hModule, "glTexCoord3d"))) return false;
	if (!(fn_TexCoord3dv = (decltype(fn_TexCoord3dv))GetProcAddress(hModule, "glTexCoord3dv"))) return false;
	if (!(fn_TexCoord3f = (decltype(fn_TexCoord3f))GetProcAddress(hModule, "glTexCoord3f"))) return false;
	if (!(fn_TexCoord3fv = (decltype(fn_TexCoord3fv))GetProcAddress(hModule, "glTexCoord3fv"))) return false;
	if (!(fn_TexCoord3i = (decltype(fn_TexCoord3i))GetProcAddress(hModule, "glTexCoord3i"))) return false;
	if (!(fn_TexCoord3iv = (decltype(fn_TexCoord3iv))GetProcAddress(hModule, "glTexCoord3iv"))) return false;
	if (!(fn_TexCoord3s = (decltype(fn_TexCoord3s))GetProcAddress(hModule, "glTexCoord3s"))) return false;
	if (!(fn_TexCoord3sv = (decltype(fn_TexCoord3sv))GetProcAddress(hModule, "glTexCoord3sv"))) return false;
	if (!(fn_TexCoord4d = (decltype(fn_TexCoord4d))GetProcAddress(hModule, "glTexCoord4d"))) return false;
	if (!(fn_TexCoord4dv = (decltype(fn_TexCoord4dv))GetProcAddress(hModule, "glTexCoord4dv"))) return false;
	if (!(fn_TexCoord4f = (decltype(fn_TexCoord4f))GetProcAddress(hModule, "glTexCoord4f"))) return false;
	if (!(fn_TexCoord4fv = (decltype(fn_TexCoord4fv))GetProcAddress(hModule, "glTexCoord4fv"))) return false;
	if (!(fn_TexCoord4i = (decltype(fn_TexCoord4i))GetProcAddress(hModule, "glTexCoord4i"))) return false;
	if (!(fn_TexCoord4iv = (decltype(fn_TexCoord4iv))GetProcAddress(hModule, "glTexCoord4iv"))) return false;
	if (!(fn_TexCoord4s = (decltype(fn_TexCoord4s))GetProcAddress(hModule, "glTexCoord4s"))) return false;
	if (!(fn_TexCoord4sv = (decltype(fn_TexCoord4sv))GetProcAddress(hModule, "glTexCoord4sv"))) return false;
	if (!(fn_TexCoordPointer = (decltype(fn_TexCoordPointer))GetProcAddress(hModule, "glTexCoordPointer"))) return false;
	if (!(fn_TexEnvf = (decltype(fn_TexEnvf))GetProcAddress(hModule, "glTexEnvf"))) return false;
	if (!(fn_TexEnvfv = (decltype(fn_TexEnvfv))GetProcAddress(hModule, "glTexEnvfv"))) return false;
	if (!(fn_TexEnvi = (decltype(fn_TexEnvi))GetProcAddress(hModule, "glTexEnvi"))) return false;
	if (!(fn_TexEnviv = (decltype(fn_TexEnviv))GetProcAddress(hModule, "glTexEnviv"))) return false;
	if (!(fn_TexGend = (decltype(fn_TexGend))GetProcAddress(hModule, "glTexGend"))) return false;
	if (!(fn_TexGendv = (decltype(fn_TexGendv))GetProcAddress(hModule, "glTexGendv"))) return false;
	if (!(fn_TexGenf = (decltype(fn_TexGenf))GetProcAddress(hModule, "glTexGenf"))) return false;
	if (!(fn_TexGenfv = (decltype(fn_TexGenfv))GetProcAddress(hModule, "glTexGenfv"))) return false;
	if (!(fn_TexGeni = (decltype(fn_TexGeni))GetProcAddress(hModule, "glTexGeni"))) return false;
	if (!(fn_TexGeniv = (decltype(fn_TexGeniv))GetProcAddress(hModule, "glTexGeniv"))) return false;
	if (!(fn_TexImage1D = (decltype(fn_TexImage1D))GetProcAddress(hModule, "glTexImage1D"))) return false;
	if (!(fn_TexImage2D = (decltype(fn_TexImage2D))GetProcAddress(hModule, "glTexImage2D"))) return false;
	if (!(fn_TexParameterf = (decltype(fn_TexParameterf))GetProcAddress(hModule, "glTexParameterf"))) return false;
	if (!(fn_TexParameterfv = (decltype(fn_TexParameterfv))GetProcAddress(hModule, "glTexParameterfv"))) return false;
	if (!(fn_TexParameteri = (decltype(fn_TexParameteri))GetProcAddress(hModule, "glTexParameteri"))) return false;
	if (!(fn_TexParameteriv = (decltype(fn_TexParameteriv))GetProcAddress(hModule, "glTexParameteriv"))) return false;
	if (!(fn_TexSubImage1D = (decltype(fn_TexSubImage1D))GetProcAddress(hModule, "glTexSubImage1D"))) return false;
	if (!(fn_TexSubImage2D = (decltype(fn_TexSubImage2D))GetProcAddress(hModule, "glTexSubImage2D"))) return false;
	if (!(fn_Translated = (decltype(fn_Translated))GetProcAddress(hModule, "glTranslated"))) return false;
	if (!(fn_Translatef = (decltype(fn_Translatef))GetProcAddress(hModule, "glTranslatef"))) return false;
	if (!(fn_Vertex2d = (decltype(fn_Vertex2d))GetProcAddress(hModule, "glVertex2d"))) return false;
	if (!(fn_Vertex2dv = (decltype(fn_Vertex2dv))GetProcAddress(hModule, "glVertex2dv"))) return false;
	if (!(fn_Vertex2f = (decltype(fn_Vertex2f))GetProcAddress(hModule, "glVertex2f"))) return false;
	if (!(fn_Vertex2fv = (decltype(fn_Vertex2fv))GetProcAddress(hModule, "glVertex2fv"))) return false;
	if (!(fn_Vertex2i = (decltype(fn_Vertex2i))GetProcAddress(hModule, "glVertex2i"))) return false;
	if (!(fn_Vertex2iv = (decltype(fn_Vertex2iv))GetProcAddress(hModule, "glVertex2iv"))) return false;
	if (!(fn_Vertex2s = (decltype(fn_Vertex2s))GetProcAddress(hModule, "glVertex2s"))) return false;
	if (!(fn_Vertex2sv = (decltype(fn_Vertex2sv))GetProcAddress(hModule, "glVertex2sv"))) return false;
	if (!(fn_Vertex3d = (decltype(fn_Vertex3d))GetProcAddress(hModule, "glVertex3d"))) return false;
	if (!(fn_Vertex3dv = (decltype(fn_Vertex3dv))GetProcAddress(hModule, "glVertex3dv"))) return false;
	if (!(fn_Vertex3f = (decltype(fn_Vertex3f))GetProcAddress(hModule, "glVertex3f"))) return false;
	if (!(fn_Vertex3fv = (decltype(fn_Vertex3fv))GetProcAddress(hModule, "glVertex3fv"))) return false;
	if (!(fn_Vertex3i = (decltype(fn_Vertex3i))GetProcAddress(hModule, "glVertex3i"))) return false;
	if (!(fn_Vertex3iv = (decltype(fn_Vertex3iv))GetProcAddress(hModule, "glVertex3iv"))) return false;
	if (!(fn_Vertex3s = (decltype(fn_Vertex3s))GetProcAddress(hModule, "glVertex3s"))) return false;
	if (!(fn_Vertex3sv = (decltype(fn_Vertex3sv))GetProcAddress(hModule, "glVertex3sv"))) return false;
	if (!(fn_Vertex4d = (decltype(fn_Vertex4d))GetProcAddress(hModule, "glVertex4d"))) return false;
	if (!(fn_Vertex4dv = (decltype(fn_Vertex4dv))GetProcAddress(hModule, "glVertex4dv"))) return false;
	if (!(fn_Vertex4f = (decltype(fn_Vertex4f))GetProcAddress(hModule, "glVertex4f"))) return false;
	if (!(fn_Vertex4fv = (decltype(fn_Vertex4fv))GetProcAddress(hModule, "glVertex4fv"))) return false;
	if (!(fn_Vertex4i = (decltype(fn_Vertex4i))GetProcAddress(hModule, "glVertex4i"))) return false;
	if (!(fn_Vertex4iv = (decltype(fn_Vertex4iv))GetProcAddress(hModule, "glVertex4iv"))) return false;
	if (!(fn_Vertex4s = (decltype(fn_Vertex4s))GetProcAddress(hModule, "glVertex4s"))) return false;
	if (!(fn_Vertex4sv = (decltype(fn_Vertex4sv))GetProcAddress(hModule, "glVertex4sv"))) return false;
	if (!(fn_VertexPointer = (decltype(fn_VertexPointer))GetProcAddress(hModule, "glVertexPointer"))) return false;
	if (!(fn_Viewport = (decltype(fn_Viewport))GetProcAddress(hModule, "glViewport"))) return false;

	return true;
}

void WINAPI gl::hk_Accum(GLenum op, GLfloat value)
{
	fn_Accum(op, value);
}

void WINAPI gl::hk_AlphaFunc(GLenum func, GLclampf ref)
{
	fn_AlphaFunc(func, ref);
}

GLboolean WINAPI gl::hk_AreTexturesResident(GLsizei n, const GLuint* textures, GLboolean* residences)
{
	return fn_AreTexturesResident(n, textures, residences);
}

void WINAPI gl::hk_ArrayElement(GLint i)
{
	fn_ArrayElement(i);
}

void WINAPI gl::hk_Begin(GLenum mode)
{
	fn_Begin(mode);
}

void WINAPI gl::hk_BindTexture(GLenum target, GLuint texture)
{
	fn_BindTexture(target, texture);
}

void WINAPI gl::hk_Bitmap(GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte* bitmap)
{
	fn_Bitmap(width, height, xorig, yorig, xmove, ymove, bitmap);
}

void WINAPI gl::hk_BlendFunc(GLenum sfactor, GLenum dfactor)
{
	fn_BlendFunc(sfactor, dfactor);
}

void WINAPI gl::hk_CallList(GLuint list)
{
	fn_CallList(list);
}

void WINAPI gl::hk_CallLists(GLsizei n, GLenum type, const GLvoid* lists)
{
	fn_CallLists(n, type, lists);
}

void WINAPI gl::hk_Clear(GLbitfield mask)
{
	fn_Clear(mask);
}

void WINAPI gl::hk_ClearAccum(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
	fn_ClearAccum(red, green, blue, alpha);
}

void WINAPI gl::hk_ClearColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha)
{
	fn_ClearColor(red, green, blue, alpha);
}

void WINAPI gl::hk_ClearDepth(GLclampd depth)
{
	fn_ClearDepth(depth);
}

void WINAPI gl::hk_ClearIndex(GLfloat c)
{
	fn_ClearIndex(c);
}

void WINAPI gl::hk_ClearStencil(GLint s)
{
	fn_ClearStencil(s);
}

void WINAPI gl::hk_ClipPlane(GLenum plane, const GLdouble* equation)
{
	fn_ClipPlane(plane, equation);
}

void WINAPI gl::hk_Color3b(GLbyte red, GLbyte green, GLbyte blue)
{
	fn_Color3b(red, green, blue);
}

void WINAPI gl::hk_Color3bv(const GLbyte* v)
{
	fn_Color3bv(v);
}

void WINAPI gl::hk_Color3d(GLdouble red, GLdouble green, GLdouble blue)
{
	fn_Color3d(red, green, blue);
}

void WINAPI gl::hk_Color3dv(const GLdouble* v)
{
	fn_Color3dv(v);
}

void WINAPI gl::hk_Color3f(GLfloat red, GLfloat green, GLfloat blue)
{
	fn_Color3f(red, green, blue);
}

void WINAPI gl::hk_Color3fv(const GLfloat* v)
{
	fn_Color3fv(v);
}

void WINAPI gl::hk_Color3i(GLint red, GLint green, GLint blue)
{
	fn_Color3i(red, green, blue);
}

void WINAPI gl::hk_Color3iv(const GLint* v)
{
	fn_Color3iv(v);
}

void WINAPI gl::hk_Color3s(GLshort red, GLshort green, GLshort blue)
{
	fn_Color3s(red, green, blue);
}

void WINAPI gl::hk_Color3sv(const GLshort* v)
{
	fn_Color3sv(v);
}

void WINAPI gl::hk_Color3ub(GLubyte red, GLubyte green, GLubyte blue)
{
	fn_Color3ub(red, green, blue);
}

void WINAPI gl::hk_Color3ubv(const GLubyte* v)
{
	fn_Color3ubv(v);
}

void WINAPI gl::hk_Color3ui(GLuint red, GLuint green, GLuint blue)
{
	fn_Color3ui(red, green, blue);
}

void WINAPI gl::hk_Color3uiv(const GLuint* v)
{
	fn_Color3uiv(v);
}

void WINAPI gl::hk_Color3us(GLushort red, GLushort green, GLushort blue)
{
	fn_Color3us(red, green, blue);
}

void WINAPI gl::hk_Color3usv(const GLushort* v)
{
	fn_Color3usv(v);
}

void WINAPI gl::hk_Color4b(GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha)
{
	fn_Color4b(red, green, blue, alpha);
}

void WINAPI gl::hk_Color4bv(const GLbyte* v)
{
	fn_Color4bv(v);
}

void WINAPI gl::hk_Color4d(GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha)
{
	fn_Color4d(red, green, blue, alpha);
}

void WINAPI gl::hk_Color4dv(const GLdouble* v)
{
	fn_Color4dv(v);
}

void WINAPI gl::hk_Color4f(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
	fn_Color4f(red, green, blue, alpha);
}

void WINAPI gl::hk_Color4fv(const GLfloat* v)
{
	fn_Color4fv(v);
}

void WINAPI gl::hk_Color4i(GLint red, GLint green, GLint blue, GLint alpha)
{
	fn_Color4i(red, green, blue, alpha);
}

void WINAPI gl::hk_Color4iv(const GLint* v)
{
	fn_Color4iv(v);
}

void WINAPI gl::hk_Color4s(GLshort red, GLshort green, GLshort blue, GLshort alpha)
{
	fn_Color4s(red, green, blue, alpha);
}

void WINAPI gl::hk_Color4sv(const GLshort* v)
{
	fn_Color4sv(v);
}

void WINAPI gl::hk_Color4ub(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha)
{
	fn_Color4ub(red, green, blue, alpha);
}

void WINAPI gl::hk_Color4ubv(const GLubyte* v)
{
	fn_Color4ubv(v);
}

void WINAPI gl::hk_Color4ui(GLuint red, GLuint green, GLuint blue, GLuint alpha)
{
	fn_Color4ui(red, green, blue, alpha);
}

void WINAPI gl::hk_Color4uiv(const GLuint* v)
{
	fn_Color4uiv(v);
}

void WINAPI gl::hk_Color4us(GLushort red, GLushort green, GLushort blue, GLushort alpha)
{
	fn_Color4us(red, green, blue, alpha);
}

void WINAPI gl::hk_Color4usv(const GLushort* v)
{
	fn_Color4usv(v);
}

void WINAPI gl::hk_ColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
{
	fn_ColorMask(red, green, blue, alpha);
}

void WINAPI gl::hk_ColorMaterial(GLenum face, GLenum mode)
{
	fn_ColorMaterial(face, mode);
}

void WINAPI gl::hk_ColorPointer(GLint size, GLenum type, GLsizei stride, const GLvoid* pointer)
{
	fn_ColorPointer(size, type, stride, pointer);
}

void WINAPI gl::hk_CopyPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum type)
{
	fn_CopyPixels(x, y, width, height, type);
}

void WINAPI gl::hk_CopyTexImage1D(GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLint border)
{
	fn_CopyTexImage1D(target, level, internalFormat, x, y, width, border);
}

void WINAPI gl::hk_CopyTexImage2D(GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
	fn_CopyTexImage2D(target, level, internalFormat, x, y, width, height, border);
}

void WINAPI gl::hk_CopyTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
	fn_CopyTexSubImage1D(target, level, xoffset, x, y, width);
}

void WINAPI gl::hk_CopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
	fn_CopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
}

void WINAPI gl::hk_CullFace(GLenum mode)
{
	fn_CullFace(mode);
}

GLint WINAPI gl::hk_DebugEntry(GLint unknown1, GLint unknown2)
{
	return fn_DebugEntry(unknown1, unknown2);
}

void WINAPI gl::hk_DeleteLists(GLuint list, GLsizei range)
{
	fn_DeleteLists(list, range);
}

void WINAPI gl::hk_DeleteTextures(GLsizei n, const GLuint* textures)
{
	fn_DeleteTextures(n, textures);
}

void WINAPI gl::hk_DepthFunc(GLenum func)
{
	fn_DepthFunc(func);
}

void WINAPI gl::hk_DepthMask(GLboolean flag)
{
	fn_DepthMask(flag);
}

void WINAPI gl::hk_DepthRange(GLclampd zNear, GLclampd zFar)
{
	fn_DepthRange(zNear, zFar);
}

void WINAPI gl::hk_Disable(GLenum cap)
{
	fn_Disable(cap);
}

void WINAPI gl::hk_DisableClientState(GLenum array)
{
	fn_DisableClientState(array);
}

void WINAPI gl::hk_DrawArrays(GLenum mode, GLint first, GLsizei count)
{
	fn_DrawArrays(mode, first, count);
}

void WINAPI gl::hk_DrawBuffer(GLenum mode)
{
	fn_DrawBuffer(mode);
}

void WINAPI gl::hk_DrawElements(GLenum mode, GLsizei count, GLenum type, const GLvoid* indices)
{
	fn_DrawElements(mode, count, type, indices);
}

void WINAPI gl::hk_DrawPixels(GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid* pixels)
{
	fn_DrawPixels(width, height, format, type, pixels);
}

void WINAPI gl::hk_EdgeFlag(GLboolean flag)
{
	fn_EdgeFlag(flag);
}

void WINAPI gl::hk_EdgeFlagPointer(GLsizei stride, const GLvoid* pointer)
{
	fn_EdgeFlagPointer(stride, pointer);
}

void WINAPI gl::hk_EdgeFlagv(const GLboolean* flag)
{
	fn_EdgeFlagv(flag);
}

void WINAPI gl::hk_Enable(GLenum cap)
{
	fn_Enable(cap);
}

void WINAPI gl::hk_EnableClientState(GLenum array)
{
	fn_EnableClientState(array);
}

void WINAPI gl::hk_End(void)
{
	fn_End();
}

void WINAPI gl::hk_EndList(void)
{
	fn_EndList();
}

void WINAPI gl::hk_EvalCoord1d(GLdouble u)
{
	fn_EvalCoord1d(u);
}

void WINAPI gl::hk_EvalCoord1dv(const GLdouble* u)
{
	fn_EvalCoord1dv(u);
}

void WINAPI gl::hk_EvalCoord1f(GLfloat u)
{
	fn_EvalCoord1f(u);
}

void WINAPI gl::hk_EvalCoord1fv(const GLfloat* u)
{
	fn_EvalCoord1fv(u);
}

void WINAPI gl::hk_EvalCoord2d(GLdouble u, GLdouble v)
{
	fn_EvalCoord2d(u, v);
}

void WINAPI gl::hk_EvalCoord2dv(const GLdouble* u)
{
	fn_EvalCoord2dv(u);
}

void WINAPI gl::hk_EvalCoord2f(GLfloat u, GLfloat v)
{
	fn_EvalCoord2f(u, v);
}

void WINAPI gl::hk_EvalCoord2fv(const GLfloat* u)
{
	fn_EvalCoord2fv(u);
}

void WINAPI gl::hk_EvalMesh1(GLenum mode, GLint i1, GLint i2)
{
	fn_EvalMesh1(mode, i1, i2);
}

void WINAPI gl::hk_EvalMesh2(GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2)
{
	fn_EvalMesh2(mode, i1, i2, j1, j2);
}

void WINAPI gl::hk_EvalPoint1(GLint i)
{
	fn_EvalPoint1(i);
}

void WINAPI gl::hk_EvalPoint2(GLint i, GLint j)
{
	fn_EvalPoint2(i, j);
}

void WINAPI gl::hk_FeedbackBuffer(GLsizei size, GLenum type, GLfloat* buffer)
{
	fn_FeedbackBuffer(size, type, buffer);
}

void WINAPI gl::hk_Finish(void)
{
	fn_Finish();
}

void WINAPI gl::hk_Flush(void)
{
	fn_Flush();
}

void WINAPI gl::hk_Fogf(GLenum pname, GLfloat param)
{
	fn_Fogf(pname, param);
}

void WINAPI gl::hk_Fogfv(GLenum pname, const GLfloat* params)
{
	fn_Fogfv(pname, params);
}

void WINAPI gl::hk_Fogi(GLenum pname, GLint param)
{
	fn_Fogi(pname, param);
}

void WINAPI gl::hk_Fogiv(GLenum pname, const GLint* params)
{
	fn_Fogiv(pname, params);
}

void WINAPI gl::hk_FrontFace(GLenum mode)
{
	fn_FrontFace(mode);
}

void WINAPI gl::hk_Frustum(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
	fn_Frustum(left, right, bottom, top, zNear, zFar);
}

GLuint WINAPI gl::hk_GenLists(GLsizei range)
{
	return fn_GenLists(range);
}

void WINAPI gl::hk_GenTextures(GLsizei n, GLuint* textures)
{
	fn_GenTextures(n, textures);
}

void WINAPI gl::hk_GetBooleanv(GLenum pname, GLboolean* params)
{
	fn_GetBooleanv(pname, params);
}

void WINAPI gl::hk_GetClipPlane(GLenum plane, GLdouble* equation)
{
	fn_GetClipPlane(plane, equation);
}

void WINAPI gl::hk_GetDoublev(GLenum pname, GLdouble* params)
{
	fn_GetDoublev(pname, params);
}

GLenum WINAPI gl::hk_GetError(void)
{
	return fn_GetError();
}

void WINAPI gl::hk_GetFloatv(GLenum pname, GLfloat* params)
{
	fn_GetFloatv(pname, params);
}

void WINAPI gl::hk_GetIntegerv(GLenum pname, GLint* params)
{
	fn_GetIntegerv(pname, params);
}

void WINAPI gl::hk_GetLightfv(GLenum light, GLenum pname, GLfloat* params)
{
	fn_GetLightfv(light, pname, params);
}

void WINAPI gl::hk_GetLightiv(GLenum light, GLenum pname, GLint* params)
{
	fn_GetLightiv(light, pname, params);
}

void WINAPI gl::hk_GetMapdv(GLenum target, GLenum query, GLdouble* v)
{
	fn_GetMapdv(target, query, v);
}

void WINAPI gl::hk_GetMapfv(GLenum target, GLenum query, GLfloat* v)
{
	fn_GetMapfv(target, query, v);
}

void WINAPI gl::hk_GetMapiv(GLenum target, GLenum query, GLint* v)
{
	fn_GetMapiv(target, query, v);
}

void WINAPI gl::hk_GetMaterialfv(GLenum face, GLenum pname, GLfloat* params)
{
	fn_GetMaterialfv(face, pname, params);
}

void WINAPI gl::hk_GetMaterialiv(GLenum face, GLenum pname, GLint* params)
{
	fn_GetMaterialiv(face, pname, params);
}

void WINAPI gl::hk_GetPixelMapfv(GLenum map, GLfloat* values)
{
	fn_GetPixelMapfv(map, values);
}

void WINAPI gl::hk_GetPixelMapuiv(GLenum map, GLuint* values)
{
	fn_GetPixelMapuiv(map, values);
}

void WINAPI gl::hk_GetPixelMapusv(GLenum map, GLushort* values)
{
	fn_GetPixelMapusv(map, values);
}

void WINAPI gl::hk_GetPointerv(GLenum pname, GLvoid** params)
{
	fn_GetPointerv(pname, params);
}

void WINAPI gl::hk_GetPolygonStipple(GLubyte* mask)
{
	fn_GetPolygonStipple(mask);
}

const GLubyte* WINAPI gl::hk_GetString(GLenum name)
{
	return fn_GetString(name);
}

void WINAPI gl::hk_GetTexEnvfv(GLenum target, GLenum pname, GLfloat* params)
{
	fn_GetTexEnvfv(target, pname, params);
}

void WINAPI gl::hk_GetTexEnviv(GLenum target, GLenum pname, GLint* params)
{
	fn_GetTexEnviv(target, pname, params);
}

void WINAPI gl::hk_GetTexGendv(GLenum coord, GLenum pname, GLdouble* params)
{
	fn_GetTexGendv(coord, pname, params);
}

void WINAPI gl::hk_GetTexGenfv(GLenum coord, GLenum pname, GLfloat* params)
{
	fn_GetTexGenfv(coord, pname, params);
}

void WINAPI gl::hk_GetTexGeniv(GLenum coord, GLenum pname, GLint* params)
{
	fn_GetTexGeniv(coord, pname, params);
}

void WINAPI gl::hk_GetTexImage(GLenum target, GLint level, GLenum format, GLenum type, GLvoid* pixels)
{
	fn_GetTexImage(target, level, format, type, pixels);
}

void WINAPI gl::hk_GetTexLevelParameterfv(GLenum target, GLint level, GLenum pname, GLfloat* params)
{
	fn_GetTexLevelParameterfv(target, level, pname, params);
}

void WINAPI gl::hk_GetTexLevelParameteriv(GLenum target, GLint level, GLenum pname, GLint* params)
{
	fn_GetTexLevelParameteriv(target, level, pname, params);
}

void WINAPI gl::hk_GetTexParameterfv(GLenum target, GLenum pname, GLfloat* params)
{
	fn_GetTexParameterfv(target, pname, params);
}

void WINAPI gl::hk_GetTexParameteriv(GLenum target, GLenum pname, GLint* params)
{
	fn_GetTexParameteriv(target, pname, params);
}

void WINAPI gl::hk_Hint(GLenum target, GLenum mode)
{
	fn_Hint(target, mode);
}

void WINAPI gl::hk_IndexMask(GLuint mask)
{
	fn_IndexMask(mask);
}

void WINAPI gl::hk_IndexPointer(GLenum type, GLsizei stride, const GLvoid* pointer)
{
	fn_IndexPointer(type, stride, pointer);
}

void WINAPI gl::hk_Indexd(GLdouble c)
{
	fn_Indexd(c);
}

void WINAPI gl::hk_Indexdv(const GLdouble* c)
{
	fn_Indexdv(c);
}

void WINAPI gl::hk_Indexf(GLfloat c)
{
	fn_Indexf(c);
}

void WINAPI gl::hk_Indexfv(const GLfloat* c)
{
	fn_Indexfv(c);
}

void WINAPI gl::hk_Indexi(GLint c)
{
	fn_Indexi(c);
}

void WINAPI gl::hk_Indexiv(const GLint* c)
{
	fn_Indexiv(c);
}

void WINAPI gl::hk_Indexs(GLshort c)
{
	fn_Indexs(c);
}

void WINAPI gl::hk_Indexsv(const GLshort* c)
{
	fn_Indexsv(c);
}

void WINAPI gl::hk_Indexub(GLubyte c)
{
	fn_Indexub(c);
}

void WINAPI gl::hk_Indexubv(const GLubyte* c)
{
	fn_Indexubv(c);
}

void WINAPI gl::hk_InitNames(void)
{
	fn_InitNames();
}

void WINAPI gl::hk_InterleavedArrays(GLenum format, GLsizei stride, const GLvoid* pointer)
{
	fn_InterleavedArrays(format, stride, pointer);
}

GLboolean WINAPI gl::hk_IsEnabled(GLenum cap)
{
	return fn_IsEnabled(cap);
}

GLboolean WINAPI gl::hk_IsList(GLuint list)
{
	return fn_IsList(list);
}

GLboolean WINAPI gl::hk_IsTexture(GLuint texture)
{
	return fn_IsTexture(texture);
}

void WINAPI gl::hk_LightModelf(GLenum pname, GLfloat param)
{
	fn_LightModelf(pname, param);
}

void WINAPI gl::hk_LightModelfv(GLenum pname, const GLfloat* params)
{
	fn_LightModelfv(pname, params);
}

void WINAPI gl::hk_LightModeli(GLenum pname, GLint param)
{
	fn_LightModeli(pname, param);
}

void WINAPI gl::hk_LightModeliv(GLenum pname, const GLint* params)
{
	fn_LightModeliv(pname, params);
}

void WINAPI gl::hk_Lightf(GLenum light, GLenum pname, GLfloat param)
{
	fn_Lightf(light, pname, param);
}

void WINAPI gl::hk_Lightfv(GLenum light, GLenum pname, const GLfloat* params)
{
	fn_Lightfv(light, pname, params);
}

void WINAPI gl::hk_Lighti(GLenum light, GLenum pname, GLint param)
{
	fn_Lighti(light, pname, param);
}

void WINAPI gl::hk_Lightiv(GLenum light, GLenum pname, const GLint* params)
{
	fn_Lightiv(light, pname, params);
}

void WINAPI gl::hk_LineStipple(GLint factor, GLushort pattern)
{
	fn_LineStipple(factor, pattern);
}

void WINAPI gl::hk_LineWidth(GLfloat width)
{
	fn_LineWidth(width);
}

void WINAPI gl::hk_ListBase(GLuint base)
{
	fn_ListBase(base);
}

void WINAPI gl::hk_LoadIdentity(void)
{
	fn_LoadIdentity();
}

void WINAPI gl::hk_LoadMatrixd(const GLdouble* m)
{
	fn_LoadMatrixd(m);
}

void WINAPI gl::hk_LoadMatrixf(const GLfloat* m)
{
	fn_LoadMatrixf(m);
}

void WINAPI gl::hk_LoadName(GLuint name)
{
	fn_LoadName(name);
}

void WINAPI gl::hk_LogicOp(GLenum opcode)
{
	fn_LogicOp(opcode);
}

void WINAPI gl::hk_Map1d(GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble* points)
{
	fn_Map1d(target, u1, u2, stride, order, points);
}

void WINAPI gl::hk_Map1f(GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat* points)
{
	fn_Map1f(target, u1, u2, stride, order, points);
}

void WINAPI gl::hk_Map2d(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble* points)
{
	fn_Map2d(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

void WINAPI gl::hk_Map2f(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat* points)
{
	fn_Map2f(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

void WINAPI gl::hk_MapGrid1d(GLint un, GLdouble u1, GLdouble u2)
{
	fn_MapGrid1d(un, u1, u2);
}

void WINAPI gl::hk_MapGrid1f(GLint un, GLfloat u1, GLfloat u2)
{
	fn_MapGrid1f(un, u1, u2);
}

void WINAPI gl::hk_MapGrid2d(GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2)
{
	fn_MapGrid2d(un, u1, u2, vn, v1, v2);
}

void WINAPI gl::hk_MapGrid2f(GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2)
{
	fn_MapGrid2f(un, u1, u2, vn, v1, v2);
}

void WINAPI gl::hk_Materialf(GLenum face, GLenum pname, GLfloat param)
{
	fn_Materialf(face, pname, param);
}

void WINAPI gl::hk_Materialfv(GLenum face, GLenum pname, const GLfloat* params)
{
	fn_Materialfv(face, pname, params);
}

void WINAPI gl::hk_Materiali(GLenum face, GLenum pname, GLint param)
{
	fn_Materiali(face, pname, param);
}

void WINAPI gl::hk_Materialiv(GLenum face, GLenum pname, const GLint* params)
{
	fn_Materialiv(face, pname, params);
}

void WINAPI gl::hk_MatrixMode(GLenum mode)
{
	fn_MatrixMode(mode);
}

void WINAPI gl::hk_MultMatrixd(const GLdouble* m)
{
	fn_MultMatrixd(m);
}

void WINAPI gl::hk_MultMatrixf(const GLfloat* m)
{
	fn_MultMatrixf(m);
}

void WINAPI gl::hk_NewList(GLuint list, GLenum mode)
{
	fn_NewList(list, mode);
}

void WINAPI gl::hk_Normal3b(GLbyte nx, GLbyte ny, GLbyte nz)
{
	fn_Normal3b(nx, ny, nz);
}

void WINAPI gl::hk_Normal3bv(const GLbyte* v)
{
	fn_Normal3bv(v);
}

void WINAPI gl::hk_Normal3d(GLdouble nx, GLdouble ny, GLdouble nz)
{
	fn_Normal3d(nx, ny, nz);
}

void WINAPI gl::hk_Normal3dv(const GLdouble* v)
{
	fn_Normal3dv(v);
}

void WINAPI gl::hk_Normal3f(GLfloat nx, GLfloat ny, GLfloat nz)
{
	fn_Normal3f(nx, ny, nz);
}

void WINAPI gl::hk_Normal3fv(const GLfloat* v)
{
	fn_Normal3fv(v);
}

void WINAPI gl::hk_Normal3i(GLint nx, GLint ny, GLint nz)
{
	fn_Normal3i(nx, ny, nz);
}

void WINAPI gl::hk_Normal3iv(const GLint* v)
{
	fn_Normal3iv(v);
}

void WINAPI gl::hk_Normal3s(GLshort nx, GLshort ny, GLshort nz)
{
	fn_Normal3s(nx, ny, nz);
}

void WINAPI gl::hk_Normal3sv(const GLshort* v)
{
	fn_Normal3sv(v);
}

void WINAPI gl::hk_NormalPointer(GLenum type, GLsizei stride, const GLvoid* pointer)
{
	fn_NormalPointer(type, stride, pointer);
}

void WINAPI gl::hk_Ortho(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
	fn_Ortho(left, right, bottom, top, zNear, zFar);
}

void WINAPI gl::hk_PassThrough(GLfloat token)
{
	fn_PassThrough(token);
}

void WINAPI gl::hk_PixelMapfv(GLenum map, GLsizei mapsize, const GLfloat* values)
{
	fn_PixelMapfv(map, mapsize, values);
}

void WINAPI gl::hk_PixelMapuiv(GLenum map, GLsizei mapsize, const GLuint* values)
{
	fn_PixelMapuiv(map, mapsize, values);
}

void WINAPI gl::hk_PixelMapusv(GLenum map, GLsizei mapsize, const GLushort* values)
{
	fn_PixelMapusv(map, mapsize, values);
}

void WINAPI gl::hk_PixelStoref(GLenum pname, GLfloat param)
{
	fn_PixelStoref(pname, param);
}

void WINAPI gl::hk_PixelStorei(GLenum pname, GLint param)
{
	fn_PixelStorei(pname, param);
}

void WINAPI gl::hk_PixelTransferf(GLenum pname, GLfloat param)
{
	fn_PixelTransferf(pname, param);
}

void WINAPI gl::hk_PixelTransferi(GLenum pname, GLint param)
{
	fn_PixelTransferi(pname, param);
}

void WINAPI gl::hk_PixelZoom(GLfloat xfactor, GLfloat yfactor)
{
	fn_PixelZoom(xfactor, yfactor);
}

void WINAPI gl::hk_PointSize(GLfloat size)
{
	fn_PointSize(size);
}

void WINAPI gl::hk_PolygonMode(GLenum face, GLenum mode)
{
	fn_PolygonMode(face, mode);
}

void WINAPI gl::hk_PolygonOffset(GLfloat factor, GLfloat units)
{
	fn_PolygonOffset(factor, units);
}

void WINAPI gl::hk_PolygonStipple(const GLubyte* mask)
{
	fn_PolygonStipple(mask);
}

void WINAPI gl::hk_PopAttrib(void)
{
	fn_PopAttrib();
}

void WINAPI gl::hk_PopClientAttrib(void)
{
	fn_PopClientAttrib();
}

void WINAPI gl::hk_PopMatrix(void)
{
	fn_PopMatrix();
}

void WINAPI gl::hk_PopName(void)
{
	fn_PopName();
}

void WINAPI gl::hk_PrioritizeTextures(GLsizei n, const GLuint* textures, const GLclampf* priorities)
{
	fn_PrioritizeTextures(n, textures, priorities);
}

void WINAPI gl::hk_PushAttrib(GLbitfield mask)
{
	fn_PushAttrib(mask);
}

void WINAPI gl::hk_PushClientAttrib(GLbitfield mask)
{
	fn_PushClientAttrib(mask);
}

void WINAPI gl::hk_PushMatrix(void)
{
	fn_PushMatrix();
}

void WINAPI gl::hk_PushName(GLuint name)
{
	fn_PushName(name);
}

void WINAPI gl::hk_RasterPos2d(GLdouble x, GLdouble y)
{
	fn_RasterPos2d(x, y);
}

void WINAPI gl::hk_RasterPos2dv(const GLdouble* v)
{
	fn_RasterPos2dv(v);
}

void WINAPI gl::hk_RasterPos2f(GLfloat x, GLfloat y)
{
	fn_RasterPos2f(x, y);
}

void WINAPI gl::hk_RasterPos2fv(const GLfloat* v)
{
	fn_RasterPos2fv(v);
}

void WINAPI gl::hk_RasterPos2i(GLint x, GLint y)
{
	fn_RasterPos2i(x, y);
}

void WINAPI gl::hk_RasterPos2iv(const GLint* v)
{
	fn_RasterPos2iv(v);
}

void WINAPI gl::hk_RasterPos2s(GLshort x, GLshort y)
{
	fn_RasterPos2s(x, y);
}

void WINAPI gl::hk_RasterPos2sv(const GLshort* v)
{
	fn_RasterPos2sv(v);
}

void WINAPI gl::hk_RasterPos3d(GLdouble x, GLdouble y, GLdouble z)
{
	fn_RasterPos3d(x, y, z);
}

void WINAPI gl::hk_RasterPos3dv(const GLdouble* v)
{
	fn_RasterPos3dv(v);
}

void WINAPI gl::hk_RasterPos3f(GLfloat x, GLfloat y, GLfloat z)
{
	fn_RasterPos3f(x, y, z);
}

void WINAPI gl::hk_RasterPos3fv(const GLfloat* v)
{
	fn_RasterPos3fv(v);
}

void WINAPI gl::hk_RasterPos3i(GLint x, GLint y, GLint z)
{
	fn_RasterPos3i(x, y, z);
}

void WINAPI gl::hk_RasterPos3iv(const GLint* v)
{
	fn_RasterPos3iv(v);
}

void WINAPI gl::hk_RasterPos3s(GLshort x, GLshort y, GLshort z)
{
	fn_RasterPos3s(x, y, z);
}

void WINAPI gl::hk_RasterPos3sv(const GLshort* v)
{
	fn_RasterPos3sv(v);
}

void WINAPI gl::hk_RasterPos4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	fn_RasterPos4d(x, y, z, w);
}

void WINAPI gl::hk_RasterPos4dv(const GLdouble* v)
{
	fn_RasterPos4dv(v);
}

void WINAPI gl::hk_RasterPos4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	fn_RasterPos4f(x, y, z, w);
}

void WINAPI gl::hk_RasterPos4fv(const GLfloat* v)
{
	fn_RasterPos4fv(v);
}

void WINAPI gl::hk_RasterPos4i(GLint x, GLint y, GLint z, GLint w)
{
	fn_RasterPos4i(x, y, z, w);
}

void WINAPI gl::hk_RasterPos4iv(const GLint* v)
{
	fn_RasterPos4iv(v);
}

void WINAPI gl::hk_RasterPos4s(GLshort x, GLshort y, GLshort z, GLshort w)
{
	fn_RasterPos4s(x, y, z, w);
}

void WINAPI gl::hk_RasterPos4sv(const GLshort* v)
{
	fn_RasterPos4sv(v);
}

void WINAPI gl::hk_ReadBuffer(GLenum mode)
{
	fn_ReadBuffer(mode);
}

void WINAPI gl::hk_ReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid* pixels)
{
	fn_ReadPixels(x, y, width, height, format, type, pixels);
}

void WINAPI gl::hk_Rectd(GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2)
{
	fn_Rectd(x1, y1, x2, y2);
}

void WINAPI gl::hk_Rectdv(const GLdouble* v1, const GLdouble* v2)
{
	fn_Rectdv(v1, v2);
}

void WINAPI gl::hk_Rectf(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2)
{
	fn_Rectf(x1, y1, x2, y2);
}

void WINAPI gl::hk_Rectfv(const GLfloat* v1, const GLfloat* v2)
{
	fn_Rectfv(v1, v2);
}

void WINAPI gl::hk_Recti(GLint x1, GLint y1, GLint x2, GLint y2)
{
	fn_Recti(x1, y1, x2, y2);
}

void WINAPI gl::hk_Rectiv(const GLint* v1, const GLint* v2)
{
	fn_Rectiv(v1, v2);
}

void WINAPI gl::hk_Rects(GLshort x1, GLshort y1, GLshort x2, GLshort y2)
{
	fn_Rects(x1, y1, x2, y2);
}

void WINAPI gl::hk_Rectsv(const GLshort* v1, const GLshort* v2)
{
	fn_Rectsv(v1, v2);
}

GLint WINAPI gl::hk_RenderMode(GLenum mode)
{
	return fn_RenderMode(mode);
}

void WINAPI gl::hk_Rotated(GLdouble angle, GLdouble x, GLdouble y, GLdouble z)
{
	fn_Rotated(angle, x, y, z);
}

void WINAPI gl::hk_Rotatef(GLfloat angle, GLfloat x, GLfloat y, GLfloat z)
{
	fn_Rotatef(angle, x, y, z);
}

void WINAPI gl::hk_Scaled(GLdouble x, GLdouble y, GLdouble z)
{
	fn_Scaled(x, y, z);
}

void WINAPI gl::hk_Scalef(GLfloat x, GLfloat y, GLfloat z)
{
	fn_Scalef(x, y, z);
}

void WINAPI gl::hk_Scissor(GLint x, GLint y, GLsizei width, GLsizei height)
{
	fn_Scissor(x, y, width, height);
}

void WINAPI gl::hk_SelectBuffer(GLsizei size, GLuint* buffer)
{
	fn_SelectBuffer(size, buffer);
}

void WINAPI gl::hk_ShadeModel(GLenum mode)
{
	fn_ShadeModel(mode);
}

void WINAPI gl::hk_StencilFunc(GLenum func, GLint ref, GLuint mask)
{
	fn_StencilFunc(func, ref, mask);
}

void WINAPI gl::hk_StencilMask(GLuint mask)
{
	fn_StencilMask(mask);
}

void WINAPI gl::hk_StencilOp(GLenum fail, GLenum zfail, GLenum zpass)
{
	fn_StencilOp(fail, zfail, zpass);
}

void WINAPI gl::hk_TexCoord1d(GLdouble s)
{
	fn_TexCoord1d(s);
}

void WINAPI gl::hk_TexCoord1dv(const GLdouble* v)
{
	fn_TexCoord1dv(v);
}

void WINAPI gl::hk_TexCoord1f(GLfloat s)
{
	fn_TexCoord1f(s);
}

void WINAPI gl::hk_TexCoord1fv(const GLfloat* v)
{
	fn_TexCoord1fv(v);
}

void WINAPI gl::hk_TexCoord1i(GLint s)
{
	fn_TexCoord1i(s);
}

void WINAPI gl::hk_TexCoord1iv(const GLint* v)
{
	fn_TexCoord1iv(v);
}

void WINAPI gl::hk_TexCoord1s(GLshort s)
{
	fn_TexCoord1s(s);
}

void WINAPI gl::hk_TexCoord1sv(const GLshort* v)
{
	fn_TexCoord1sv(v);
}

void WINAPI gl::hk_TexCoord2d(GLdouble s, GLdouble t)
{
	fn_TexCoord2d(s, t);
}

void WINAPI gl::hk_TexCoord2dv(const GLdouble* v)
{
	fn_TexCoord2dv(v);
}

void WINAPI gl::hk_TexCoord2f(GLfloat s, GLfloat t)
{
	fn_TexCoord2f(s, t);
}

void WINAPI gl::hk_TexCoord2fv(const GLfloat* v)
{
	fn_TexCoord2fv(v);
}

void WINAPI gl::hk_TexCoord2i(GLint s, GLint t)
{
	fn_TexCoord2i(s, t);
}

void WINAPI gl::hk_TexCoord2iv(const GLint* v)
{
	fn_TexCoord2iv(v);
}

void WINAPI gl::hk_TexCoord2s(GLshort s, GLshort t)
{
	fn_TexCoord2s(s, t);
}

void WINAPI gl::hk_TexCoord2sv(const GLshort* v)
{
	fn_TexCoord2sv(v);
}

void WINAPI gl::hk_TexCoord3d(GLdouble s, GLdouble t, GLdouble r)
{
	fn_TexCoord3d(s, t, r);
}

void WINAPI gl::hk_TexCoord3dv(const GLdouble* v)
{
	fn_TexCoord3dv(v);
}

void WINAPI gl::hk_TexCoord3f(GLfloat s, GLfloat t, GLfloat r)
{
	fn_TexCoord3f(s, t, r);
}

void WINAPI gl::hk_TexCoord3fv(const GLfloat* v)
{
	fn_TexCoord3fv(v);
}

void WINAPI gl::hk_TexCoord3i(GLint s, GLint t, GLint r)
{
	fn_TexCoord3i(s, t, r);
}

void WINAPI gl::hk_TexCoord3iv(const GLint* v)
{
	fn_TexCoord3iv(v);
}

void WINAPI gl::hk_TexCoord3s(GLshort s, GLshort t, GLshort r)
{
	fn_TexCoord3s(s, t, r);
}

void WINAPI gl::hk_TexCoord3sv(const GLshort* v)
{
	fn_TexCoord3sv(v);
}

void WINAPI gl::hk_TexCoord4d(GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{
	fn_TexCoord4d(s, t, r, q);
}

void WINAPI gl::hk_TexCoord4dv(const GLdouble* v)
{
	fn_TexCoord4dv(v);
}

void WINAPI gl::hk_TexCoord4f(GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
	fn_TexCoord4f(s, t, r, q);
}

void WINAPI gl::hk_TexCoord4fv(const GLfloat* v)
{
	fn_TexCoord4fv(v);
}

void WINAPI gl::hk_TexCoord4i(GLint s, GLint t, GLint r, GLint q)
{
	fn_TexCoord4i(s, t, r, q);
}

void WINAPI gl::hk_TexCoord4iv(const GLint* v)
{
	fn_TexCoord4iv(v);
}

void WINAPI gl::hk_TexCoord4s(GLshort s, GLshort t, GLshort r, GLshort q)
{
	fn_TexCoord4s(s, t, r, q);
}

void WINAPI gl::hk_TexCoord4sv(const GLshort* v)
{
	fn_TexCoord4sv(v);
}

void WINAPI gl::hk_TexCoordPointer(GLint size, GLenum type, GLsizei stride, const GLvoid* pointer)
{
	fn_TexCoordPointer(size, type, stride, pointer);
}

void WINAPI gl::hk_TexEnvf(GLenum target, GLenum pname, GLfloat param)
{
	fn_TexEnvf(target, pname, param);
}

void WINAPI gl::hk_TexEnvfv(GLenum target, GLenum pname, const GLfloat* params)
{
	fn_TexEnvfv(target, pname, params);
}

void WINAPI gl::hk_TexEnvi(GLenum target, GLenum pname, GLint param)
{
	fn_TexEnvi(target, pname, param);
}

void WINAPI gl::hk_TexEnviv(GLenum target, GLenum pname, const GLint* params)
{
	fn_TexEnviv(target, pname, params);
}

void WINAPI gl::hk_TexGend(GLenum coord, GLenum pname, GLdouble param)
{
	fn_TexGend(coord, pname, param);
}

void WINAPI gl::hk_TexGendv(GLenum coord, GLenum pname, const GLdouble* params)
{
	fn_TexGendv(coord, pname, params);
}

void WINAPI gl::hk_TexGenf(GLenum coord, GLenum pname, GLfloat param)
{
	fn_TexGenf(coord, pname, param);
}

void WINAPI gl::hk_TexGenfv(GLenum coord, GLenum pname, const GLfloat* params)
{
	fn_TexGenfv(coord, pname, params);
}

void WINAPI gl::hk_TexGeni(GLenum coord, GLenum pname, GLint param)
{
	fn_TexGeni(coord, pname, param);
}

void WINAPI gl::hk_TexGeniv(GLenum coord, GLenum pname, const GLint* params)
{
	fn_TexGeniv(coord, pname, params);
}

void WINAPI gl::hk_TexImage1D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid* pixels)
{
	fn_TexImage1D(target, level, internalformat, width, border, format, type, pixels);
}

void WINAPI gl::hk_TexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid* pixels)
{
	fn_TexImage2D(target, level, internalformat, width, height, border, format, type, pixels);
}

void WINAPI gl::hk_TexParameterf(GLenum target, GLenum pname, GLfloat param)
{
	fn_TexParameterf(target, pname, param);
}

void WINAPI gl::hk_TexParameterfv(GLenum target, GLenum pname, const GLfloat* params)
{
	fn_TexParameterfv(target, pname, params);
}

void WINAPI gl::hk_TexParameteri(GLenum target, GLenum pname, GLint param)
{
	fn_TexParameteri(target, pname, param);
}

void WINAPI gl::hk_TexParameteriv(GLenum target, GLenum pname, const GLint* params)
{
	fn_TexParameteriv(target, pname, params);
}

void WINAPI gl::hk_TexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid* pixels)
{
	fn_TexSubImage1D(target, level, xoffset, width, format, type, pixels);
}

void WINAPI gl::hk_TexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid* pixels)
{
	fn_TexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels);
}

void WINAPI gl::hk_Translated(GLdouble x, GLdouble y, GLdouble z)
{
	fn_Translated(x, y, z);
}

void WINAPI gl::hk_Translatef(GLfloat x, GLfloat y, GLfloat z)
{
	fn_Translatef(x, y, z);
}

void WINAPI gl::hk_Vertex2d(GLdouble x, GLdouble y)
{
	fn_Vertex2d(x, y);
}

void WINAPI gl::hk_Vertex2dv(const GLdouble* v)
{
	fn_Vertex2dv(v);
}

void WINAPI gl::hk_Vertex2f(GLfloat x, GLfloat y)
{
	fn_Vertex2f(x, y);
}

void WINAPI gl::hk_Vertex2fv(const GLfloat* v)
{
	fn_Vertex2fv(v);
}

void WINAPI gl::hk_Vertex2i(GLint x, GLint y)
{
	fn_Vertex2i(x, y);
}

void WINAPI gl::hk_Vertex2iv(const GLint* v)
{
	fn_Vertex2iv(v);
}

void WINAPI gl::hk_Vertex2s(GLshort x, GLshort y)
{
	fn_Vertex2s(x, y);
}

void WINAPI gl::hk_Vertex2sv(const GLshort* v)
{
	fn_Vertex2sv(v);
}

void WINAPI gl::hk_Vertex3d(GLdouble x, GLdouble y, GLdouble z)
{
	fn_Vertex3d(x, y, z);
}

void WINAPI gl::hk_Vertex3dv(const GLdouble* v)
{
	fn_Vertex3dv(v);
}

void WINAPI gl::hk_Vertex3f(GLfloat x, GLfloat y, GLfloat z)
{
	fn_Vertex3f(x, y, z);
}

void WINAPI gl::hk_Vertex3fv(const GLfloat* v)
{
	fn_Vertex3fv(v);
}

void WINAPI gl::hk_Vertex3i(GLint x, GLint y, GLint z)
{
	fn_Vertex3i(x, y, z);
}

void WINAPI gl::hk_Vertex3iv(const GLint* v)
{
	fn_Vertex3iv(v);
}

void WINAPI gl::hk_Vertex3s(GLshort x, GLshort y, GLshort z)
{
	fn_Vertex3s(x, y, z);
}

void WINAPI gl::hk_Vertex3sv(const GLshort* v)
{
	fn_Vertex3sv(v);
}

void WINAPI gl::hk_Vertex4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
	fn_Vertex4d(x, y, z, w);
}

void WINAPI gl::hk_Vertex4dv(const GLdouble* v)
{
	fn_Vertex4dv(v);
}

void WINAPI gl::hk_Vertex4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	fn_Vertex4f(x, y, z, w);
}

void WINAPI gl::hk_Vertex4fv(const GLfloat* v)
{
	fn_Vertex4fv(v);
}

void WINAPI gl::hk_Vertex4i(GLint x, GLint y, GLint z, GLint w)
{
	fn_Vertex4i(x, y, z, w);
}

void WINAPI gl::hk_Vertex4iv(const GLint* v)
{
	fn_Vertex4iv(v);
}

void WINAPI gl::hk_Vertex4s(GLshort x, GLshort y, GLshort z, GLshort w)
{
	fn_Vertex4s(x, y, z, w);
}

void WINAPI gl::hk_Vertex4sv(const GLshort* v)
{
	fn_Vertex4sv(v);
}

void WINAPI gl::hk_VertexPointer(GLint size, GLenum type, GLsizei stride, const GLvoid* pointer)
{
	fn_VertexPointer(size, type, stride, pointer);
}

void WINAPI gl::hk_Viewport(GLint x, GLint y, GLsizei width, GLsizei height)
{
	fn_Viewport(x, y, width, height);
}