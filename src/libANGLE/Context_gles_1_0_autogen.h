// GENERATED FILE - DO NOT EDIT.
// Generated by generate_entry_points.py using data from gl.xml.
//
// Copyright 2020 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// Context_gles_1_0_autogen.h: Creates a macro for interfaces in Context.

#ifndef ANGLE_CONTEXT_GLES_1_0_AUTOGEN_H_
#define ANGLE_CONTEXT_GLES_1_0_AUTOGEN_H_

#define ANGLE_GLES_1_0_CONTEXT_API                                                               \
    void alphaFunc(AlphaTestFunc funcPacked, GLfloat ref);                                       \
    void alphaFuncx(AlphaTestFunc funcPacked, GLfixed ref);                                      \
    void clientActiveTexture(GLenum texture);                                                    \
    void clipPlanef(GLenum p, const GLfloat *eqn);                                               \
    void clipPlanex(GLenum plane, const GLfixed *equation);                                      \
    void color4f(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);                       \
    void color4ub(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha);                      \
    void color4x(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha);                       \
    void colorPointer(GLint size, VertexAttribType typePacked, GLsizei stride,                   \
                      const void *pointer);                                                      \
    void disableClientState(ClientVertexArrayType arrayPacked);                                  \
    void enableClientState(ClientVertexArrayType arrayPacked);                                   \
    void fogf(GLenum pname, GLfloat param);                                                      \
    void fogfv(GLenum pname, const GLfloat *params);                                             \
    void fogx(GLenum pname, GLfixed param);                                                      \
    void fogxv(GLenum pname, const GLfixed *param);                                              \
    void frustumf(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f);             \
    void frustumx(GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f);             \
    void getClipPlanef(GLenum plane, GLfloat *equation);                                         \
    void getClipPlanex(GLenum plane, GLfixed *equation);                                         \
    void getFixedv(GLenum pname, GLfixed *params);                                               \
    void getLightfv(GLenum light, LightParameter pnamePacked, GLfloat *params);                  \
    void getLightxv(GLenum light, LightParameter pnamePacked, GLfixed *params);                  \
    void getMaterialfv(GLenum face, MaterialParameter pnamePacked, GLfloat *params);             \
    void getMaterialxv(GLenum face, MaterialParameter pnamePacked, GLfixed *params);             \
    void getTexEnvfv(TextureEnvTarget targetPacked, TextureEnvParameter pnamePacked,             \
                     GLfloat *params);                                                           \
    void getTexEnviv(TextureEnvTarget targetPacked, TextureEnvParameter pnamePacked,             \
                     GLint *params);                                                             \
    void getTexEnvxv(TextureEnvTarget targetPacked, TextureEnvParameter pnamePacked,             \
                     GLfixed *params);                                                           \
    void getTexParameterxv(TextureType targetPacked, GLenum pname, GLfixed *params);             \
    void lightModelf(GLenum pname, GLfloat param);                                               \
    void lightModelfv(GLenum pname, const GLfloat *params);                                      \
    void lightModelx(GLenum pname, GLfixed param);                                               \
    void lightModelxv(GLenum pname, const GLfixed *param);                                       \
    void lightf(GLenum light, LightParameter pnamePacked, GLfloat param);                        \
    void lightfv(GLenum light, LightParameter pnamePacked, const GLfloat *params);               \
    void lightx(GLenum light, LightParameter pnamePacked, GLfixed param);                        \
    void lightxv(GLenum light, LightParameter pnamePacked, const GLfixed *params);               \
    void loadIdentity();                                                                         \
    void loadMatrixf(const GLfloat *m);                                                          \
    void loadMatrixx(const GLfixed *m);                                                          \
    void materialf(GLenum face, MaterialParameter pnamePacked, GLfloat param);                   \
    void materialfv(GLenum face, MaterialParameter pnamePacked, const GLfloat *params);          \
    void materialx(GLenum face, MaterialParameter pnamePacked, GLfixed param);                   \
    void materialxv(GLenum face, MaterialParameter pnamePacked, const GLfixed *param);           \
    void matrixMode(MatrixType modePacked);                                                      \
    void multMatrixf(const GLfloat *m);                                                          \
    void multMatrixx(const GLfixed *m);                                                          \
    void multiTexCoord4f(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q);             \
    void multiTexCoord4x(GLenum texture, GLfixed s, GLfixed t, GLfixed r, GLfixed q);            \
    void normal3f(GLfloat nx, GLfloat ny, GLfloat nz);                                           \
    void normal3x(GLfixed nx, GLfixed ny, GLfixed nz);                                           \
    void normalPointer(VertexAttribType typePacked, GLsizei stride, const void *pointer);        \
    void orthof(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f);               \
    void orthox(GLfixed l, GLfixed r, GLfixed b, GLfixed t, GLfixed n, GLfixed f);               \
    void pointParameterf(PointParameter pnamePacked, GLfloat param);                             \
    void pointParameterfv(PointParameter pnamePacked, const GLfloat *params);                    \
    void pointParameterx(PointParameter pnamePacked, GLfixed param);                             \
    void pointParameterxv(PointParameter pnamePacked, const GLfixed *params);                    \
    void pointSize(GLfloat size);                                                                \
    void pointSizex(GLfixed size);                                                               \
    void popMatrix();                                                                            \
    void pushMatrix();                                                                           \
    void rotatef(GLfloat angle, GLfloat x, GLfloat y, GLfloat z);                                \
    void rotatex(GLfixed angle, GLfixed x, GLfixed y, GLfixed z);                                \
    void scalef(GLfloat x, GLfloat y, GLfloat z);                                                \
    void scalex(GLfixed x, GLfixed y, GLfixed z);                                                \
    void shadeModel(ShadingModel modePacked);                                                    \
    void texCoordPointer(GLint size, VertexAttribType typePacked, GLsizei stride,                \
                         const void *pointer);                                                   \
    void texEnvf(TextureEnvTarget targetPacked, TextureEnvParameter pnamePacked, GLfloat param); \
    void texEnvfv(TextureEnvTarget targetPacked, TextureEnvParameter pnamePacked,                \
                  const GLfloat *params);                                                        \
    void texEnvi(TextureEnvTarget targetPacked, TextureEnvParameter pnamePacked, GLint param);   \
    void texEnviv(TextureEnvTarget targetPacked, TextureEnvParameter pnamePacked,                \
                  const GLint *params);                                                          \
    void texEnvx(TextureEnvTarget targetPacked, TextureEnvParameter pnamePacked, GLfixed param); \
    void texEnvxv(TextureEnvTarget targetPacked, TextureEnvParameter pnamePacked,                \
                  const GLfixed *params);                                                        \
    void texParameterx(TextureType targetPacked, GLenum pname, GLfixed param);                   \
    void texParameterxv(TextureType targetPacked, GLenum pname, const GLfixed *params);          \
    void translatef(GLfloat x, GLfloat y, GLfloat z);                                            \
    void translatex(GLfixed x, GLfixed y, GLfixed z);                                            \
    void vertexPointer(GLint size, VertexAttribType typePacked, GLsizei stride,                  \
                       const void *pointer);

#endif  // ANGLE_CONTEXT_API_1_0_AUTOGEN_H_
