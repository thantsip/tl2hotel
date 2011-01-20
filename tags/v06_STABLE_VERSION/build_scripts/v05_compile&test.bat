cd ..
cd src
qmake
mingw32-make.exe -w

@echo off
@echo [Building Tests Started]

pushd = "%cd%"

cd "%~dp0"
for /d %%D in ("..\tests\*") do (
  cd "%%D"

  qmake -Wnone
  mingw32-make -s

  if exist "Makefile*"            erase /F /Q "Makefile*"

  if exist "debug\*.o"            erase /F /Q "debug\*.o"
  if exist "debug\moc_*"          erase /F /Q "debug\moc_*"
  if exist "debug\*.s3db"         erase /F /Q "debug\*.s3db"
  if exist "debug\*.txt"          erase /F /Q "debug\*.txt"

  if exist "release\*"            erase /F /Q "release\*"
  if exist "release"              rmdir release

  cd "%~dp0"
)

popd

@echo [Building Tests Finished]
@echo on

@echo off
@echo [Running Tests Started]

pushd = "%cd%"

cd "%~dp0"
for /d %%D in ("..\tests\*") do (
  cd "%%D\debug"

  testing

  if exist "*.s3db" erase /F /Q "*.s3db"
  if exist "*.txt"  erase /F /Q "*.txt"

  cd "%~dp0"
)

popd

@echo [Running Tests Finished]
@echo on