# ray-tracer
A ray tracer in my interpretation:
    writing in C because I do not know C++
starting with 3D vectors and their operations since that seems like an important basis.

reading this resource online: https://rtintro.realtimerendering.com/
https://www.realtimerendering.com/raytracing/Ray%20Tracing%20in%20a%20Weekend.pdf

or maybe this idk:
https://www.realtimerendering.com/raytracing/Ray%20Tracing%20in%20a%20Weekend.pdf


407 project roll into the summer, personal tray tracer all the better to experiment with wave lengths, geometric projections, stereographic projections etc. 

testing VM commits

My ray tracing process:

Going into this project I did have a good familiarity with vectors, 
for example dot product, or cross product multiplication. This was however,
My first time ever seeing a ppm file and its formatting. 
If you are also unfamiliar with what a ppm file is, ppm stands for 
Portable Pixmap, and its a simple image file that stores pixel data in 
either binary or in a readable text file. The first example from "Ray Tracing
in One Weekend" by Peter Shirley, (I'll abreviate this source to TRIOW maybe)
was how to write the graphics of "hello world". My implementation can be seen
as hello.c in teh examples folder.
    notable aspects of a ppm file are that its first line has formatting
information, the second line has dimensions in pixels, the third line has the
max color? and the following hundreds of thousands of lines has each pixel
red green blue information.
    I believe it goes from top left corner the top pixel, and each following
pixel goes across, then down and across and so on. 

How a ray tracer works:
    
imagine a ray as a part of a line. It has some orgin A, and a direction
B, and is oreinted in 3D space. the function of this rays position p, is
parameterized by some faraible t, which w can think of as time, then 
a function for a ray is given by: 
        p(t) = A + Bt
for all positive values of t ( an arbitrary decision to keep the orgin A
as the forefront as our image) this function defines the many rays that 
will be used to define the viewing feild.

