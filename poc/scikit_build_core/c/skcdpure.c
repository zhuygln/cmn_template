#define PY_SSIZE_T_CLEAN
#include <Python.h>

// Function to be called from Python, prints a message
static PyObject *hello_function(PyObject *self, PyObject *args) {
    // Import the builtins module
    PyObject* builtins = PyImport_ImportModule("builtins");
    // Get the 'print' function from the builtins module
    PyObject* print = PyObject_GetAttrString(builtins, "print");
    // Create a Python string object with the message
    PyObject* msg = PyUnicode_FromString("Hello, scikit-build-core CAPI fans!");
    // Call the print function with the message
    PyObject* none = PyObject_CallOneArg(print, msg);

    // Decrement reference counts to prevent memory leaks
    Py_XDECREF(print);
    Py_XDECREF(builtins);
    Py_XDECREF(msg);
    Py_XDECREF(none);

    // Return None to Python
    Py_RETURN_NONE;
}

// Method definitions for the module
static PyMethodDef skcdpure_methods[] = {
    {"hello", hello_function, METH_NOARGS, "Hello function"}, // Method name, C function, argument type, docstring
    {NULL, NULL, 0, NULL} // Sentinel to mark the end of the array
};

// Module definition structure
static struct PyModuleDef skcdpure_module = {
    PyModuleDef_HEAD_INIT, // Initialization macro
    "skcdpure",            // Module name
    NULL,                  // Module documentation (can be NULL)
    -1,                    // Size of per-interpreter state of the module, or -1 if the module keeps state in global variables
    skcdpure_methods       // Methods associated with the module
};

// Module initialization function
PyMODINIT_FUNC PyInit_skcdpure(void) {
    return PyModule_Create(&skcdpure_module); // Create the module and return it
}
