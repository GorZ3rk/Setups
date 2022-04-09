from distutils.core import setup, Extension

def main():
    setup(name="modulename",
            version="1.0.0",
            description="Python interface for the fputs C library function",
            author="WS",
            author_email="melodymaa28@hotmail.com",
            ext_modules=[Extension("modulename", ["fputsmodule.c"])])

if __name__ == "__main__":
    main()