@echo off
@echo [Building Tests Started]

pushd = "%cd%"

cd "%~dp0"
for /d %%D in ("..\tests\*") do (
  cd "%%D"

  qmake -Wnone
  mingw32-make -s

  if exist "debug\*.o"    erase /F /Q "debug\*.o"
  if exist "Makefile*"    erase /F /Q "Makefile*"
  if exist "debug\moc_*"  erase /F /Q "debug\moc_*"
  if exist "debug\*.s3db" erase /F /Q "debug\*.s3db"
  if exist "debug\*.txt"  erase /F /Q "debug\*.txt"
  if exist "release"      rmdir release

  cd "%~dp0"
)

popd

@echo [Building Tests Finished]
@echo on