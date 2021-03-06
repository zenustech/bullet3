#ifndef ZENO_SHAPEDATA_H
#define ZENO_SHAPEDATA_H

///position xyz, unused w, normal, uv
static const float cube_vertices[] =
{
-1.0f,
-1.0f,
1.0f,
1.0f,
0,
0,
1,
0,
0,  //0
1.0f,
-1.0f,
1.0f,
1.0f,
0,
0,
1,
1,
0,  //1
1.0f,
1.0f,
1.0f,
1.0f,
0,
0,
1,
1,
1,  //2
-1.0f,
1.0f,
1.0f,
1.0f,
0,
0,
1,
0,
1,  //3

-1.0f,
-1.0f,
-1.0f,
1.0f,
0,
0,
-1,
0,
0,  //4
1.0f,
-1.0f,
-1.0f,
1.0f,
0,
0,
-1,
1,
0,  //5
1.0f,
1.0f,
-1.0f,
1.0f,
0,
0,
-1,
1,
1,  //6
-1.0f,
1.0f,
-1.0f,
1.0f,
0,
0,
-1,
0,
1,  //7

-1.0f,
-1.0f,
-1.0f,
1.0f,
-1,
0,
0,
0,
0,
-1.0f,
1.0f,
-1.0f,
1.0f,
-1,
0,
0,
1,
0,
-1.0f,
1.0f,
1.0f,
1.0f,
-1,
0,
0,
1,
1,
-1.0f,
-1.0f,
1.0f,
1.0f,
-1,
0,
0,
0,
1,

1.0f,
-1.0f,
-1.0f,
1.0f,
1,
0,
0,
0,
0,
1.0f,
1.0f,
-1.0f,
1.0f,
1,
0,
0,
1,
0,
1.0f,
1.0f,
1.0f,
1.0f,
1,
0,
0,
1,
1,
1.0f,
-1.0f,
1.0f,
1.0f,
1,
0,
0,
0,
1,

-1.0f,
-1.0f,
-1.0f,
1.0f,
0,
-1,
0,
0,
0,
-1.0f,
-1.0f,
1.0f,
1.0f,
0,
-1,
0,
1,
0,
1.0f,
-1.0f,
1.0f,
1.0f,
0,
-1,
0,
1,
1,
1.0f,
-1.0f,
-1.0f,
1.0f,
0,
-1,
0,
0,
1,

-1.0f,
1.0f,
-1.0f,
1.0f,
0,
1,
0,
0,
0,
-1.0f,
1.0f,
1.0f,
1.0f,
0,
1,
0,
1,
0,
1.0f,
1.0f,
1.0f,
1.0f,
0,
1,
0,
1,
1,
1.0f,
1.0f,
-1.0f,
1.0f,
0,
1,
0,
0,
1,
};

///position xyz, unused w, normal, uv
static const float cube_vertices_textured[] =
{
-1.0f,
-1.0f,
1.0f,
1.0f,
0,
0,
1,
0.75,
0.25,  //0//back
1.0f,
-1.0f,
1.0f,
1.0f,
0,
0,
1,
1,
0.25,  //1
1.0f,
1.0f,
1.0f,
1.0f,
0,
0,
1,
1,
0,  //2
-1.0f,
1.0f,
1.0f,
1.0f,
0,
0,
1,
0.75,
0,  //3

-1.0f,
-1.0f,
-1.0f,
1.0f,
0,
0,
-1,
0.5,
0.25,  //4//front
1.0f,
-1.0f,
-1.0f,
1.0f,
0,
0,
-1,
0.25,
0.25,  //5
1.0f,
1.0f,
-1.0f,
1.0f,
0,
0,
-1,
0.25,
0,  //6
-1.0f,
1.0f,
-1.0f,
1.0f,
0,
0,
-1,
0.5,
0,  //7

-1.0f,
-1.0f,
-1.0f,
1.0f,
-1,
0,
0,
0.5,
0,  //Right
-1.0f,
1.0f,
-1.0f,
1.0f,
-1,
0,
0,
0.75,
0,
-1.0f,
1.0f,
1.0f,
1.0f,
-1,
0,
0,
0.75,
0.25,
-1.0f,
-1.0f,
1.0f,
1.0f,
-1,
0,
0,
0.5,
0.25,

1.0f,
-1.0f,
-1.0f,
1.0f,
1,
0,
0,
0.25,
0.5,  //Left
1.0f,
1.0f,
-1.0f,
1.0f,
1,
0,
0,
0.25,
0.25,
1.0f,
1.0f,
1.0f,
1.0f,
1,
0,
0,
0.,
.25,
1.0f,
-1.0f,
1.0f,
1.0f,
1,
0,
0,
0,
.5,

-1.0f,
-1.0f,
-1.0f,
1.0f,
0,
-1,
0,
0.25,
0.5,  //bottom
-1.0f,
-1.0f,
1.0f,
1.0f,
0,
-1,
0,
0.25,
0.25,
1.0f,
-1.0f,
1.0f,
1.0f,
0,
-1,
0,
0.5,
0.25,
1.0f,
-1.0f,
-1.0f,
1.0f,
0,
-1,
0,
0.5,
0.5,

-1.0f,
1.0f,
-1.0f,
1.0f,
0,
1,
0,
0,
0,  //top
-1.0f,
1.0f,
1.0f,
1.0f,
0,
1,
0,
0,
0.25,
1.0f,
1.0f,
1.0f,
1.0f,
0,
1,
0,
0.25,
0.25,
1.0f,
1.0f,
-1.0f,
1.0f,
0,
1,
0,
0.25,
0,
};



static const int cube_indices[] =
{
0, 1, 2, 0, 2, 3,  //ground face
6, 5, 4, 7, 6, 4,  //top face
10, 9, 8, 11, 10, 8,
12, 13, 14, 12, 14, 15,
18, 17, 16, 19, 18, 16,
20, 21, 22, 20, 22, 23};

#endif //ZENO_SHAPEDATA_H
