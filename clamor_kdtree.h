#include <cstdarg>
#include <cstdint>
#include <cstdlib>
#include <new>

template<typename A, typename T, typename U>
struct KdTree;

struct ResTuple {
  double npoints;
  uintptr_t dist;
};

extern "C" {

KdTree<double, uintptr_t, double[2]> *kdtree_create(uint64_t size);

ResTuple kdtree_lookup(KdTree<double, uintptr_t, double[2]> *kdtree, const double (*idx)[2]);

} // extern "C"
