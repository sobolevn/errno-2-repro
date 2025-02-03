from setuptools import setup, Extension


setup(
    name='asm_builtins',
    version='0.1.0',
    description="CPython's builtins in x86_64 Linux ASM",
    author='Nikita Sobolev',
    author_email='mail@sobolevn.me',
    ext_modules=[
        Extension('asm_builtins', ['asm_builtins/mod.c']),
    ],
)
