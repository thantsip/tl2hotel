@echo off
@echo [Building Tests Started]

pushd = "%cd%"

cd "%~dp0"
for /d %%D in ("..\tests\*") do (
  mingw32-make -s -C "%%D"
  erase /F /Q "%%D\debug\*.o"
)

popd

@echo [Building Tests Finished]
@echo on