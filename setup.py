from distutils.core import setup, Extension

name = 'swap_8_and_9'
setup(name = name,
      version = '0.1.0',
      description = 'Proof of concept that swaps ints 8 and 9 on import',
      ext_modules = [
          Extension(name, sources = ['src/' + name + '.c']),
      ])
