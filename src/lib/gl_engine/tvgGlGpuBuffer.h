/*
 * Copyright (c) 2020 - 2023 the ThorVG project. All rights reserved.

 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:

 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.

 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef _TVG_GL_GPU_BUFFER_H_
#define _TVG_GL_GPU_BUFFER_H_

#include "tvgGlCommon.h"

class GlGpuBuffer
{
public:
    enum class Target
    {
        ARRAY_BUFFER = GL_ARRAY_BUFFER,
        ELEMENT_ARRAY_BUFFER = GL_ARRAY_BUFFER
    };

    GlGpuBuffer();
    ~GlGpuBuffer();
    void updateBufferData(Target target, uint32_t size, const void* data);
    void unbind(Target target);
private:
    uint32_t    mGlBufferId = 0;

};

#endif /* _TVG_GL_GPU_BUFFER_H_ */

