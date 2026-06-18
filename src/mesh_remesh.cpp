#include <stdio.h>

#include "mesh.h"
#include "mesh_inria.h"

int mmgs_remesh(Mesh &m, MBuf &data, float hausd, float hgrad, bool ridges,
		int verbose)
{
#ifndef NO_MMG
	return mmg_remesh(m, data, hausd, hgrad, ridges, verbose ? 1 : -1);
#else
	(void)m; (void)data; (void)hausd; (void)hgrad; (void)ridges; (void)verbose;
	return 0;
#endif
}
