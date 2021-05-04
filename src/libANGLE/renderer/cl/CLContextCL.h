//
// Copyright 2021 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// CLContextCL.h:
//    Defines the class interface for CLContextCL, implementing CLContextImpl.
//

#ifndef LIBANGLE_RENDERER_CL_CLCONTEXTCL_H_
#define LIBANGLE_RENDERER_CL_CLCONTEXTCL_H_

#include "libANGLE/renderer/CLContextImpl.h"

namespace rx
{

class CLContextCL : public CLContextImpl
{
  public:
    CLContextCL();
    ~CLContextCL() override;
};

}  // namespace rx

#endif  // LIBANGLE_RENDERER_CL_CLCONTEXTCL_H_
