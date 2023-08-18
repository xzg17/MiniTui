from distutils.core import setup, Extension
import os

os.environ['CC'] = 'gcc'

src_dir = 'src'

ext_modules = []
ext_modules.append(Extension('BlindMiniShogi',[src_dir + '/TsuiBoard5.cpp']))
setup(
  name='custom',
  ext_modules = ext_modules,
  url="https://github.com/xzg17/MiniTsui"
)
