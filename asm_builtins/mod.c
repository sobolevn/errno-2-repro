#include <Python.h>

static PyObject *
print(PyObject *self, PyObject *args)
{
    Py_RETURN_NONE;
}

PyDoc_STRVAR(print__doc__,
"print($module, /, *args)\n"
"--\n"
"\n"
"Print passed args as strings.");


static PyMethodDef module_methods[] = {
    {"print", (PyCFunction)print, METH_VARARGS, print__doc__},
    {NULL}  // sentinel
};


static struct PyModuleDef asm_builtins_spec = {
    PyModuleDef_HEAD_INIT,
    "asm_builtins",
    PyDoc_STR("Builtins re-implemented in ASM"),
    -1,
    module_methods
};


PyMODINIT_FUNC PyInit_asm_builtins(void) {
    printf("errno = %d\n", errno);
    return PyModule_Create(&asm_builtins_spec);
}
