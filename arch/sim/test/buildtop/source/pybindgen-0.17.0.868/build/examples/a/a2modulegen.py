from pybindgen import Module, FileCodeSink, param, retval, cppclass, typehandlers


import pybindgen.settings
import warnings

class ErrorHandler(pybindgen.settings.ErrorHandler):
    def handle_error(self, wrapper, exception, traceback_):
        warnings.warn("exception %r in wrapper %s" % (exception, wrapper))
        return True
pybindgen.settings.error_handler = ErrorHandler()


import sys

def module_init():
    root_module = Module('a2', cpp_namespace='::')
    root_module.add_include('"a.h"')
    return root_module

def register_types(module):
    root_module = module.get_root()
    
    
    ## Register a nested module for the namespace std
    
    nested_module = module.add_cpp_namespace('std')
    register_types_std(nested_module)
    

def register_types_std(module):
    root_module = module.get_root()
    

def register_methods(root_module):
    return

def register_functions(root_module):
    module = root_module
    module.add_function('ADoA', 
                        'void', 
                        [])
    module.add_function('ADoB', 
                        'void', 
                        [param('uint32_t', 'b')])
    module.add_function('ADoC', 
                        'uint32_t', 
                        [])
    register_functions_std(module.get_submodule('std'), root_module)
    return

def register_functions_std(module, root_module):
    return

def main():
    out = FileCodeSink(sys.stdout)
    root_module = module_init()
    register_types(root_module)
    register_methods(root_module)
    register_functions(root_module)
    root_module.generate(out)

if __name__ == '__main__':
    main()

