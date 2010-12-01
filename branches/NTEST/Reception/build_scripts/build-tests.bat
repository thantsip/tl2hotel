@echo off
@echo [Building Tests Started]

pushd = "%cd%"

cd "%~dp0"
for /d %%D in ("..\tests\*") do (
  cd "%%D"
  qmake -Wnone
  mingw32-make -s
  erase /F /Q "debug\*.o"
  erase /F /Q "Makefile*"
  rmdir release
  erase "debug\moc_*"
  cd "%~dp0"
)

popd

@echo [Building Tests Finished]
@echo on