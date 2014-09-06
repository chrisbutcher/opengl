//
//  mesh.h
//  basicopengl
//
//  Created by chris on 2014-09-05.
//  Copyright (c) 2014 chris. All rights reserved.
//

#ifndef __basicopengl__mesh__
#define __basicopengl__mesh__


#ifdef __APPLE__
#define __gl_h_
#define GL_DO_NOT_WARN_IF_MULTI_GL_VERSION_HEADERS_INCLUDED
#endif

#include <iostream>
#include <OpenGL/gl3.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>

class Vertex {
public:
    Vertex(const glm::vec3& pos){
        this->pos = pos;
    }
protected:
private:
    glm::vec3 pos;
};

class Mesh {
public:
    Mesh(Vertex* vertices, unsigned int numVertices);
    
    void Draw();    
    
    virtual ~Mesh();
protected:
private:
    
    enum {
        POSITION_VB,
        NUM_BUFFERS
    };
    
    GLuint m_vertexArrayObject;
    GLuint m_vertexArrayBuffers[NUM_BUFFERS];
    
    unsigned int m_drawCount;
};



#endif /* defined(__basicopengl__mesh__) */
