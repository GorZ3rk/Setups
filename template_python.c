#include <Python.h>

static PyObject *my_func(PyObject *self, PyObject *args) {


    // PyArg_ParseTuple(args, "", , ,)
    

    int return_value = 0;
    return PyLong_FromLong(return_value);

}


static PyMethodDef MyMethods[] = {
    {"method_name", my_func, METH_VARARGS, "Method INFO"},
    {NULL, NULL, 0, NULL}

};



static struct PyModuleDef MyModule = {
    PyModuleDef_HEAD_INIT,
    "modulename",
    "Module INFO",
    -1,
    MyMethods
};

PyMODINIT_FUNC PyInit_modulename(void) {
    return PyModule_Create(&MyModule);
}