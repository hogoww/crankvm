#ifndef CRANK_VM_SYSTEM_PRIMITIVES_H
#define CRANK_VM_SYSTEM_PRIMITIVES_H

#include "interpreter-internal.h"

void crankvm_primitive_primitiveFail(crankvm_primitive_context_t *primitiveContext);
void crankvm_primitive_primitiveFailUnexistent(crankvm_primitive_context_t *primitiveContext);

#endif //CRANK_VM_SYSTEM_PRIMITIVES_H
