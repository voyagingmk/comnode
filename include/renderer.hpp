#ifndef RENDERER_HPP
#define RENDERER_HPP

#include "base.hpp"

class Geometry;
class PerspectiveCamera;

class Renderer{
public:
    void renderDepth(cil::CImg<unsigned char>&, Geometry&, PerspectiveCamera&, double maxDepth);
    void renderNormal(cil::CImg<unsigned char> &img, Geometry& scene, PerspectiveCamera& camera, double maxDepth);
    void rayTrace(cil::CImg<unsigned char> &img, Geometry& scene, PerspectiveCamera& camera);
	PtrColor rayTraceRecursive( Geometry& scene, PtrRay ray, int maxReflect);
	void rayTraceReflection(cil::CImg<unsigned char> &img, Geometry& scene, PerspectiveCamera& camera, int maxReflect);
};


#endif // RENDERER_HPP
