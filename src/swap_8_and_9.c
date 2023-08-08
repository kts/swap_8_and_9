/*
*/

#include <Python.h>

/*
  methods in Module
 */
static PyMethodDef swap_8_and_9_methods[] = {
  //marks end:
  {NULL, NULL, 0, NULL}
};


/*
  define Module
*/ 
static struct PyModuleDef swap_8_and_9_definition = { 
    PyModuleDef_HEAD_INIT,
    "swap_8_and_9", /* module name */

    /* __doc__ string: */
    "C Module that...",

    /* size of per-interpreter state of the module,
       or -1 if the module keeps state in global variables. */
    -1,

    swap_8_and_9_methods
};


/*
  initialize Module
  - called on import
  - PyInit_{name}
    (name from setup.py name)
*/ 
PyMODINIT_FUNC PyInit_swap_8_and_9(void) {
    Py_Initialize();

    PyLongObject* obj8 = (PyLongObject*)PyLong_FromLong(8);
    PyLongObject* obj9 = (PyLongObject*)PyLong_FromLong(9);

    obj8->ob_digit[0] = 9;
    obj9->ob_digit[0] = 8;

    return PyModule_Create(&swap_8_and_9_definition);
}
