#include <Python.h>
#include <stdio.h>
#include <object.h>
#include <listobject.h>

/**
 * print_python_list_info - prints  basic info about python lists
 * @p: the python object
 */
void print_python_list_info(PyObject *p)
{
	int cap;
	int allocated;
	int n;

	cap = Py_SIZE(p);
	allocated = ((PyListObject *)p)->allocated;
	printf("[*] Size of the Python List = %d\n", cap);
	printf("[*] Allocated = %d\n", allocated);

	for (n = 0; n < cap; n++)
	{
		printf("Element %d: ", n);
		printf("%s\n", ((PyList_GetItem(p, n))->ob_type)->tp_name);
	}
}
